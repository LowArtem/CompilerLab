#pragma once
#include <string>
#include "functionElementNode.h"
#include "node.h"

using namespace std;

class constructorDeclNode : public node
{
public:
    string *id;
    std::list<paramListNode *> *param_list_node_list;

    constructorDeclNode();

    static constructorDeclNode *create_constructor_decl_node_with_params(functionElementNode *function_element);
    static constructorDeclNode *create_constructor_decl_node_without_params(string *id);
};