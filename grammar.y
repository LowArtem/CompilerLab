%{
    #include <stdio.h>
    #include <list>
    #include "classes/literalNode.h"
    #include "classes/exprNode.h"
    #include "classes/stmtNode.h"
    #include "classes/ifStmtNode.h"
    #include "classes/repeatStmtNode.h"
    #include "classes/caseNode.h"
    #include "classes/caseElementNode.h"
    #pragma once

    extern int yylex(void);
%}

%union {
  literalNode* literal_union;
  exprNode* expr_union;
  std::list<exprNode*>* expr_list_union;
  stmtNode* stmt_union;
  ifStmtNode* if_stmt_union;
  repeatStmtNode* repeat_stmt_union;
  std::list<stmtNode*>* stmt_list_union;
  caseNode* case_stmt_union;
  std::list<caseElementNode*>* case_element_list_union;
  stmtBlockNode* stmt_block_union;
}

%type<literal_union> literal
%type<expr_union> expr
%type<expr_list_union> expr_list expr_list_e id_list
%type<stmt_union> stmt
%type<if_stmt_union> if_stmt
%type<stmt_block_union> stmt_block
%type<stmt_list_union> stmt_list
%type<case_stmt_union> case_stmt
%type<case_element_list_union> case_list
%type<repeat_stmt_union> repeat_stmt

%start start_symbol

%token INTEGER_KW
%token REAL_KW
%token BOOLEAN_KW
%token STRING_KW
%token CHAR_KW
%token ARRAY_KW
%token SET_KW

%token ID
%token TRUE_KW
%token FALSE_KW
%token INTEGER
%token REAL
%token STRING
%token CHAR

%token PROGRAM_KW
%token BEGIN_KW
%token END_KW
%token VAR_KW
%token TYPE_KW

%token IMPLEMENTATION_KW
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
%token INHERITED_KW
%token SELF_KW
%token WITH_KW
%token OF_KW

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

%token ASSIGNMENT

%token EQUALS
%token NOT_EQUAL
%token LESS
%token GREATER
%token LESS_OR_EQUAL
%token GREATER_OR_EQUAL
%token IN_KW
%token IS_KW
%token NOT_KW
%token AND_KW
%token AS_KW
%token XOR_KW
%token OR_KW

%token PLUS
%token MINUS
%token MULTIPLICATION
%token DIVISION
%token DIV_KW
%token MOD_KW

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

simple_type:    INTEGER_KW
                | REAL_KW
                | BOOLEAN_KW
                | STRING_KW
                | CHAR_KW

literal:        INTEGER     { $$ = create_literal_node_from_int($1); }
                | REAL      { $$ = create_literal_node_from_real($1); }
                | TRUE_KW   { $$ = create_literal_node_from_bool(true); }
                | FALSE_KW  { $$ = create_literal_node_from_bool(false); }
                | CHAR      { $$ = create_literal_node_from_char($1); }

type:           simple_type
                | ID
                | SET_KW OF_KW CHAR_KW
                | SET_KW OF_KW BOOLEAN_KW
                | SET_KW OF_KW literal DOUBLE_DOT literal
                | ARRAY_KW OF_KW type
                | ARRAY_KW expr OF_KW type

