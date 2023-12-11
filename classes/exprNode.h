#include <string>
#include <list>
#include "literalNode.h"

using namespace std;

enum simpleType
{
    int_type,
    real_type,
    boolean_type,
    char_type,
    string_type
};

enum exprType
{
    int_type,
    real_type,
    boolean_type,
    char_type,
    string_type,
    id_type,
    plus_type,
    minus_type,
    multiplication_type,
    division_type,
    less_type,
    greater_type,
    not_equal_type,
    less_or_equal_type,
    greater_or_equal_type,
    equals_type,
    in_type,
    is_type,
    div_type,
    mod_type,
    or_type,
    xor_type,
    and_type,
    as_type,
    not_type,
    uminus_type,
    uplus_type,
    function_call_type,
    method_function_call_type,
    field_access_type,
    type_casting_type,
    self_type,
    inherited_call_type,
    array_access_type,
    brackets_type,
    literal_node_type
};

class exprNode
{
public:
    exprType type;
    int int_value;
    double real_value;
    bool boolean_value;
    char char_value;
    string string_value;
    string id;
    exprNode *left_operand;
    exprNode *right_operand;
    list<exprNode *> *params;
    simpleType simple_type;
    literalNode *literal_node;
    int id_node;
    static int max_id;

    static exprNode *create_expr_node_from_string(string &value);

    static exprNode *create_expr_node_from_id(string &id);

    static exprNode *create_expr_node_from_binary_operation(exprType type, exprNode *left_operand, exprNode *right_operand);

    static exprNode *create_expr_node_from_unary_operation(exprType type, exprNode *operand);

    static exprNode *create_expr_node_from_function_call(string &id, list<exprNode *> *params);

    static exprNode *create_expr_node_from_method_function_call(exprNode *left_operand, string &id, list<exprNode *> *params);

    static exprNode *create_expr_node_from_field_access(exprNode *left_operand, string &id);

    static exprNode *create_expr_node_from_type_casting(simpleType simple_type, exprNode *operand);

    static exprNode *create_expr_node_from_self();

    static exprNode *create_expr_node_from_inherited_call(string &id, list<exprNode *> *params);

    static exprNode *create_expr_node_from_array_access(exprNode *left_operand, list<exprNode *> *params);

    static exprNode *create_expr_node_from_brackets(exprNode *left_operand);

    static exprNode *create_expr_node_from_literal_node(literalNode *literal_node);
};
