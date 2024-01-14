#include "node.h"
#include "accessModifierEnum.h"
#include <list>
#include "methodFieldPropertyNode.h"

using namespace std;

class classElementNode : public node
{
public:
    std::list<methodFieldPropertyNode *> *method_field_property_node_list;
    accessModifier access_modifier_enum;

    classElementNode();

    static classElementNode *create_class_element_node(std::list<methodFieldPropertyNode *> *method_field_property_node_list, accessModifier access_modifier_enum);
    static std::list<classElementNode *> *create_class_element_node_list_from_class_element_node(classElementNode *class_element_node);
    static std::list<classElementNode *> *add_class_element_node_to_class_element_node_list(std::list<classElementNode *> *class_element_node_list, classElementNode *class_element_node);
};