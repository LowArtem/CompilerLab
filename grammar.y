%{
    #include <stdio.h>
    #include <string>
    #include <list>
    #include "classes/literalNode.h"
    #include "classes/exprNode.h"
    #include "classes/stmtNode.h"
    #include "classes/ifStmtNode.h"
    #include "classes/stmtBlockNode.h"
    #include "classes/repeatStmtNode.h"
    #include "classes/caseStmtNode.h"
    #include "classes/caseElementNode.h"
    #pragma once

    extern int yylex(void);
%}

%union {
    int int_union;
    double real_union;
    bool boolean_union;
    char char_union;
    char* string_union;
    char* keyword_union;
    char* id_union;
    simpleType simple_type_union;
    literalNode* literal_union;
    arrayDimensionNode* array_dimension_union;
    std::list<arrayDimensionNode*>* array_dimension_list_union;
    typeNode* type_union;
    exprNode* expr_union;
    std::list<exprNode*>* expr_list_union;
    stmtNode* stmt_union;
    std::list<stmtNode*>* stmt_list_union;
    ifStmtNode* if_stmt_union;
    repeatStmtNode* repeat_stmt_union;
    whileStmtNode* while_stmt_union;
    forStmtNode* for_stmt_union;
    withStmtNode* with_stmt_union;
    caseStmtNode* case_stmt_union;
    std::list<caseElementNode*>* case_element_list_union;
    stmtBlockNode* stmt_block_union;
    varDeclNode* var_decl_union;
    list<enumParamNode*>* enum_param_list_union;
}

%type <simple_type_union> simple_type
%type <literal_union> literal
%type <array_dimension_union> array_dimension
%type <array_dimension_list_union> array_dimension_list
%type <type_union> type
%type <expr_union> expr
%type <expr_list_union> expr_list expr_list_E id_list
%type <stmt_union> stmt
%type <if_stmt_union> if_stmt
%type <stmt_block_union> stmt_block
%type <stmt_list_union> stmt_list
%type <case_stmt_union> case_stmt
%type <case_element_list_union> case_list
%type <repeat_stmt_union> repeat_stmt
%type <while_stmt_union> while_stmt
%type <for_stmt_union> for_stmt
%type <with_stmt_union> with_stmt
%type<var_decl_union> var_decl var_decl_list
%type <enum_param_list_union> enum_param_list

%start start_symbol

%token <keyword_union> INTEGER_KW
%token <keyword_union> REAL_KW
%token <keyword_union> BOOLEAN_KW
%token <keyword_union> STRING_KW
%token <keyword_union> CHAR_KW
%token ARRAY_KW
/* %token SET_KW */

%token <id_union> ID
%token <keyword_union> TRUE_KW
%token <keyword_union> FALSE_KW
%token <int_union> INTEGER
%token <real_union> REAL
%token <string_union> STRING
%token <char_union> CHAR

%token <keyword_union> PROGRAM_KW
%token <keyword_union> BEGIN_KW
%token <keyword_union> END_KW
%token <keyword_union> VAR_KW
%token <keyword_union> TYPE_KW

%token <keyword_union> IMPLEMENTATION_KW
%token <keyword_union> CLASS_KW
%token <keyword_union> CONSTRUCTOR_KW
%token <keyword_union> DESTRUCTOR_KW
%token <keyword_union> PUBLIC_KW
%token <keyword_union> PRIVATE_KW
%token <keyword_union> PROTECTED_KW
%token <keyword_union> PROPERTY_KW
%token <keyword_union> READ_KW
%token <keyword_union> STATIC_KW
%token <keyword_union> WRITE_KW
%token <keyword_union> OVERRIDE_KW
%token <keyword_union> OVERLOAD_KW
%token <keyword_union> CONST_KW
%token <keyword_union> PROCEDURE_KW
%token <keyword_union> FUNCTION_KW
%token <keyword_union> INHERITED_KW
%token <keyword_union> SELF_KW
%token <keyword_union> WITH_KW
%token <keyword_union> OF_KW