expr:           literal                       { $$ = create_expr_node_from_literal($1); }
                | STRING                      { $$ = create_expr_node_from_string($1); }
                | ID                          { $$ = create_expr_node_from_id($1); }
                | expr PLUS expr              { $$ = create_expr_node_from_binary_operation(exprType::plus_type, $1, $3); }
                | expr MINUS expr             { $$ = create_expr_node_from_binary_operation(exprType::minus_type, $1, $3); }
                | expr MULTIPLICATION expr    { $$ = create_expr_node_from_binary_operation(exprType::multiplication_type, $1, $3); }
                | expr DIVISION expr          { $$ = create_expr_node_from_binary_operation(exprType::division_type, $1, $3); }
                | expr LESS expr              { $$ = create_expr_node_from_binary_operation(exprType::less_type, $1, $3); }
                | expr GREATER expr           { $$ = create_expr_node_from_binary_operation(exprType::greater_type, $1, $3); }
                | expr NOT_EQUAL expr         { $$ = create_expr_node_from_binary_operation(exprType::not_equal_type, $1, $3); }
                | expr LESS_OR_EQUAL expr     { $$ = create_expr_node_from_binary_operation(exprType::less_or_equal_type, $1, $3); }
                | expr GREATER_OR_EQUAL expr  { $$ = create_expr_node_from_binary_operation(exprType::greater_or_equal_type, $1, $3); }
                | expr EQUALS expr            { $$ = create_expr_node_from_binary_operation(exprType::equals_type, $1, $3); }
                | expr IN_KW expr             { $$ = create_expr_node_from_binary_operation(exprType::in_type, $1, $3); }
                | expr IS_KW expr             { $$ = create_expr_node_from_binary_operation(exprType::is_type, $1, $3); }
                | expr DIV_KW expr            { $$ = create_expr_node_from_binary_operation(exprType::div_type, $1, $3); }
                | expr MOD_KW expr            { $$ = create_expr_node_from_binary_operation(exprType::mod_type, $1, $3); }
                | expr OR_KW expr             { $$ = create_expr_node_from_binary_operation(exprType::or_type, $1, $3); }
                | expr XOR_KW expr            { $$ = create_expr_node_from_binary_operation(exprType::xor_type, $1, $3); }
                | expr AND_KW expr            { $$ = create_expr_node_from_binary_operation(exprType::and_type, $1, $3); }
                | expr AS_KW expr             { $$ = create_expr_node_from_binary_operation(exprType::as_type, $1, $3); }
                | MINUS expr %prec UMINUS     { $$ = create_expr_node_from_unary_operation(exprType::uminus_type, $2); }
                | PLUS expr %prec UPLUS       { $$ = create_expr_node_from_unary_operation(exprType::uplus_type, $2); } 
                | NOT_KW expr                 { $$ = create_expr_node_from_unary_operation(exprType::not_type, $2); }
                | ID OPEN_BRACKET expr_list_E CLOSE_BRACKET               { $$ = create_expr_node_from_call($1, $3); }
                | expr DOT ID OPEN_BRACKET expr_list_E CLOSE_BRACKET      { $$ = create_expr_node_from_method_call($1, $3, $5); }
                | expr DOT ID                                             { $$ = create_expr_node_from_field_access($1, $3); }
                | simple_type OPEN_BRACKET expr CLOSE_BRACKET             { $$ = create_expr_from_type_casting($1, $3); }
                | SELF_KW                                                 { $$ = create_expr_node_from_self(); }
                | INHERITED_KW ID OPEN_BRACKET expr_list_E CLOSE_BRACKET  { $$ = create_expr_node_from_inherited_call($2, $4); }               
                | expr OPEN_SQUARE_BRACKET expr_list CLOSE_SQUARE_BRACKET { $$ = create_expr_node_from_array_access($1, $3); }
                | OPEN_BRACKET expr CLOSE_BRACKET                         { $$ = create_expr_node_from_brackets($2); }
                /* | OPEN_SQUARE_BRACKET expr_list CLOSE_SQUARE_BRACKET    // что это???? */
                /* | OPEN_SQUARE_BRACKET literal DOUBLE_DOT literal CLOSE_SQUARE_BRACKET   // не делаем! */
                /* | INHERITED_KW  // убрать???? */
                

expr_list:      expr                        { $$ = create_expr_node_list_from_expr_node($1); }
                | expr_list COMMA expr      { $$ = add_expr_node_to_expr_node_list($1, $3); }

expr_list_E:    expr_list
                | /*empty*/

stmt:           expr ASSIGNMENT expr
                | ID OPEN_BRACKET expr_list_E CLOSE_BRACKET
                | INHERITED_KW
                | stmt_block
                | if_stmt
                | case_stmt
                | repeat_stmt
                | while_stmt
                | for_stmt
                | with_stmt
                | /*empty*/

stmt_list:      stmt                            { $$ = create_stmt_node_list_from_stmt_node($1); }
                | stmt_list SEMICOLON stmt      { $$ = add_stmt_node_to_stmt_node_list($1, $3); }

stmt_block:     BEGIN_KW stmt_list END_KW

