#include "constructorDeclWithModifierNoNode.h"

constructorDeclWithModifierNoNode::constructorDeclWithModifierNoNode()
{
}

constructorDeclWithModifierNoNode *constructorDeclWithModifierNoNode::create_constructor_decl_with_modifier_node(constructorDeclNode *constructor_decl_node, bool has_override)
{
    constructorDeclWithModifierNoNode *constructor_decl_with_modifier_node = new constructorDeclWithModifierNoNode();
    constructor_decl_with_modifier_node->constructor_decl_node = constructor_decl_node;
    constructor_decl_with_modifier_node->has_override = has_override;
    return constructor_decl_with_modifier_node;
}