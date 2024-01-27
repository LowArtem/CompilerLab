#include "methodFunctionDeclNode.h"

methodFunctionDeclNode::methodFunctionDeclNode()
{
}

methodFunctionDeclNode *methodFunctionDeclNode::create_method_function_decl_node_with_params(functionElementNode *function_element, typeNode *type)
{
    methodFunctionDeclNode *res = new methodFunctionDeclNode();
    res->id = function_element->id;
    res->param_list_node_list = function_element->param_list_node_list;
    res->type = type;
    return res;
}

methodFunctionDeclNode *methodFunctionDeclNode::create_method_function_decl_node_without_params(std::string id, typeNode *type)
{
    methodFunctionDeclNode *res = new methodFunctionDeclNode();
    res->id = id;
    res->param_list_node_list = nullptr;
    res->type = type;
    return res;
}