%token <keyword_union> IF_KW
%token <keyword_union> CASE_KW
%token <keyword_union> THEN_KW
%token <keyword_union> ELSE_KW
%token <keyword_union> WHILE_KW
%token <keyword_union> DO_KW
%token <keyword_union> FOR_KW
%token <keyword_union> TO_KW
%token <keyword_union> DOWNTO_KW
%token <keyword_union> OUT_KW
%token <keyword_union> REPEAT_KW
%token <keyword_union> UNTIL_KW

%token ASSIGNMENT

%token EQUALS
%token NOT_EQUAL
%token LESS
%token GREATER
%token LESS_OR_EQUAL
%token GREATER_OR_EQUAL
%token <keyword_union> IN_KW
%token <keyword_union> IS_KW
%token <keyword_union> NOT_KW
%token <keyword_union> AND_KW
%token <keyword_union> AS_KW
%token <keyword_union> XOR_KW
%token <keyword_union> OR_KW

%token PLUS
%token MINUS
%token MULTIPLICATION
%token DIVISION
%token <keyword_union> DIV_KW
%token <keyword_union> MOD_KW

%token DOT
%token DOUBLE_DOT
%token OPEN_SQUARE_BRACKET
%token CLOSE_SQUARE_BRACKET
%token OPEN_BRACKET
%token CLOSE_BRACKET
%token COMMA
%token SEMICOLON
%token COLON

%nonassoc DOUBLE_DOT
%left EQUALS NOT_EQUAL LESS GREATER LESS_OR_EQUAL GREATER_OR_EQUAL IN_KW IS_KW
%left  PLUS MINUS OR_KW XOR_KW
%left  MULTIPLICATION DIVISION DIV_KW MOD_KW AND_KW AS_KW
%right NOT_KW UMINUS UPLUS
%left  DOT OPEN_SQUARE_BRACKET CLOSE_SQUARE_BRACKET 
%nonassoc  OPEN_BRACKET CLOSE_BRACKET 

%%

section:        var_decl_sect
                | type_sect
                | implementation_sect

sect_list:      section
                | sect_list SEMICOLON section

start_symbol:   PROGRAM_KW ID SEMICOLON stmt_block DOT
                | PROGRAM_KW ID SEMICOLON sect_list SEMICOLON stmt_block DOT

simple_type:    INTEGER_KW          { $$ = simpleType::int_type; }
                | REAL_KW           { $$ = simpleType::real_type; }
                | BOOLEAN_KW        { $$ = simpleType::boolean_type; }
                | STRING_KW         { $$ = simpleType::string_type; }
                | CHAR_KW           { $$ = simpleType::char_type; }

literal:        INTEGER             { $$ = literalNode::create_literal_node_from_int($1); }
                | REAL              { $$ = literalNode::create_literal_node_from_real($1); }
                | TRUE_KW           { $$ = literalNode::create_literal_node_from_bool(true); }
                | FALSE_KW          { $$ = literalNode::create_literal_node_from_bool(false); }
                | CHAR              { $$ = literalNode::create_literal_node_from_char($1); }

array_dimension:    literal DOUBLE_DOT literal  { $$ = arrayDimensionNode::create_array_dimension_node($1, $3); }

array_dimension_list:   array_dimension                                 { $$ = arrayDimensionNode::create_array_dimension_node_list_from_array_dimension_node($1); }
                        | array_dimension_list COMMA array_dimension    { $$ = arrayDimensionNode::add_array_dimension_node_to_array_dimension_node_list($1, $3); }                

type:           simple_type             { $$ = typeNode::create_type_node_from_simple_type($1); }
                | ID                    { $$ = typeNode::create_type_node_from_id($1); }
                /* | SET_KW OF_KW CHAR_KW */
                /* | SET_KW OF_KW BOOLEAN_KW */
                /* | SET_KW OF_KW literal DOUBLE_DOT literal */
                | ARRAY_KW OF_KW type   { $$ = typeNode::create_type_node_from_array_without_dimension($3); }
                | ARRAY_KW OPEN_SQUARE_BRACKET array_dimension_list CLOSE_SQUARE_BRACKET OF_KW type { $$ = typeNode::create_type_node_from_array_with_dimension($3, $6); }

