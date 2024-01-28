#pragma once
#include <list>
#include <string>
#include "node.h"
#include "paramListNode.h"

/**
 * Класс параметров функции
 */
class functionElementNode : public node
{
public:
    string *id;
    std::list<paramListNode *> *param_list_node_list;

    functionElementNode();

    static functionElementNode *create_function_element(string *id, std::list<paramListNode *> *param_list_node_list);
};