#pragma once
#include <list>
#include <string>
#include "enumParamNode.h"
#include "node.h"

using namespace std;

/**
 * Класс enum_decl
 */
class enumDeclNode : public node
{
public:
    string id;
    list<enumParamNode *> *param_list;

    enumDeclNode();

    static enumDeclNode *create_enum_decl_node(string &id, list<enumParamNode *> *param_list);

    static list<enumDeclNode *> *create_enum_decl_node_list_from_enum_decl_node(enumDeclNode *enum_decl_node);

    static list<enumDeclNode *> *add_enum_decl_node_to_enum_decl_node_list(list<enumDeclNode *> *enum_decl_node_list, enumDeclNode *enum_decl_node);
};