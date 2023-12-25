#include "classDeclNode.h"

classDeclNode::classDeclNode()
{
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