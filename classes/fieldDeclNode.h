#include "varDeclNode.h"
#include "fieldModifierEnum.h"
#include "node.h"
#include <list>

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