#include "methodDeclNode.h"

methodDeclNode::methodDeclNode()
{
}

methodDeclNode *methodDeclNode::create_method_decl_node_from_procedure(methodProcedureDeclWithModifierNode *method_procedure_decl_with_modifier_node)
{
    methodDeclNode *res = new methodDeclNode();
    res->method_procedure_decl_with_modifier_node = method_procedure_decl_with_modifier_node;
    res->method_function_decl_with_modifier_node = nullptr;
    return res;
}

methodDeclNode *methodDeclNode::create_method_decl_node_from_function(methodFunctionDeclWithModifierNode *method_function_decl_with_modifier_node)
{
    methodDeclNode *res = new methodDeclNode();
    res->method_procedure_decl_with_modifier_node = nullptr;
    res->method_function_decl_with_modifier_node = method_function_decl_with_modifier_node;
    return res;
}