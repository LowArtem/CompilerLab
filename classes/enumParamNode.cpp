#include <list>
#include "enumParamNode.h"

enumParamNode::enumParamNode()
{
}

enumParamNode *enumParamNode::create_enum_param_node_without_value(string *id)
{
    enumParamNode *res = new enumParamNode();
    res->id = id;
    return res;
}

enumParamNode *enumParamNode::create_enum_param_node_with_value(string *id, exprNode *value)
{
    enumParamNode *res = new enumParamNode();
    res->id = id;
    res->value = value;
    return res;
}

list<enumParamNode *> *enumParamNode::create_enum_param_node_list_from_enum_param_node(enumParamNode *enum_param_node)
{
    list<enumParamNode *> *res = new list<enumParamNode *>();
    res->push_back(enum_param_node);
    return res;
}

list<enumParamNode *> *enumParamNode::add_enum_param_node_to_enum_param_node_list(std::list<enumParamNode *> *enum_param_node_list, enumParamNode *enum_param_node)
{
    enum_param_node_list->push_back(enum_param_node);
    return enum_param_node_list;
}