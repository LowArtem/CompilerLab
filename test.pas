
{$A8,B-,K-,M-,O+,P+,Q-,R-,S-,T-,W-,X+,Z1}
unit WeakObjectReferences;

interface

{$WEAKPACKAGEUNIT}

// The WeakReference interface supports the QueryInterface method if ALLOW_QUERYINTERFACE is defined and

{$DEFINE ALLOW_QUERYINTERFACE}

{$DEFINE USE_MONITOR_FIELD}

type
  TWeakRefBaseObject = class(TObject)
  private
    FWeakReferences: Pointer;
  public
    destructor Destroy; override;
  end;

  IWeakReference<T: class> = interface
    function GetTarget: T;
    
    property Target: T read GetTarget;

    function IsAlive: Boolean;
  end;

  TWeakReference<T: class> = record
  private
    FWeakRef: IWeakReference<T>;
    function GetTarget: T; inline;
  public
    property Target: T read GetTarget;

    function IsAlive: Boolean; inline;

    constructor Create(const AObject: TObject);
    procedure Assign(const AObject: TObject); inline;

    class operator Implicit(const AObject: T): TWeakReference<T>; overload; inline;
    class operator Implicit(const AValue: TWeakReference<T>): T; overload; inline;

    class function New(const AObject: TObject): IWeakReference<T>; overload; static;
  end;

  { Helper class that is used internally. }

  (* dsfd sfdg 
   * dfa daf dsf )) **\) (())
   asdf adfadsf  *)

  TInternalWeakReferenceHelper = record
  private
    type
      PPWeakObjectHelper = ^PWeakObjectHelper;
      PWeakObjectHelper = ^TWeakObjectHelper;

      PWeakObjectHelperData = ^TWeakObjectHelperData;
      TWeakObjectHelperData = record
        InterfaceSelfPtr: PWeakObjectHelper;
        FObject: Pointer;
        FRefCount: Integer;
        ExtraData: record end;
      end;

      TWeakObjectHelper = record
        {$IFDEF ALLOW_QUERYINTERFACE}
        QueryInterface: function(Data: PWeakObjectHelperData; const IID: TGUID; out Obj): HRESULT; stdcall;
        {$ELSE}
          {$IFDEF USE_MONITOR_FIELD}
        Monitor: Pointer; // Use the QueryInterface slot
          {$ELSE}
        QueryInterface: Pointer;
          {$ENDIF USE_MONITOR_FIELD}
        {$ENDIF ALLOW_QUERYINTERFACE}
        AddRef: function(Data: PWeakObjectHelperData): Integer; stdcall;
        Release: function(Data: PWeakObjectHelperData): Integer; stdcall;
        GetTarget: function(Data: PWeakObjectHelperData): TObject;
        IsAlive: function(Data: PWeakObjectHelperData): Boolean;

        {$IFDEF ALLOW_QUERYINTERFACE}
          {$IFDEF USE_MONITOR_FIELD}
        Monitor: Pointer;
          {$ENDIF USE_MONITOR_FIELD}
        {$ENDIF ALLOW_QUERYINTERFACE}
        Data: TWeakObjectHelperData;
      end;

      TAdditionalDataDtorProc = procedure(Data: Pointer);

      TAdditionalDataDtor = record
        Offset: Integer;
        Dtor: TAdditionalDataDtorProc;
      end;

    class var
      AdditionalDataSize: Integer;
      AdditionalDataDtors: array of TAdditionalDataDtor;
      HelperAllocated: Boolean;

    class function GetWeakReferenceField(const AObject: TObject): PPWeakObjectHelper; static;
    class function Equals(const AWeakRef: IInterface; const AObject: TObject): Boolean; static;

    class procedure DestroyingObject(const AObject: TObject); static;
    class function GetWeakObjectHelper(const AObject: TObject): PWeakObjectHelper; static;
    class procedure GetNilWeakReference(var AWeakRef: IInterface); static;
  public
    { RegisterAdditionalData adds additional bytes to the Helper's memory block that can be used
      by other libraries to store data in the object. This function throws a RunError(255) if there
      is already a Helper allocated or Size if less than or equal zero. The returned value is
      the offset that must be used when calling GetAdditionalData. }
    class function RegisterAdditionalData(ASize: Integer; ADtor: TAdditionalDataDtorProc = nil): Integer; static;
    { GetAdditionalData returns a pointer to the additional data that was registered with
      RegisterAdditionalData. The memory is initialized with zeros. A RunError(255) is thrown
      if the Offset is negative or larger than the allocated size. The returned value points to
      the memory that contains the data. }
    class function GetAdditionalData(const AObject: TObject; AOffset: Integer): Pointer; static;
  end;

