#pragma once
#include "constructorDeclNode.h"
#include "node.h"

class constructorDeclWithModifierNoNode : public node
{
public:
    constructorDeclNode *constructor_decl_node;
    bool has_override;

    constructorDeclWithModifierNoNode();

    static constructorDeclWithModifierNoNode *create_constructor_decl_with_modifier_node(constructorDeclNode *constructor_decl_node, bool has_override);
};