#include "methodFieldPropertyNode.h"

methodFieldPropertyNode::methodFieldPropertyNode()
{
}

methodFieldPropertyNode *methodFieldPropertyNode::create_method_field_property_node_from_constructor(constructorDeclWithModifierNoNode *constructor_decl_with_modifier_no_node)
{
    methodFieldPropertyNode *method_field_property_node = new methodFieldPropertyNode();
    method_field_property_node->constructor_decl_with_modifier_no_node = constructor_decl_with_modifier_no_node;
    method_field_property_node->destructor_decl_node = nullptr;
    method_field_property_node->field_decl_node = nullptr;
    method_field_property_node->property_decl_node = nullptr;
    method_field_property_node->method_decl_node = nullptr;
    return method_field_property_node;
}

methodFieldPropertyNode *methodFieldPropertyNode::create_method_field_property_node_from_destructor(destructorDeclNode *destructor_decl_node)
{
    methodFieldPropertyNode *method_field_property_node = new methodFieldPropertyNode();
    method_field_property_node->constructor_decl_with_modifier_no_node = nullptr;
    method_field_property_node->destructor_decl_node = destructor_decl_node;
    method_field_property_node->field_decl_node = nullptr;
    method_field_property_node->property_decl_node = nullptr;
    method_field_property_node->method_decl_node = nullptr;
    return method_field_property_node;
}

methodFieldPropertyNode *methodFieldPropertyNode::create_method_field_property_node_from_field(fieldDeclNode *field_decl_node)
{
    methodFieldPropertyNode *method_field_property_node = new methodFieldPropertyNode();
    method_field_property_node->constructor_decl_with_modifier_no_node = nullptr;
    method_field_property_node->destructor_decl_node = nullptr;
    method_field_property_node->field_decl_node = field_decl_node;
    method_field_property_node->property_decl_node = nullptr;
    method_field_property_node->method_decl_node = nullptr;
    return method_field_property_node;
}

methodFieldPropertyNode *methodFieldPropertyNode::create_method_field_property_node_from_property(propertyDeclNode *property_decl_node)
{
    methodFieldPropertyNode *method_field_property_node = new methodFieldPropertyNode();
    method_field_property_node->constructor_decl_with_modifier_no_node = nullptr;
    method_field_property_node->destructor_decl_node = nullptr;
    method_field_property_node->field_decl_node = nullptr;
    method_field_property_node->property_decl_node = property_decl_node;
    method_field_property_node->method_decl_node = nullptr;
    return method_field_property_node;
}

methodFieldPropertyNode *methodFieldPropertyNode::create_method_field_property_node_from_method(methodDeclNode *method_decl_node)
{
    methodFieldPropertyNode *method_field_property_node = new methodFieldPropertyNode();
    method_field_property_node->constructor_decl_with_modifier_no_node = nullptr;
    method_field_property_node->destructor_decl_node = nullptr;
    method_field_property_node->field_decl_node = nullptr;
    method_field_property_node->property_decl_node = nullptr;
    method_field_property_node->method_decl_node = method_decl_node;
    return method_field_property_node;
}

std::list<methodFieldPropertyNode *> *methodFieldPropertyNode::create_method_field_property_node_list_from_method_field_property_node(methodFieldPropertyNode *method_field_property_node)
{
    std::list<methodFieldPropertyNode *> *method_field_property_node_list = new std::list<methodFieldPropertyNode *>();
    method_field_property_node_list->push_back(method_field_property_node);
    return method_field_property_node_list;
}

std::list<methodFieldPropertyNode *> *methodFieldPropertyNode::add_method_field_property_node_to_method_field_property_node_list(std::list<methodFieldPropertyNode *> *method_field_property_node_list, methodFieldPropertyNode *method_field_property_node)
{
    method_field_property_node_list->push_back(method_field_property_node);
    return method_field_property_node_list;
}