implementation

uses
  Windows;

const
  {$IFDEF CPUX64}
  HelperDefaultSize = (SizeOf(TInternalWeakReferenceHelper.TWeakObjectHelper) + 7) and not 7; // 8 Byte alignment
  {$ELSE}
  HelperDefaultSize = (SizeOf(TInternalWeakReferenceHelper.TWeakObjectHelper) + 3) and not 3; // 4 Byte alignment
  {$ENDIF CPUX64}

{$IFDEF USE_MONITOR_FIELD}
  {$DEFINE HOOK_CLASSDESTROY}
{$ENDIF USE_MONITOR_FIELD}

{ TWeakRefBaseObject }

destructor TWeakRefBaseObject.Destroy;
begin
  {$IFNDEF HOOK_CLASSDESTROY}
  TInternalWeakReferenceHelper.DestroyingObject(Self);
  {$ENDIF ~HOOK_CLASSDESTROY}
  inherited Destroy;
end;

{ Interface Callback function }

{$IFDEF ALLOW_QUERYINTERFACE}
function WeakReference_QueryInterface(Data: TInternalWeakReferenceHelper.PWeakObjectHelperData; const IID: TGUID; out Obj): HRESULT; stdcall;
var
  Instance: TObject;
  LUnknown: IUnknown;

  test: string;
  int: Integer;
  float: Real;
  expon: Real;
  ff: Integer;
begin
  Result := E_NOINTERFACE;
  Instance := Data.FObject;

  test := 'Test"''test test\n()\t';
  float := 3.14;
  expon := 3.14e23;
  int := 2;
  ff := $1234A;

  if Instance <> nil then
    if Instance.GetInterface(IUnknown, LUnknown) then
      Result := LUnknown.QueryInterface(IID, Obj);
end;
{$ENDIF ALLOW_QUERYINTERFACE}

function WeakReference_AddRef(Data: TInternalWeakReferenceHelper.PWeakObjectHelperData): Integer; stdcall;
begin
  Result := InterlockedIncrement(Data.FRefCount);
end;

function WeakReference_IsAlive(Data: TInternalWeakReferenceHelper.PWeakObjectHelperData): Boolean;
begin
  Result := Data.FObject <> nil;
end;

const
  // This constant is used as the WeakReference interface if it references a nil-Object
  WeakRefNilTarget: TInternalWeakReferenceHelper.TWeakObjectHelper = (
    {$IFDEF ALLOW_QUERYINTERFACE}
    QueryInterface: WeakReference_QueryInterface;
    {$ELSE}
      {$IFDEF USE_MONITOR_FIELD}
    Monitor: nil;
      {$ELSE}
    QueryInterface: nil;
      {$ENDIF USE_MONITOR_FIELD}
    {$ENDIF ALLOW_QUERYINTERFACE}
    AddRef: WeakRefNilTarget_IgnoreRefCount;
    Release: WeakRefNilTarget_IgnoreRefCount;
    GetTarget: WeakReference_GetTarget;
    IsAlive: WeakReference_IsAlive;
    // Monitor: nil;
    Data: (
      InterfaceSelfPtr: @WeakRefNilTarget;
      FObject: nil;
      FRefCount: -1;
    );
  );

