%start start_symbol

%token PROGRAM_KW
%token INTEGER_KW
%token REAL_KW
%token BOOLEAN_KW
%token STRING_KW
%token CHAR_KW
%token ARRAY_KW
%token VARIANT_KW
%token SET_KW
%token ID
%token INTEGER
%token REAL
%token BOOLEAN
%token STRING
%token CHAR
%token ARRAY
%token VARIANT
%token SET
%token IN_KW
%token IS_KW
%token NOT_KW
%token DIV_KW
%token MOD_KW
%token AND_KW
%token AS_KW
%token XOR_KW
%token OR_KW
%token BEGIN_KW
%token END_KW
%token VAR_KW
%token TYPE_KW
%token CLASS_KW
%token CONSTRUCTOR_KW
%token DESTRUCTOR_KW
%token PUBLIC_KW
%token PRIVATE_KW
%token PROTECTED_KW
%token PROPERTY_KW
%token READ_KW
%token STATIC_KW
%token WRITE_KW
%token OVERRIDE_KW
%token OVERLOAD_KW
%token CONST_KW
%token PROCEDURE_KW
%token FUNCTION_KW
%token IF_KW
%token CASE_KW
%token THEN_KW
%token ELSE_KW
%token WHILE_KW
%token DO_KW
%token FOR_KW
%token TO_KW
%token DOWNTO_KW
%token OUT_KW
%token REPEAT_KW
%token UNTIL_KW
%token WITH_KW
%token OF_KW

%token ASSIGNMENT
%token EQUALS
%token NOT_EQUAL
%token LESS
%token GREATER
%token LESS_OR_EQUAL
%token GREATER_OR_EQUAL
%token PLUS
%token MINUS
%token MULTIPLICATION
%token DIVISION
%token DOTE
%token OPEN_SQUARE_BRACKET
%token CLOSE_SQUARE_BRACKET
%token OPEN_BRACKET
%token CLOSE_BRACKET
%token COMMA
%token SEMICOLON
%token COLON

%right ASSIGNMENT     // right???
%left EQUALS NOT_EQUAL LESS GREATER LESS_OR_EQUAL GREATER_OR_EQUAL IN_KW IS_KW  //??IS IN
%left  PLUS MINUS OR_KW XOR_KW
%left  MULTIPLICATION DIVISION DIV_KW MOD_KW AND_KW AS_KW    //??as
%right NOT_KW
%left  DOTE OPEN_SQUARE_BRACKET CLOSE_SQUARE_BRACKET 
%right UMINUS   // нужен ли плюс (просто он есть)??
%nonassoc  OPEN_BRACKET CLOSE_BRACKET 

%%

section:        var_decl_sect
                | type_sect

sect_list:      section
                | sect_list SEMICOLON section

start_symbol:   PROGRAM_KW ID SEMICOLON stmt_block DOTE
                | PROGRAM_KW ID SEMICOLON sect_list SEMICOLON stmt_block DOTE

simple_type:    INTEGER_KW
                | REAL_KW
                | BOOLEAN_KW
                | STRING_KW
                | CHAR_KW
                | VARIANT_KW //??

type:           simple_type
                | ID
                | SET_KW OF_KW CHAR_KW
                | SET_KW OF_KW expr DOTE DOTE expr
                | ARRAY_KW OF_KW type // dynamic array
                | ARRAY_KW OPEN_SQUARE_BRACKET expr DOTE DOTE expr CLOSE_SQUARE_BRACKET OF_KW type // static array

const_expr:     INTEGER
                | REAL
                | BOOLEAN
                | STRING
                | CHAR
                | ARRAY // объявляется по-другому
                | VARIANT
                | SET

