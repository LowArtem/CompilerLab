#include "paramListNode.h"

paramListNode::paramListNode()
{
}

paramListNode *paramListNode::create_param_list_node(std::list<varDeclNode *> *var_decl_list, paramListNodeTypeEnum param_list_node_type)
{
    paramListNode *res = new paramListNode();
    res->var_decl_list = var_decl_list;
    res->param_list_node_type = param_list_node_type;
    return res;
}

std::list<paramListNode *> *paramListNode::create_param_list_node_list(std::list<varDeclNode *> *var_decl_list, paramListNodeTypeEnum param_list_node_type)
{
    paramListNode *param_list_node = create_param_list_node(var_decl_list, param_list_node_type);

    std::list<paramListNode *> *res = new std::list<paramListNode *>();
    res->push_back(param_list_node);
    return res;
}

std::list<paramListNode *> *paramListNode::add_param_list_node_to_param_list_node_list(std::list<paramListNode *> *param_list_node_list, std::list<varDeclNode *> *var_decl_list, paramListNodeTypeEnum param_list_node_type)
{
    paramListNode *param_list_node = create_param_list_node(var_decl_list, param_list_node_type);

    param_list_node_list->push_back(param_list_node);
    return param_list_node_list;
}