id_list:        ID                              { 
                                                    auto id = create_expr_node_from_id($1);
                                                    $$ = create_expr_node_list_from_expr_node(id); 
                                                }
                | id_list COMMA ID              {
                                                    auto id = create_expr_node_from_id($3);
                                                    $$ = add_expr_node_to_expr_node_list($1, id);
                                                }

var_decl:       id_list COLON type SEMICOLON
                | id_list COLON type EQUALS expr SEMICOLON

var_decl_list:  var_decl
                | var_decl_list var_decl

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

if_stmt:        IF_KW expr THEN_KW stmt                 { $$ = create_if_stmt_node($2, $4, NULL); }
                | IF_KW expr THEN_KW stmt ELSE_KW stmt  { $$ = create_if_stmt_node($2, $4, $6); }

case_list:      expr_list COLON stmt SEMICOLON                          { $$ = create_case_element_list_node($1, $3); }
                | case_list expr_list COLON stmt SEMICOLON              { $$ = add_case_element_to_list_node($1, $2, $4); }

case_stmt:      CASE_KW expr OF_KW case_list END_KW                     { $$ = create_case_node($2, $4, NULL); }
                | CASE_KW expr OF_KW case_list ELSE_KW stmt END_KW      { $$ = create_case_node($2, $4, $6); }

repeat_stmt:    REPEAT_KW stmt_list UNTIL_KW expr       { $$ = create_repeat_stmt_node($2, $4); }

while_stmt:     WHILE_KW expr DO_KW stmt

for_stmt:       FOR_KW ID ASSIGNMENT expr TO_KW expr DO_KW stmt
                | FOR_KW ID ASSIGNMENT expr DOWNTO_KW expr DO_KW stmt

enum_param_list:    ID
                    | ID EQUALS expr
                    | enum_param_list COMMA ID EQUALS expr
                    | enum_param_list COMMA ID

enum_decl:          ID EQUALS OPEN_BRACKET enum_param_list CLOSE_BRACKET SEMICOLON

enum_decl_list:     enum_decl
                    | enum_decl_list enum_decl

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

with_stmt:  WITH_KW id_list DO_KW stmt

%%

// --------------------------literal--------------------------
static literalNode *literalNode::create_literal_node_from_int(int value)
{
    literalNode *res = new literalNode();
    res->type = literalType::int_type;
    res->value = value;
    res->id_node = ++literalNode::max_id;
    return res;
}

static literalNode *literalNode::create_literal_node_from_real(double value)
{
    literalNode *res = new literalNode();
    res->type = literalType::real_type;
    res->value = value;
    res->id_node = ++literalNode::max_id;
    return res;
}

static literalNode *literalNode::create_literal_node_from_boolean(bool value)
{
    literalNode *res = new literalNode();
    res->type = literalType::boolean_type;
    res->value = value;
    res->id_node = ++literalNode::max_id;
    return res;
}

static literalNode *literalNode::create_literal_node_from_char(char value)
{
    literalNode *res = new literalNode();
    res->type = literalType::char_type;
    res->value = value;
    res->id_node = ++literalNode::max_id;
    return res;
}