expr:           const_expr
                | ID
                | expr PLUS expr
                | expr MINUS expr
                | expr MULTIPLICATION expr
                | expr DIVISION expr
                | expr DOTE ID
                | expr DOTE ID OPEN_BRACKET expr_list_E CLOSE_BRACKET
                | expr OPEN_SQUARE_BRACKET expr CLOSE_SQUARE_BRACKET
                | MINUS expr %prec UMINUS
                | ID OPEN_BRACKET expr_list_E CLOSE_BRACKET
                | simple_type OPEN_BRACKET expr CLOSE_BRACKET
                | expr LESS expr
                | expr GREATER expr
                | expr NOT_EQUAL expr
                | expr LESS_OR_EQUAL expr
                | expr GREATER_OR_EQUAL expr
                | expr EQUALS expr
                | expr IN_KW expr
                | expr IS_KW expr
                | NOT_KW expr
                | expr DIV_KW expr
                | expr MOD_KW expr
                | expr OR_KW expr
                | expr XOR_KW expr
                | expr AND_KW expr
                | expr AS_KW expr
                | OPEN_BRACKET expr CLOSE_BRACKET 
                | OPEN_SQUARE_BRACKET expr_list_E CLOSE_SQUARE_BRACKET 

expr_list:      expr
                | expr_list COMMA expr

expr_list_E:    expr_list
                | /*empty*/

stmt:           expr ASSIGNMENT expr
                | ID OPEN_BRACKET expr_list_E CLOSE_BRACKET
                | /*empty*/
                | stmt_block
                | if_stmt
                | case_stmt
                | repeat_stmt
                | while_stmt
                | for_stmt
                | with_stmt

stmt_list:      stmt
                | stmt_list SEMICOLON stmt

stmt_block:     BEGIN_KW stmt_list END_KW

id_list:        ID
                | id_list COMMA ID

var_decl:       id_list COLON type
                | ID COLON type EQUALS expr

var_decl_list:  var_decl
                | var_decl_list SEMICOLON var_decl

var_decl_sect:  VAR_KW var_decl_list

param_list:     var_decl_list
                | VAR_KW var_decl_list
                | CONST_KW var_decl_list
                | OUT_KW var_decl_list
                | param_list SEMICOLON var_decl_list
                | param_list SEMICOLON VAR_KW var_decl_list
                | param_list SEMICOLON CONST_KW var_decl_list
                | param_list SEMICOLON OUT_KW var_decl_list

param_list_E:   param_list
                | /*empty*/

procedure_impl:     PROCEDURE_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET SEMICOLON stmt
                    | PROCEDURE_KW ID SEMICOLON stmt
                    | PROCEDURE_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET SEMICOLON var_decl_sect stmt
                    | PROCEDURE_KW ID SEMICOLON var_decl_sect stmt
                    | PROCEDURE_KW ID DOTE ID OPEN_BRACKET param_list_E CLOSE_BRACKET SEMICOLON stmt /*class method*/
                    | PROCEDURE_KW ID DOTE ID SEMICOLON stmt
                    | PROCEDURE_KW ID DOTE ID OPEN_BRACKET param_list_E CLOSE_BRACKET SEMICOLON var_decl_sect stmt
                    | PROCEDURE_KW ID DOTE ID SEMICOLON var_decl_sect stmt

function_impl:      FUNCTION_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET COLON type SEMICOLON stmt
                    | FUNCTION_KW ID COLON type SEMICOLON stmt
                    | FUNCTION_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET COLON type SEMICOLON var_decl_sect stmt
                    | FUNCTION_KW ID COLON type SEMICOLON var_decl_sect stmt
                    | FUNCTION_KW ID DOTE ID OPEN_BRACKET param_list_E CLOSE_BRACKET COLON type SEMICOLON stmt  /*class method*/
                    | FUNCTION_KW ID DOTE ID COLON type SEMICOLON stmt
                    | FUNCTION_KW ID DOTE ID OPEN_BRACKET param_list_E CLOSE_BRACKET COLON type SEMICOLON var_decl_sect stmt
                    | FUNCTION_KW ID DOTE ID COLON type SEMICOLON var_decl_sect stmt

// перегрузка функций (методов) на будущее

if_stmt:        IF_KW expr THEN_KW stmt
                | IF_KW expr THEN_KW stmt ELSE_KW stmt

case_list:      expr_list COLON stmt
                | case_list SEMICOLON expr_list COLON stmt

case_stmt:      CASE_KW expr OF_KW case_list END_KW
                | CASE_KW expr OF_KW case_list ELSE_KW stmt END_KW

