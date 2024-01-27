#pragma once
#include <list>
#include <string>
#include "exprNode.h"
#include "node.h"

using namespace std;

/**
 * Класс enum_param_list
 */
class enumParamNode : public node
{
public:
    string id;
    exprNode *value;

    enumParamNode();

    static enumParamNode *create_enum_param_node_without_value(string &id);

    static enumParamNode *create_enum_param_node_with_value(string &id, exprNode *value);

    static list<enumParamNode *> *create_enum_param_node_list_from_enum_param_node(enumParamNode *enum_param_node);

    static list<enumParamNode *> *add_enum_param_node_to_enum_param_node_list(list<enumParamNode *> *enum_param_node_list, enumParamNode *enum_param_node);
};