// --------------------------expr--------------------------
static exprNode *exprNode::create_expr_node_from_string(string &value)
{
    exprNode *res = new exprNode();
    res->type = exprType::string_type;
    res->value = value;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_id(string &id)
{
    exprNode *res = new exprNode();
    res->type = exprType::id_type;
    res->id = id;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_binary_operation(exprType type, exprNode *left_operand, exprNode *right_operand)
{
    exprNode *res = new exprNode();
    res->type = type;
    res->left_operand = left_operand;
    res->right_operand = right_operand;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_unary_operation(exprType type, exprNode *operand)
{
    exprNode *res = new exprNode();
    res->type = type;
    res->left_operand = operand;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_function_call(string &id, list<exprNode *> *params)
{
    exprNode *res = new exprNode();
    res->type = exprType::function_call_type;
    res->id = id;
    res->params = params;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_method_function_call(exprNode *left_operand, string &id, list<exprNode *> *params)
{
    exprNode *res = new exprNode();
    res->type = exprType::method_function_call_type;
    res->left_operand = left_operand;
    res->id = id;
    res->params = params;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_field_access(exprNode *left_operand, string &id)
{
    exprNode *res = new exprNode();
    res->type = exprType::field_access_type;
    res->left_operand = left_operand;
    res->id = id;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_type_casting(simpleType simple_type, exprNode *operand)
{
    exprNode *res = new exprNode();
    res->type = exprType::type_casting_type;
    res->simple_type = simple_type;
    res->left_operand = operand;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_self()
{
    exprNode *res = new exprNode();
    res->type = exprType::self_type;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_inherited_call(string &id, list<exprNode *> *params)
{
    exprNode *res = new exprNode();
    res->type = exprType::inherited_call_type;
    res->id = id;
    res->params = params;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_array_access(exprNode *left_operand, list<exprNode *> *params)
{
    exprNode *res = new exprNode();
    res->type = exprType::array_access_type;
    res->left_operand = left_operand;
    res->params = params;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::create_expr_node_from_brackets(exprNode *operand)
{
    exprNode *res = new exprNode();
    res->type = exprType::brackets_type;
    res->left_operand = operand;
    res->id_node = ++exprNode::max_id;
    return res;
}

static exprNode *exprNode::сreate_expr_node_from_literal_node(literalNode *literal_node)
{
    exprNode *res = new exprNode();
    res->type = exprType::literal_node_type;
    res->literal_node = literal_node;
    res->id_node = ++exprNode::max_id;
    return res;
}

// --------------------------if_stmt--------------------------
static ifStmtNode *ifStmtNode::create_if_stmt_node(exprNode *condition, stmtNode *if_body, stmtNode *else_body)
{
    ifStmtNode *res = new ifStmtNode();
    res->condition = condition;
    res->if_body = if_body;
    res->else_body = else_body;
    res->id_node = ++ifStmtNode::max_id;
    return res;
}

// --------------------------repeat_stmt--------------------------
static repeatStmtNode *repeatStmtNode::create_repeat_stmt_node(stmtNode *body, exprNode *condition)
{
    repeatStmtNode *res = new repeatStmtNode();
    res->body = body;
    res->condition = condition;
    res->id_node = ++repeatStmtNode::max_id;
    return res;
}

static std::list<exprNode*>* exprNode::create_expr_node_list_from_expr_node(exprNode *expr_node)
{
    std::list<exprNode*>* res = new std::list<exprNode*>();
    res->push_back(expr_node);
    return res;
}

static std::list<exprNode*>* exprNode::add_expr_node_to_expr_node_list(std::list<exprNode*>* expr_node_list, exprNode *expr_node)
{
    expr_node_list->push_back(expr_node);
    return expr_node_list;
}

static std::list<stmtNode *>* stmtNode::create_stmt_node_list_from_stmt_node(stmtNode *stmt_node)
{
    std::list<stmtNode*>* res = new std::list<stmtNode*>();
    res->push_back(stmt_node);
    return res;
}

static std::list<stmtNode *>* stmtNode::add_stmt_node_to_stmt_node_list(std::list<stmtNode*>* stmt_node_list, stmtNode *stmt_node)
{
    stmt_node_list->push_back(stmt_node);
    return stmt_node_list;
}

// --------------------------case_stmt--------------------------
static std::list<caseElementNode *> *caseElementNode::create_case_element_list_node(exprNode *condition, stmtNode *body)
{
    caseElementNode *case_element_node = new caseElementNode();
    case_element_node->condition = condition;
    case_element_node->body = body;
    case_element_node->id_node = ++caseElementNode::max_id;

    std::list<caseElementNode *> *res = new std::list<caseElementNode *>();
    res->push_back(case_element_node);
    return res;
}

static std::list<caseElementNode *> *caseElementNode::add_case_element_to_list_node(std::list<caseElementNode *> *list_node, exprNode *condition, stmtNode *body)
{
    caseElementNode *case_element_node = new caseElementNode();
    case_element_node->condition = condition;
    case_element_node->body = body;
    case_element_node->id_node = ++caseElementNode::max_id;

    list_node->push_back(case_element_node);
    return list_node;
}

static caseNode *caseNode::create_case_node(exprNode *selector_expression, std::list<caseElementNode *> *elements, stmtNode *else_body)
{
    caseNode *res = new caseNode();
    res->selector_expression = selector_expression;
    res->elements = elements;
    res->else_body = else_body;
    res->id_node = ++caseNode::max_id;
    return res;
}