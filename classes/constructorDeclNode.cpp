#include "constructorDeclNode.h"

constructorDeclNode::constructorDeclNode()
{
}

constructorDeclNode *constructorDeclNode::create_constructor_decl_node_with_params(functionElementNode *function_element)
{
    constructorDeclNode *res = new constructorDeclNode();
    res->id = function_element->id;
    res->param_list_node_list = function_element->param_list_node_list;
    return res;
}

constructorDeclNode *constructorDeclNode::create_constructor_decl_node_without_params(string *id)
{
    constructorDeclNode *res = new constructorDeclNode();
    res->id = id;
    res->param_list_node_list = nullptr;
    return res;
}