expr:           literal                       { $$ = exprNode::create_expr_node_from_literal_node($1); }
                | STRING                      { $$ = exprNode::create_expr_node_from_string($1); }
                | ID                          { $$ = exprNode::create_expr_node_from_id($1); }
                | expr PLUS expr              { $$ = exprNode::create_expr_node_from_binary_operation(exprType::plus_type, $1, $3); }
                | expr MINUS expr             { $$ = exprNode::create_expr_node_from_binary_operation(exprType::minus_type, $1, $3); }
                | expr MULTIPLICATION expr    { $$ = exprNode::create_expr_node_from_binary_operation(exprType::multiplication_type, $1, $3); }
                | expr DIVISION expr          { $$ = exprNode::create_expr_node_from_binary_operation(exprType::division_type, $1, $3); }
                | expr LESS expr              { $$ = exprNode::create_expr_node_from_binary_operation(exprType::less_type, $1, $3); }
                | expr GREATER expr           { $$ = exprNode::create_expr_node_from_binary_operation(exprType::greater_type, $1, $3); }
                | expr NOT_EQUAL expr         { $$ = exprNode::create_expr_node_from_binary_operation(exprType::not_equal_type, $1, $3); }
                | expr LESS_OR_EQUAL expr     { $$ = exprNode::create_expr_node_from_binary_operation(exprType::less_or_equal_type, $1, $3); }
                | expr GREATER_OR_EQUAL expr  { $$ = exprNode::create_expr_node_from_binary_operation(exprType::greater_or_equal_type, $1, $3); }
                | expr EQUALS expr            { $$ = exprNode::create_expr_node_from_binary_operation(exprType::equals_type, $1, $3); }
                | expr IN_KW expr             { $$ = exprNode::create_expr_node_from_binary_operation(exprType::in_type, $1, $3); }
                | expr IS_KW expr             { $$ = exprNode::create_expr_node_from_binary_operation(exprType::is_type, $1, $3); }
                | expr DIV_KW expr            { $$ = exprNode::create_expr_node_from_binary_operation(exprType::div_type, $1, $3); }
                | expr MOD_KW expr            { $$ = exprNode::create_expr_node_from_binary_operation(exprType::mod_type, $1, $3); }
                | expr OR_KW expr             { $$ = exprNode::create_expr_node_from_binary_operation(exprType::or_type, $1, $3); }
                | expr XOR_KW expr            { $$ = exprNode::create_expr_node_from_binary_operation(exprType::xor_type, $1, $3); }
                | expr AND_KW expr            { $$ = exprNode::create_expr_node_from_binary_operation(exprType::and_type, $1, $3); }
                | expr AS_KW expr             { $$ = exprNode::create_expr_node_from_binary_operation(exprType::as_type, $1, $3); }
                | MINUS expr %prec UMINUS     { $$ = exprNode::create_expr_node_from_unary_operation(exprType::uminus_type, $2); }
                | PLUS expr %prec UPLUS       { $$ = exprNode::create_expr_node_from_unary_operation(exprType::uplus_type, $2); } 
                | NOT_KW expr                 { $$ = exprNode::create_expr_node_from_unary_operation(exprType::not_type, $2); }
                | ID OPEN_BRACKET expr_list_E CLOSE_BRACKET               { $$ = exprNode::create_expr_node_from_call($1, $3); }
                | expr DOT ID OPEN_BRACKET expr_list_E CLOSE_BRACKET      { $$ = exprNode::create_expr_node_from_method_call($1, $3, $5); }
                | expr DOT ID                                             { $$ = exprNode::create_expr_node_from_field_access($1, $3); }
                | simple_type OPEN_BRACKET expr CLOSE_BRACKET             { $$ = exprNode::create_expr_from_type_casting($1, $3); }
                | SELF_KW                                                 { $$ = exprNode::create_expr_node_from_self(); }
                | INHERITED_KW ID OPEN_BRACKET expr_list_E CLOSE_BRACKET  { $$ = exprNode::create_expr_node_from_inherited_call($2, $4); }               
                | expr OPEN_SQUARE_BRACKET expr_list CLOSE_SQUARE_BRACKET { $$ = exprNode::create_expr_node_from_array_access($1, $3); }
                | OPEN_BRACKET expr CLOSE_BRACKET                         { $$ = exprNode::create_expr_node_from_brackets($2); }
                /* | OPEN_SQUARE_BRACKET expr_list CLOSE_SQUARE_BRACKET    // что это???? */
                /* | OPEN_SQUARE_BRACKET literal DOUBLE_DOT literal CLOSE_SQUARE_BRACKET   // не делаем! */
                /* | INHERITED_KW  // убрать???? */
                
