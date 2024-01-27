#pragma once
#include <list>
#include "node.h"
#include "varDeclNode.h"

/**
 * Тип листа параметров
 */
enum paramListNodeTypeEnum
{
    general_param,
    reference_param,
    const_param,
    out_param
};

/**
 * Класс листа параметров
 */
class paramListNode : public node
{
private:
    static paramListNode *create_param_list_node(std::list<varDeclNode *> *var_decl_list, paramListNodeTypeEnum param_list_node_type);

public:
    std::list<varDeclNode *> *var_decl_list;
    paramListNodeTypeEnum param_list_node_type;

    paramListNode();
    static std::list<paramListNode *> *create_param_list_node_list(std::list<varDeclNode *> *var_decl_list, paramListNodeTypeEnum param_list_node_type);
    static std::list<paramListNode *> *add_param_list_node_to_param_list_node_list(std::list<paramListNode *> *param_list_node_list, std::list<varDeclNode *> *var_decl_list, paramListNodeTypeEnum param_list_node_type);
};