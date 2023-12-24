#include "enumDeclNode.h"

enumDeclNode::enumDeclNode()
{
}

enumDeclNode *enumDeclNode::create_enum_decl_node(string &id, list<enumParamNode *> *param_list)
{
    enumDeclNode *res = new enumDeclNode();
    res->id = id;
    res->param_list = param_list;
    return res;
}

list<enumDeclNode *> *enumDeclNode::create_enum_decl_node_list_from_enum_decl_node(enumDeclNode *enum_decl_node)
{
    list<enumDeclNode *> *res = new list<enumDeclNode *>();
    res->push_back(enum_decl_node);
    return res;
}

list<enumDeclNode *> *enumDeclNode::add_enum_decl_node_to_enum_decl_node_list(list<enumDeclNode *> *enum_decl_node_list, enumDeclNode *enum_decl_node)
{
    enum_decl_node_list->push_back(enum_decl_node);
    return enum_decl_node_list;
}