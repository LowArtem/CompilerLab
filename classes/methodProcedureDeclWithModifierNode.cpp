#include "methodProcedureDeclWithModifierNode.h"

methodProcedureDeclWithModifierNode::methodProcedureDeclWithModifierNode()
{
}

methodProcedureDeclWithModifierNode *methodProcedureDeclWithModifierNode::create_method_procedure_decl_with_modifier_node(functionElementNode *function_element, std::list<modifier> *modifier_list)
{
    methodProcedureDeclWithModifierNode *res = new methodProcedureDeclWithModifierNode();
    res->function_element = function_element;
    res->modifier_list = modifier_list;
    return res;
}