expr_list:      expr                        { $$ = exprNode::create_expr_node_list_from_expr_node($1); }
                | expr_list COMMA expr      { $$ = exprNode::add_expr_node_to_expr_node_list($1, $3); }

expr_list_E:    expr_list                   { $$ = $1; }
                | /*empty*/                 { $$ = exprNode::create_expr_node_list_from_expr_node(NULL); }

stmt:           expr ASSIGNMENT expr                            { $$ = stmtNode::create_stmt_node_from_assignment($1, $3); }
                | ID OPEN_BRACKET expr_list_E CLOSE_BRACKET     { $$ = stmtNode::create_stmt_node_from_function_call($1, $3); }
                | INHERITED_KW                                  { $$ = stmtNode::create_stmt_node_from_inherited(); }
                | stmt_block                                    { $$ = stmtNode::create_stmt_node_from_stmt_block($1); }
                | if_stmt                                       { $$ = stmtNode::create_stmt_node_from_if_stmt($1); }
                | case_stmt                                     { $$ = stmtNode::create_stmt_node_from_case_stmt($1); }
                | repeat_stmt                                   { $$ = stmtNode::create_stmt_node_from_repeat_stmt($1); }
                | while_stmt                                    { $$ = stmtNode::create_stmt_node_from_while_stmt($1); }
                | for_stmt                                      { $$ = stmtNode::create_stmt_node_from_for_stmt($1); }
                | with_stmt                                     { $$ = stmtNode::create_stmt_node_from_with_stmt($1); }
                | /*empty*/                                     { $$ = stmtNode::create_stmt_node_from_empty(); }

stmt_list:      stmt                            { $$ = stmtNode::create_stmt_node_list_from_stmt_node($1); }
                | stmt_list SEMICOLON stmt      { $$ = stmtNode::add_stmt_node_to_stmt_node_list($1, $3); }

stmt_block:     BEGIN_KW stmt_list END_KW       { $$ = stmtBlockNode::create_stmt_block_node($2); }

id_list:        ID                              { 
                                                    auto id = exprNode::create_expr_node_from_id($1);
                                                    $$ = exprNode::create_expr_node_list_from_expr_node(id); 
                                                }
                | id_list COMMA ID              {
                                                    auto id = exprNode::create_expr_node_from_id($3);
                                                    $$ = exprNode::add_expr_node_to_expr_node_list($1, id);
                                                }

var_decl:       id_list COLON type SEMICOLON                  { $$ = varDeclNode::create_var_decl_node($1, $3, NULL); }
                | id_list COLON type EQUALS expr SEMICOLON    { $$ = varDeclNode::create_var_decl_node($1, $3, $5); }

var_decl_list:  var_decl                                      { $$ = varDeclNode::create_var_decl_node_list_from_var_decl_node($1); }
                | var_decl_list var_decl                      { $$ = varDeclNode::add_var_decl_node_to_var_decl_node_list($1, $2); }

var_decl_sect:  VAR_KW var_decl_list

param_list:     var_decl_list SEMICOLON
                | var_decl_sect SEMICOLON
                | CONST_KW var_decl_list SEMICOLON
                | OUT_KW var_decl_list SEMICOLON
                | param_list var_decl_list SEMICOLON
                | param_list var_decl_sect SEMICOLON
                | param_list CONST_KW var_decl_list SEMICOLON
                | param_list OUT_KW var_decl_list SEMICOLON

param_list_E:   param_list
                | /*empty*/

function_element:   ID OPEN_BRACKET param_list_E CLOSE_BRACKET

