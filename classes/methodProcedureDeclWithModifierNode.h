#pragma once
#include "functionElementNode.h"
#include "modifierEnum.h"
#include "node.h"

class methodProcedureDeclWithModifierNode : public node
{
public:
    functionElementNode *function_element;
    std::list<modifier> *modifier_list;

    methodProcedureDeclWithModifierNode();

    static methodProcedureDeclWithModifierNode *create_method_procedure_decl_with_modifier_node(functionElementNode *function_element, std::list<modifier> *modifier_list);
};