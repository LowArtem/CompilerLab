#pragma once
#include <list>
#include "modifierEnum.h"
#include "node.h"
#include "varDeclNode.h"

using namespace std;

class fieldDeclNode : public node
{
public:
    varDeclNode *var_decl_node;
    list<modifier> *field_modifier_list;

    fieldDeclNode();

    static fieldDeclNode *create_field_decl_node_without_field_modifiers(varDeclNode *var_decl_node);

    static fieldDeclNode *create_field_decl_node_with_field_modifiers(varDeclNode *var_decl_node, list<modifier> *field_modifier_list);
};