procedure_impl:     PROCEDURE_KW function_element SEMICOLON stmt
                    | PROCEDURE_KW ID SEMICOLON stmt
                    | PROCEDURE_KW function_element SEMICOLON VAR_KW var_decl_list stmt
                    | PROCEDURE_KW ID SEMICOLON VAR_KW var_decl_list stmt
                    | PROCEDURE_KW ID DOT function_element SEMICOLON stmt
                    | PROCEDURE_KW ID DOT ID SEMICOLON stmt
                    | PROCEDURE_KW ID DOT function_element SEMICOLON VAR_KW var_decl_list stmt
                    | PROCEDURE_KW ID DOT ID SEMICOLON VAR_KW var_decl_list stmt

function_impl:      FUNCTION_KW function_element COLON type SEMICOLON stmt
                    | FUNCTION_KW ID COLON type SEMICOLON stmt
                    | FUNCTION_KW function_element COLON type SEMICOLON VAR_KW var_decl_list stmt
                    | FUNCTION_KW ID COLON type SEMICOLON VAR_KW var_decl_list stmt
                    | FUNCTION_KW ID DOT function_element COLON type SEMICOLON stmt
                    | FUNCTION_KW ID DOT ID COLON type SEMICOLON stmt
                    | FUNCTION_KW ID DOT function_element COLON type SEMICOLON VAR_KW var_decl_list stmt
                    | FUNCTION_KW ID DOT ID COLON type SEMICOLON VAR_KW var_decl_list stmt

if_stmt:        IF_KW expr THEN_KW stmt                 { $$ = ifStmtNode::create_if_stmt_node($2, $4, NULL); }
                | IF_KW expr THEN_KW stmt ELSE_KW stmt  { $$ = ifStmtNode::create_if_stmt_node($2, $4, $6); }

case_list:      expr_list COLON stmt SEMICOLON                          { $$ = caseElementNode::create_case_element_list_node($1, $3); }
                | case_list expr_list COLON stmt SEMICOLON              { $$ = caseElementNode::add_case_element_to_list_node($1, $2, $4); }

case_stmt:      CASE_KW expr OF_KW case_list END_KW                     { $$ = caseStmtNode::create_case_node($2, $4, NULL); }
                | CASE_KW expr OF_KW case_list ELSE_KW stmt END_KW      { $$ = caseStmtNode::create_case_node($2, $4, $6); }

repeat_stmt:    REPEAT_KW stmt_list UNTIL_KW expr       { $$ = repeatStmtNode::create_repeat_stmt_node($4, $2); }

while_stmt:     WHILE_KW expr DO_KW stmt                { $$ = whileStmtNode::create_while_stmt_node($4, $2); }

for_stmt:       FOR_KW ID ASSIGNMENT expr TO_KW expr DO_KW stmt         { $$ = forStmtNode::create_for_stmt_node($2, $4, $6, $8, false); }
                | FOR_KW ID ASSIGNMENT expr DOWNTO_KW expr DO_KW stmt   { $$ = forStmtNode::create_for_stmt_node($2, $4, $6, $8, true); }

enum_param_list:    ID
                    | ID EQUALS expr
                    | enum_param_list COMMA ID EQUALS expr
                    | enum_param_list COMMA ID

enum_decl:          ID EQUALS OPEN_BRACKET enum_param_list CLOSE_BRACKET SEMICOLON

enum_decl_list:     enum_decl
                    | enum_decl_list enum_decl
enum_param_list:    ID                                      { 
                                                                auto tmp = enumParamNode::create_enum_param_node_without_value($1); 
                                                                $$ = enumParamNode::create_enum_param_node_list_from_enum_param_node(tmp); 
                                                            }
                    | ID EQUALS expr                        {
                                                                auto tmp = enumParamNode::create_enum_param_node_with_value($1, $3);
                                                                $$ = enumParamNode::create_enum_param_node_list_from_enum_param_node(tmp);
                                                            }
                    | enum_param_list COMMA ID EQUALS expr  {
                                                                auto tmp = enumParamNode::create_enum_param_node_with_value($3, $5);
                                                                $$ = enumParamNode::add_enum_param_node_to_enum_param_node_list($1, tmp);
                                                            }
                    | enum_param_list COMMA ID              {
                                                                auto tmp = enumParamNode::create_enum_param_node_without_value($3);
                                                                $$ = enumParamNode::add_enum_param_node_to_enum_param_node_list($1, tmp);
                                                            }

