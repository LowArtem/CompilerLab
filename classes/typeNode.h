#pragma once
#include <list>
#include <string>
#include "arrayDimensionNode.h"
#include "node.h"
#include "simpleTypeEnum.h"

using namespace std;

/**
 * Перечисление typeType определеляет тип typeNode
 */
enum typeType
{
    simple_type,
    id_type,
    array_type
};

/**
 * Класс инструкции
 */
class typeNode : public node
{
public:
    typeType type;
    simpleType simple_type;
    string *id;
    list<arrayDimensionNode *> *array_dimension_node_list;
    typeNode *array_type;

    typeNode();

    static typeNode *create_type_node_from_simple_type(simpleType simple_type);

    static typeNode *create_type_node_from_id(string *id);

    static typeNode *create_type_node_from_array_without_dimension(typeNode *array_type);

    static typeNode *create_type_node_from_array_with_dimension(list<arrayDimensionNode *> *array_dimension_node_list, typeNode *array_type);
};
