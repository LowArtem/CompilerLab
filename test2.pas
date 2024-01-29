
program Example;

type
  TMyClass = class
  private
    privateField: Integer;
  protected
    newField: Integer;
    protectedField: String;
  public
    constructor Create;
    destructor Destroy; override;
    procedure MyProcedure;
    function MyFunction(var a: Integer;): String;
    property MyProperty: Integer read privateField write privateField;
  end;

implementation

constructor TMyClass.Create;
begin
  privateField := 0;
  protectedField := 'Default';
end;

destructor TMyClass.Destroy;
begin
  // Дополнительные действия при уничтожении объекта
  inherited;
end;

procedure TMyClass.MyProcedure;
begin
  writeln('Executing procedure...');
end;

function TMyClass.MyFunction(var a: Integer;): String;
begin
  Result := 'Result: ' + IntToStr(a);
end;

var
  i: Integer;
  arr: array[1..5] of Integer;
  str1, str2: String;

begin
  i := 1;
  str1 := 'Test string';

  // Блок условия
  if privateField = 0 then
    writeln('privateField is zero')
  else
    writeln('privateField is not zero');

  // Блок цикла (for)
  for i := 1 to 5 do
    arr[i] := i * 2;

  // Блок цикла (while)
  i := 1;
  while i <= 5 do
  begin
    writeln('Array element ', i, ': ', arr[i]);
    Inc(i);
  end;

  // Блок цикла (repeat-until)
  repeat
    writeln('Enter a string: ');
    readln(str1);
  until Length(str1) > 0;

  // Вызов процедуры и функции
  TMyClass.MyProcedure();
  writeln(TMyClass.MyFunction(42));

  // Блок case
  case privateField of
    0: writeln('privateField is zero');
    1: writeln('privateField is one');
  else
    writeln('privateField is some other value')
  end;

  // Арифметические операции
  privateField := privateField + 1;
  privateField := privateField - 1;
  privateField := privateField * 2;
  privateField := privateField div 2;
  privateField := privateField mod 3;

  // Логические операции
  if privateField > 0 and arr[1] > 0 then
    writeln('Both privateField and arr[1] are greater than zero');

  // Работа со строками
  str2 := 'Concatenation: ' + str1;

  // Работа с массивами
  arr[3] := arr[3] + arr[4];
  writeln('Sum of arr[3] and arr[4]: ', arr[3])
end.
