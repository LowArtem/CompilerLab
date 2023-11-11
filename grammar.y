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
%token PUBLIC_KW
%token PRIVATE_KW
%token PROTECTED_KW
%token PROPERTY_KW
%token READ_KW
%token WRITE_KW
%token OVERRIDE_KW
%token CONST_KW
%token PROCEDURE_KW
%token FUNCTION_KW
%token IF_KW
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

start_symbol:   PROGRAM_KW ID SEMICOLON stmt_block DOTE
                | PROGRAM_KW ID SEMICOLON var_decl_sect stmt_block DOTE

simple_type:    INTEGER_KW
                | REAL_KW
                | BOOLEAN_KW
                | STRING_KW
                | CHAR_KW
                | ARRAY_KW // объявляется по-другому
                | VARIANT_KW //??
                | SET_KW

type:           simple_type
                | ID

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
                | repeat_stmt
                | while_stmt
                | for_stmt

stmt_list:      stmt
                | stmt_list SEMICOLON stmt

stmt_list_E:    stmt_list
                | /*empty*/

stmt_block:     BEGIN_KW stmt_list_E END_KW

id_list:        ID
                | id_list COMMA ID

var_decl:       id_list COLON type
                | ID COLON type EQUALS expr

var_decl_list:  var_decl
                | var_decl_list var_decl

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
                    | PROCEDURE_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET SEMICOLON var_decl_sect stmt

function_impl:      FUNCTION_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET COLON type SEMICOLON stmt
                    | FUNCTION_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET COLON type SEMICOLON var_decl_sect stmt

// перегрузка функций (методов) на будущее

if_stmt:        IF_KW expr THEN_KW stmt
                | IF_KW expr THEN_KW stmt ELSE_KW stmt

repeat_stmt:    REPEAT_KW stmt_list_E UNTIL_KW expr

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

method_procedure_decl:  PROCEDURE_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET 
                        | PROCEDURE_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET SEMICOLON OVERRIDE_KW 

method_function_decl:   FUNCTION_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET COLON type 
                        | FUNCTION_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET COLON type SEMICOLON OVERRIDE_KW 

method_decl:    method_procedure_decl
                | method_function_decl

method_field_property_list: var_decl
                            | property_decl
                            | method_decl
                            | method_field_property_list SEMICOLON var_decl
                            | method_field_property_list SEMICOLON property_decl
                            | method_field_property_list SEMICOLON method_decl

class_element:  PRIVATE_KW method_field_property_list
                | PUBLIC_KW method_field_property_list
                | PROTECTED_KW method_field_property_list

class_element_list: class_element
                    | class_element_list SEMICOLON class_element

class_decl:    class_decl_header class_element_list SEMICOLON END_KW 

class_decl_list:    class_decl
                    | class_decl_list SEMICOLON class_decl

type_sect:  TYPE_KW class_decl_list SEMICOLON
            | TYPE_KW enum_decl_list SEMICOLON