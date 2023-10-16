%token INTEGER_KW
%token REAL_KW
%token BOOLEAN_KW
%token STRING_KW
%token CHAR_KW
%token ARRAY_KW
%token VARIANT_KW
%token SET_KW
%token FILE_KW
%token ID
%token INTEGER
%token REAL
%token BOOLEAN
%token STRING
%token CHAR
%token ARRAY
%token VARIANT
%token SET
%token FILE
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
%token POINTER
%token OUT_KW
%token REPEAT_KW
%token UNTIL_KW

%right ':='     // right???
%left '=' '<>' '<' '>' '<=' '>=' IN_KW IS_KW  //??IS IN
%left '+' '-' OR_KW XOR_KW
%left '*' '/' DIV_KW MOD_KW AND_KW AS_KW    //??as
%right '@' NOT_KW
%left '.' '[' ']'
%right UMINUS   // нужен ли плюс (просто он есть)??
%nonassoc '(' ')'

%%

simple_type:    INTEGER_KW
                | REAL_KW
                | BOOLEAN_KW
                | STRING_KW
                | CHAR_KW
                | ARRAY_KW // объявляется по-другому
                | VARIANT_KW //??
                | SET_KW
                | FILE_KW
                | ID
                | '^'simple_type

const_expr:     INTEGER
                | REAL
                | BOOLEAN
                | STRING
                | CHAR
                | ARRAY // объявляется по-другому
                | POINTER
                | VARIANT
                | SET
                | FILE

expr:           const_expr
                | ID
                | expr'+'expr
                | expr'-'expr
                | expr'*'expr
                | expr'/'expr
                | expr'.'ID
                | expr'.'ID'('expr_list_E')'
                | expr'['expr']'
                | '-'expr %prec UMINUS
                | ID'('expr_list_E')'
                | simple_type'('expr')'
                | expr'<'expr
                | expr'>'expr
                | expr'<>'expr
                | expr'<='expr
                | expr'>='expr
                | expr'='expr
                | expr IN_KW expr
                | expr IS_KW expr
                | NOT_KW expr
                | '@'expr
                | expr DIV_KW expr
                | expr MOD_KW expr
                | expr OR_KW expr
                | expr XOR_KW expr
                | expr AND_KW expr
                | expr AS_KW expr
                | '('expr')'
                | '['expr_list_E']'

expr_list:      expr
                | expr_list','expr

expr_list_E:    expr_list
                |/*empty*/

stmt:           expr':='expr';'
                | expr';'
                | var_decl
                | ID';' // но если это не функция или процедура, будет ошибка
                | stmt_block
                | ';'

stmt_list:      stmt
                | stmt_list stmt

stmt_list_E:    stmt_list
                |/*empty*/

stmt_block:     BEGIN_KW stmt_list_E END_KW // не понятно, чем заканчивается ; . 

id_list:        ID
                | id_list','ID

var_decl:       id_list':'simple_type';'
                | ID':'simple_type'='expr';'

var_decl_list:  var_decl
                | var_decl_list var_decl

var_decl_sect:  VAR_KW var_decl_list

param_list:     var_decl_list
                | VAR_KW var_decl_list
                | CONST_KW var_decl_list
                | OUT_KW var_decl_list
                | /*empty*/
                | param_list';'var_decl_list
                | param_list';'VAR_KW var_decl_list
                | param_list';'CONST_KW var_decl_list
                | param_list';'OUT_KW var_decl_list

procedure_decl: PROCEDURE_KW ID'('param_list');'var_decl_sect stmt_list_E

function_decl:  FUNCTION_KW ID'('param_list'):'simple_type';'var_decl_sect stmt_list_E

// перегрузка функций (методов) на будущее

if_stmt:        IF_KW expr THEN_KW stmt
                | IF_KW expr THEN_KW stmt ELSE_KW stmt

repeat_stmt:    REPEAT_KW stmt_list_E UNTIL_KW expr';'

while_stmt:     WHILE_KW expr DO_KW stmt

for_stmt:       FOR_KW ID':='expr TO_KW expr DO_KW stmt
                | FOR_KW ID':='expr DOWNTO_KW expr DO_KW stmt