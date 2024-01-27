#include "exprNode.h"
#include <string>
#include <list>

exprNode::exprNode()
{
}

exprNode *exprNode::create_expr_node_from_string(string &value)
{
    exprNode *res = new exprNode();
    res->type = exprType::string_type;
    res->string_value = value;
    return res;
}

exprNode *exprNode::create_expr_node_from_id(string &id)
{
    exprNode *res = new exprNode();
    res->type = exprType::id_type_expr;
    res->id = id;
    return res;
}

exprNode *exprNode::create_expr_node_from_binary_operation(exprType type, exprNode *left_operand, exprNode *right_operand)
{
    exprNode *res = new exprNode();
    res->type = type;
    res->left_operand = left_operand;
    res->right_operand = right_operand;
    return res;
}

exprNode *exprNode::create_expr_node_from_unary_operation(exprType type, exprNode *operand)
{
    exprNode *res = new exprNode();
    res->type = type;
    res->left_operand = operand;
    return res;
}

exprNode *exprNode::create_expr_node_from_function_call(string &id, list<exprNode *> *params)
{
    exprNode *res = new exprNode();
    res->type = exprType::function_call_type_expr;
    res->id = id;
    res->params = params;
    return res;
}

exprNode *exprNode::create_expr_node_from_method_function_call(exprNode *left_operand, string &id, list<exprNode *> *params)
{
    exprNode *res = new exprNode();
    res->type = exprType::method_function_call_type;
    res->left_operand = left_operand;
    res->id = id;
    res->params = params;
    return res;
}

exprNode *exprNode::create_expr_node_from_field_access(exprNode *left_operand, string &id)
{
    exprNode *res = new exprNode();
    res->type = exprType::field_access_type;
    res->left_operand = left_operand;
    res->id = id;
    return res;
}

exprNode *exprNode::create_expr_node_from_type_casting(simpleType simple_type, exprNode *operand)
{
    exprNode *res = new exprNode();
    res->type = exprType::type_casting_type;
    res->simple_type = simple_type;
    res->left_operand = operand;
    return res;
}

exprNode *exprNode::create_expr_node_from_self()
{
    exprNode *res = new exprNode();
    res->type = exprType::self_type;
    return res;
}

exprNode *exprNode::create_expr_node_from_inherited_call(string &id, list<exprNode *> *params)
{
    exprNode *res = new exprNode();
    res->type = exprType::inherited_call_type;
    res->id = id;
    res->params = params;
    return res;
}

exprNode *exprNode::create_expr_node_from_array_access(exprNode *left_operand, list<exprNode *> *params)
{
    exprNode *res = new exprNode();
    res->type = exprType::array_access_type;
    res->left_operand = left_operand;
    res->params = params;
    return res;
}

exprNode *exprNode::create_expr_node_from_brackets(exprNode *operand)
{
    exprNode *res = new exprNode();
    res->type = exprType::brackets_type;
    res->left_operand = operand;
    return res;
}

exprNode *exprNode::create_expr_node_from_literal_node(literalNode *literal_node)
{
    exprNode *res = new exprNode();
    res->type = exprType::literal_node_type;
    res->literal_node = literal_node;
    return res;
}

std::list<exprNode *> *exprNode::create_expr_node_list_from_expr_node(exprNode *expr_node)
{
    std::list<exprNode *> *res = new std::list<exprNode *>();
    res->push_back(expr_node);
    return res;
}

std::list<exprNode *> *exprNode::add_expr_node_to_expr_node_list(std::list<exprNode *> *expr_node_list, exprNode *expr_node)
{
    expr_node_list->push_back(expr_node);
    return expr_node_list;
}