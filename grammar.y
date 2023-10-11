%right ':='     // right???
%left '=' '<>' '<' '>' '<=' '>=' INKW ISKW  //??IS IN
%left '+' '-' ORKW XORKW
%left '*' '/' DIVKW MODKW ANDKW ASKW    //??as
%right '@' NOTKW
%left '.' '[' ']'
%right UMINUS   // нужен ли плюс (просто он есть)??
%nonassoc '(' ')'

%%

simple_type:    INTEGERKW
                | REALKW
                | BOOLEANKW
                | STRINGKW
                | CHARKW
                | ARRAYKW
                | VARIANTKW //??
                | SETKW
                | FILEKW
                | ID
                | '^'simple_type

var_decl:       ID':'type';'

var_decl_list:  var_decl
                | var_decl_list var_decl

var_decl_sect: VARKW var_decl_list

expr:           INTEGER
                | REAL
                | BOOLEAN
                | STRING
                | CHAR
                | ARRAY
                | POINTER
                | VARIANT
                | SET
                | FILE
                | ID
                | expr'+'expr
                | expr'-'expr
                | expr'*'expr
                | expr'/'expr
                | expr'.'ID
                | expr'['expr']'
                | '-'expr %prec UMINUS
                | ID'('expr_list_E')'
                | expr'<'expr
                | expr'>'expr
                | expr'<>'expr
                | expr'<='expr
                | expr'>='expr
                | expr'='expr
                | expr INKW expr
                | expr ISKW expr
                | NOTKW expr
                | '@'expr
                | expr DIVKW expr
                | expr MODKW expr
                | expr ORKW expr
                | expr XORKW expr
                | expr ANDKW expr
                | expr ASKW expr

expr_list:      expr
                | expr_list, expr

expr_list_E:    expr_list
                |/*empty*/



stmt:           expr':='expr';' //??
                | expr';'
                | var_decl

stmt_list:      stmt
                | stmt_list stmt

stmt_list_E:    stmt_list
                |/*empty*/