repeat_stmt:    REPEAT_KW stmt_list UNTIL_KW expr

while_stmt:     WHILE_KW expr DO_KW stmt

for_stmt:       FOR_KW ID ASSIGNMENT expr TO_KW expr DO_KW stmt
                | FOR_KW ID ASSIGNMENT expr DOWNTO_KW expr DO_KW stmt

enum_param_list:    ID
                    | ID EQUALS expr
                    | enum_param_list COMMA ID EQUALS expr
                    | enum_param_list COMMA ID

enum_decl:          ID EQUALS OPEN_BRACKET enum_param_list CLOSE_BRACKET

enum_decl_list:     enum_decl
                    | enum_decl_list SEMICOLON enum_decl

class_decl_header:      ID EQUALS CLASS_KW
                        | ID EQUALS CLASS_KW OPEN_BRACKET ID CLOSE_BRACKET

access_modifier:    PUBLIC_KW
                    | PRIVATE_KW
                    | PROTECTED_KW

property_decl:  PROPERTY_KW ID COLON type READ_KW ID WRITE_KW ID
                | PROPERTY_KW ID COLON type READ_KW ID

field_modifier:     STATIC_KW
                    | OVERRIDE_KW

field_modifier_list:    field_modifier
                        | field_modifier_list SEMICOLON field_modifier

field_decl_with_modifier_E:     var_decl
                                | var_decl SEMICOLON field_modifier_list

method_procedure_decl:  PROCEDURE_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET 
                        | PROCEDURE_KW ID

method_function_decl:   FUNCTION_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET COLON type 
                        | FUNCTION_KW ID COLON type

constructor_decl:   CONSTRUCTOR_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET
                    | CONSTRUCTOR_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET SEMICOLON OVERRIDE_KW
                    | CONSTRUCTOR_KW ID
                    | CONSTRUCTOR_KW ID SEMICOLON OVERRIDE_KW

constructor_impl:   CONSTRUCTOR_KW ID DOTE ID OPEN_BRACKET param_list_E CLOSE_BRACKET SEMICOLON stmt
                    | CONSTRUCTOR_KW ID DOTE ID OPEN_BRACKET param_list_E CLOSE_BRACKET SEMICOLON OVERRIDE_KW SEMICOLON stmt
                    | CONSTRUCTOR_KW ID DOTE ID SEMICOLON stmt
                    | CONSTRUCTOR_KW ID DOTE ID SEMICOLON OVERRIDE_KW SEMICOLON stmt

destructor_decl:    DESTRUCTOR_KW ID
                    | DESTRUCTOR_KW ID SEMICOLON OVERRIDE_KW

destructor_impl:    DESTRUCTOR_KW ID DOTE ID SEMICOLON stmt
                    | DESTRUCTOR_KW ID DOTE ID SEMICOLON OVERRIDE_KW SEMICOLON stmt

method_modifier:    field_modifier
                    | OVERLOAD_KW

method_modifier_list:   method_modifier
                        | method_modifier_list SEMICOLON method_modifier

method_decl_with_modifier_E:    method_procedure_decl
                                | method_procedure_decl SEMICOLON method_modifier_list
                                | method_function_decl
                                | method_function_decl SEMICOLON method_modifier_list

method_field_property_list: field_decl_with_modifier_E
                            | property_decl
                            | method_decl_with_modifier_E
                            | method_field_property_list SEMICOLON field_decl_with_modifier_E
                            | method_field_property_list SEMICOLON property_decl
                            | method_field_property_list SEMICOLON method_decl_with_modifier_E

class_element:  PRIVATE_KW method_field_property_list
                | PUBLIC_KW method_field_property_list
                | PROTECTED_KW method_field_property_list

class_element_list: class_element
                    | class_element_list SEMICOLON class_element

class_decl:    class_decl_header class_element_list SEMICOLON END_KW 

class_decl_list:    class_decl
                    | class_decl_list SEMICOLON class_decl

type_sect:  TYPE_KW class_decl_list
            | TYPE_KW enum_decl_list

with_stmt:  WITH_KW id_list DO_KW stmt