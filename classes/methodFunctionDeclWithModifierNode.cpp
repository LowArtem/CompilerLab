#include "methodFunctionDeclWithModifierNode.h"

methodFunctionDeclWithModifierNode::methodFunctionDeclWithModifierNode()
{
}

methodFunctionDeclWithModifierNode *methodFunctionDeclWithModifierNode::create_method_function_decl_with_modifier_node(methodFunctionDeclNode *functionDeclNode, std::list<modifier> *modifier_list)
{
    methodFunctionDeclWithModifierNode *res = new methodFunctionDeclWithModifierNode();
    res->functionDeclNode = functionDeclNode;
    res->modifier_list = modifier_list;
    return res;
}