class_decl_header:      ID EQUALS CLASS_KW
                        | ID EQUALS CLASS_KW OPEN_BRACKET ID CLOSE_BRACKET

property_decl:  PROPERTY_KW ID COLON type READ_KW ID WRITE_KW ID SEMICOLON
                | PROPERTY_KW ID COLON type READ_KW ID SEMICOLON

override_modifier:    OVERRIDE_KW SEMICOLON

field_modifier:     STATIC_KW SEMICOLON
                    | override_modifier

field_modifier_list:    field_modifier
                        | field_modifier_list field_modifier

field_decl:             var_decl
                        | var_decl field_modifier_list

method_procedure_decl:  PROCEDURE_KW function_element SEMICOLON
                        | PROCEDURE_KW ID SEMICOLON

method_procedure_decl_with_modifier_NO:     method_procedure_decl
                                            | method_procedure_decl method_modifier_list

method_function_decl:   FUNCTION_KW function_element COLON type SEMICOLON
                        | FUNCTION_KW ID COLON type SEMICOLON

method_function_decl_with_modifier_NO:      method_function_decl
                                            | method_function_decl method_modifier_list

constructor_decl:   CONSTRUCTOR_KW function_element SEMICOLON
                    | CONSTRUCTOR_KW ID SEMICOLON

constructor_decl_with_modifier_NO:      constructor_decl
                                        | constructor_decl override_modifier

constructor_impl:   CONSTRUCTOR_KW ID DOT function_element SEMICOLON stmt
                    | CONSTRUCTOR_KW ID DOT function_element SEMICOLON override_modifier stmt
                    | CONSTRUCTOR_KW ID DOT ID SEMICOLON stmt
                    | CONSTRUCTOR_KW ID DOT ID SEMICOLON override_modifier stmt

destructor_decl:    DESTRUCTOR_KW ID SEMICOLON
                    | DESTRUCTOR_KW ID SEMICOLON override_modifier

destructor_impl:    DESTRUCTOR_KW ID DOT ID SEMICOLON stmt
                    | DESTRUCTOR_KW ID DOT ID SEMICOLON override_modifier stmt

implementation_element:  constructor_impl SEMICOLON
                        | destructor_impl SEMICOLON
                        | procedure_impl SEMICOLON
                        | function_impl SEMICOLON

implementation_list:    implementation_element
                        | implementation_list implementation_element

implementation_sect: IMPLEMENTATION_KW implementation_list

method_modifier:    field_modifier
                    | OVERLOAD_KW SEMICOLON

method_modifier_list:   method_modifier
                        | method_modifier_list method_modifier

method_decl:            method_procedure_decl_with_modifier_NO
                        | method_function_decl_with_modifier_NO

method_field_property_list: constructor_decl_with_modifier_NO
                            | destructor_decl
                            | field_decl
                            | property_decl
                            | method_decl
                            | method_field_property_list constructor_decl_with_modifier_NO
                            | method_field_property_list destructor_decl
                            | method_field_property_list field_decl
                            | method_field_property_list property_decl
                            | method_field_property_list method_decl

class_element:  PRIVATE_KW method_field_property_list SEMICOLON
                | PUBLIC_KW method_field_property_list SEMICOLON
                | PROTECTED_KW method_field_property_list SEMICOLON
                | method_field_property_list SEMICOLON

class_element_list: class_element
                    | class_element_list class_element

class_decl:    class_decl_header class_element_list SEMICOLON END_KW SEMICOLON

class_decl_list:    class_decl
                    | class_decl_list class_decl

type_sect:  TYPE_KW class_decl_list
            | TYPE_KW enum_decl_list

with_stmt:  WITH_KW id_list DO_KW stmt      { $$ = withStmtNode::create_with_stmt_node($2, $4); }

%%