{ TInternalWeakReferenceHelper }

class function TInternalWeakReferenceHelper.GetWeakReferenceField(const AObject: TObject): PPWeakObjectHelper;
begin
  {$IFDEF USE_MONITOR_FIELD}
  if System.MonitorSupport <> nil then
    Result := PPWeakObjectHelper(PByte(AObject) + AObject.InstanceSize - hfFieldSize + hfMonitorOffset)
  else
  // SysUtils isn't used => TWeakRefBaseObject must be used
  {$ENDIF USE_MONITOR_FIELD}
  if AObject is TWeakRefBaseObject then
    Result := @PWeakObjectHelper(TWeakRefBaseObject(AObject).FWeakReferences)
  else
    Result := nil;
end;

class procedure TInternalWeakReferenceHelper.GetNilWeakReference(var AWeakRef: IInterface);
begin
  AWeakRef := IInterface(@WeakRefNilTarget.Data.InterfaceSelfPtr);
end;

class procedure TInternalWeakReferenceHelper.DestroyingObject(const AObject: TObject);
var
  Field: PPWeakObjectHelper;
  Ref: PWeakObjectHelper;
  I: Integer;
begin
  Field := GetWeakReferenceField(AObject);
  Ref := Field^;
  if (Ref <> nil) {$IFDEF USE_MONITOR_FIELD}and (@Ref.AddRef = @WeakReference_AddRef){$ENDIF} then
  begin
    if TInternalWeakReferenceHelper.AdditionalDataDtors <> nil then
      for I := Length(TInternalWeakReferenceHelper.AdditionalDataDtors) - 1 downto 0 do
        TInternalWeakReferenceHelper.AdditionalDataDtors[I].Dtor(PByte(@Ref.Data.ExtraData) + TInternalWeakReferenceHelper.AdditionalDataDtors[I].Offset);
    Ref.Data.FObject := nil; // set all WeakReferences to nil
    Field^ := Ref.Monitor; // restore Monitor field (should be nil, but who knows what some user code does to it)
    Field^ := nil;
    WeakReference_Release(@Ref.Data);
  end;
end;

{ TWeakReference<T> }

class function TWeakReference<T>.New(const AObject: TObject): IWeakReference<T>;
begin
  if AObject <> nil then
    IInterface(Result) := IInterface(@TInternalWeakReferenceHelper.GetWeakObjectHelper(AObject).Data.InterfaceSelfPtr)
  else
    TInternalWeakReferenceHelper.GetNilWeakReference(IInterface(Result));
end;

constructor TWeakReference<T>.Create(const AObject: TObject);
begin
  FWeakRef := TWeakReference<T>.New(AObject);
end;

procedure TWeakReference<T>.Assign(const AObject: TObject);
begin
  FWeakRef := TWeakReference<T>.New(AObject);
end;

class operator TWeakReference<T>.Implicit(const AValue: TWeakReference<T>): T;
begin
  Result := AValue.Target;
end;

{$IFDEF USE_MONITOR_FIELD}
function GetCallTargetBetween(Proc: PByte; StartP, EndP: PByte; SkipMatchingCalls: Integer = 0;
  MaxCalls: Integer = 10): PByte;
var
  Offset: Integer;
begin
  while MaxCalls > 0 do
  begin
    if Proc^ = $E8 then // CALL
    begin
      Offset := PInteger(Proc + 1)^;
      Result := Proc + (1 + SizeOf(Integer)) + Offset;
      if (Result >= StartP) and (Result <= EndP) then
      begin
        if SkipMatchingCalls <= 0 then
          Exit;
        Dec(SkipMatchingCalls);
      end;
      Dec(MaxCalls);
    end;
    Inc(Proc);
  end;
  Result := nil;
end;