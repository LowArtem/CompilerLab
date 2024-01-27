#pragma once
#include "constructorImplNode.h"
#include "destructorImplNode.h"
#include "procedureImplNode.h"
#include "functionImplNode.h"
#include "node.h"
#include <list>

using namespace std;

/**
 * Перечисление implementationElementType определеляет тип implementationElementNode
 */
enum implementationElementType
{
    constructor_impl_type,
    destructor_impl_type,
    procedure_impl_type,
    function_impl_type
};

/**
 * Класс implementation_element
 */
class implementationElementNode : public node
{
public:
    implementationElementType type;
    constructorImplNode *constructor_impl_node;
    destructorImplNode *destructor_impl_node;
    procedureImplNode *procedure_impl_node;
    functionImplNode *function_impl_node;

    implementationElementNode();

    static implementationElementNode *create_implementation_element_node_from_constructor_impl(constructorImplNode *constructor_impl_node);

    static implementationElementNode *create_implementation_element_node_from_destructor_impl(destructorImplNode *destructor_impl_node);

    static implementationElementNode *create_implementation_element_node_from_procedure_impl(procedureImplNode *procedure_impl_node);

    static implementationElementNode *create_implementation_element_node_from_function_impl(functionImplNode *function_impl_node);

    static list<implementationElementNode *> *create_implementation_element_node_list_from_implementation_element_node(implementationElementNode *implementation_element_node);

    static list<implementationElementNode *> *add_implementation_element_node_to_implementation_element_node_list(list<implementationElementNode *> *implementation_element_node_list, implementationElementNode *implementation_element_node);
};