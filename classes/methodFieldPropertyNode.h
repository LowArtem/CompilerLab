#include "node.h"
#include "constructorDeclWithModifierNoNode.h"
#include "destructorDeclNode.h"
#include "fieldDeclNode.h"
#include "propertyDeclNode.h"
#include "methodDeclNode.h"
#include <list>

class methodFieldPropertyNode : public node
{
public:
    constructorDeclWithModifierNoNode *constructor_decl_with_modifier_no_node;
    destructorDeclNode *destructor_decl_node;
    fieldDeclNode *field_decl_node;
    propertyDeclNode *property_decl_node;
    methodDeclNode *method_decl_node;

    methodFieldPropertyNode();

    static methodFieldPropertyNode *create_method_field_property_node_from_constructor(constructorDeclWithModifierNoNode *constructor_decl_with_modifier_no_node);
    static methodFieldPropertyNode *create_method_field_property_node_from_destructor(destructorDeclNode *destructor_decl_node);
    static methodFieldPropertyNode *create_method_field_property_node_from_field(fieldDeclNode *field_decl_node);
    static methodFieldPropertyNode *create_method_field_property_node_from_property(propertyDeclNode *property_decl_node);
    static methodFieldPropertyNode *create_method_field_property_node_from_method(methodDeclNode *method_decl_node);

    static std::list<methodFieldPropertyNode *> *create_method_field_property_node_list_from_method_field_property_node(methodFieldPropertyNode *method_field_property_node);
    static std::list<methodFieldPropertyNode *> *add_method_field_property_node_to_method_field_property_node_list(std::list<methodFieldPropertyNode *> *method_field_property_node_list, methodFieldPropertyNode *method_field_property_node);
};