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
%token ASSIGNMENT ////УБРАТЬ НИЖЕ ВЕЗДЕ KW!!
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

start_symbol:   PROGRAM_KW ID SEMICOLON stmt_block
                | PROGRAM_KW ID SEMICOLON var_decl_sect stmt_block

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
                |  OPEN_BRACKET expr CLOSE_BRACKET 
                |  OPEN_SQUARE_BRACKET expr_list_E CLOSE_SQUARE_BRACKET 

expr_list:      expr
                | expr_list COMMA expr

expr_list_E:    expr_list
                |/*empty*/

stmt:           expr ASSIGNMENT expr SEMICOLON
                | expr SEMICOLON
                | var_decl
                | ID SEMICOLON // но если это не функция или процедура, будет ошибка
                | stmt_block
                | SEMICOLON

stmt_list:      stmt
                | stmt_list stmt

stmt_list_E:    stmt_list
                |/*empty*/

stmt_block:     BEGIN_KW stmt_list_E END_KW DOTE 
                | BEGIN_KW stmt_list_E END_KW SEMICOLON
                | BEGIN_KW stmt_list_E END_KW

id_list:        ID
                | id_list COMMA ID

var_decl:       id_list COLON type SEMICOLON
                | ID COLON type EQUALS expr SEMICOLON

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

procedure_decl: PROCEDURE_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET SEMICOLON var_decl_sect stmt_list_E

function_decl:  FUNCTION_KW ID OPEN_BRACKET param_list_E CLOSE_BRACKET COLON type SEMICOLON var_decl_sect stmt_list_E

// перегрузка функций (методов) на будущее

if_stmt:        IF_KW expr THEN_KW stmt
                | IF_KW expr THEN_KW stmt ELSE_KW stmt

repeat_stmt:    REPEAT_KW stmt_list_E UNTIL_KW expr SEMICOLON

while_stmt:     WHILE_KW expr DO_KW stmt

for_stmt:       FOR_KW ID ASSIGNMENT expr TO_KW expr DO_KW stmt
                | FOR_KW ID ASSIGNMENT expr DOWNTO_KW expr DO_KW stmt