#pragma once
#include "node.h"
#include "methodProcedureDeclWithModifierNode.h"
#include "methodFunctionDeclWithModifierNode.h"

class methodDeclNode : public node
{
public:
    methodProcedureDeclWithModifierNode *method_procedure_decl_with_modifier_node;
    methodFunctionDeclWithModifierNode *method_function_decl_with_modifier_node;

    methodDeclNode();

    static methodDeclNode *create_method_decl_node_from_procedure(methodProcedureDeclWithModifierNode *method_procedure_decl_with_modifier_node);
    static methodDeclNode *create_method_decl_node_from_function(methodFunctionDeclWithModifierNode *method_function_decl_with_modifier_node);
};