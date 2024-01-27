#pragma once
#include <list>
#include "methodFunctionDeclNode.h"
#include "modifierEnum.h"
#include "node.h"

class methodFunctionDeclWithModifierNode : public node
{
public:
    methodFunctionDeclNode *functionDeclNode;
    std::list<modifier> *modifier_list;

    methodFunctionDeclWithModifierNode();

    static methodFunctionDeclWithModifierNode *create_method_function_decl_with_modifier_node(methodFunctionDeclNode *functionDeclNode, std::list<modifier> *modifier_list);
};