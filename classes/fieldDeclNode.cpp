#include "fieldDeclNode.h"

fieldDeclNode::fieldDeclNode()
{
}

fieldDeclNode *fieldDeclNode::create_field_decl_node_without_field_modifiers(varDeclNode *var_decl_node)
{
    fieldDeclNode *res = new fieldDeclNode();
    res->var_decl_node = var_decl_node;
    return res;
}

fieldDeclNode *fieldDeclNode::create_field_decl_node_with_field_modifiers(varDeclNode *var_decl_node, list<modifier> *field_modifier_list)
{
    fieldDeclNode *res = new fieldDeclNode();
    res->var_decl_node = var_decl_node;
    res->field_modifier_list = field_modifier_list;
    return res;
}