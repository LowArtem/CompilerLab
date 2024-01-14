#include "classElementNode.h"

classElementNode::classElementNode()
{
}

classElementNode *classElementNode::create_class_element_node(std::list<methodFieldPropertyNode *> *method_field_property_node_list, accessModifier access_modifier_enum)
{
    classElementNode *class_element_node = new classElementNode();
    class_element_node->method_field_property_node_list = method_field_property_node_list;
    class_element_node->access_modifier_enum = access_modifier_enum;
    return class_element_node;
}

std::list<classElementNode *> *classElementNode::create_class_element_node_list_from_class_element_node(classElementNode *class_element_node)
{
    std::list<classElementNode *> *class_element_node_list = new std::list<classElementNode *>;
    class_element_node_list->push_back(class_element_node);
    return class_element_node_list;
}

std::list<classElementNode *> *classElementNode::add_class_element_node_to_class_element_node_list(std::list<classElementNode *> *class_element_node_list, classElementNode *class_element_node)
{
    class_element_node_list->push_back(class_element_node);
    return class_element_node_list;
}