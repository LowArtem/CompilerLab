#include "classDeclNode.h"

classDeclNode::classDeclNode()
{
}

classDeclNode *classDeclNode::create_class_decl_node(classDeclHeaderNode *class_decl_header_node, list<classElementNode *> *class_element_node_list)
{
    classDeclNode *class_decl_node = new classDeclNode();
    class_decl_node->classDeclHeader = class_decl_header_node;
    class_decl_node->classElementList = class_element_node_list;
    return class_decl_node;
}

list<classDeclNode *> *classDeclNode::create_class_decl_node_list_from_class_decl_node(classDeclNode *class_decl_node)
{
    list<classDeclNode *> *res = new list<classDeclNode *>();
    res->push_back(class_decl_node);
    return res;
}

list<classDeclNode *> *classDeclNode::add_class_decl_node_to_class_decl_node_list(list<classDeclNode *> *class_decl_node_list, classDeclNode *class_decl_node)
{
    class_decl_node_list->push_back(class_decl_node);
    return class_decl_node_list;
}