#include "implementationElementNode.h"

implementationElementNode::implementationElementNode()
{
}

implementationElementNode *implementationElementNode::create_implementation_element_node_from_constructor_impl(constructorImplNode *constructor_impl_node)
{
    implementationElementNode *res = new implementationElementNode();
    res->type = implementationElementType::constructor_impl_type;
    res->constructor_impl_node = constructor_impl_node;
    return res;
}

implementationElementNode *implementationElementNode::create_implementation_element_node_from_destructor_impl(destructorImplNode *destructor_impl_node)
{
    implementationElementNode *res = new implementationElementNode();
    res->type = implementationElementType::destructor_impl_type;
    res->destructor_impl_node = destructor_impl_node;
    return res;
}

implementationElementNode *implementationElementNode::create_implementation_element_node_from_procedure_impl(procedureImplNode *procedure_impl_node)
{
    implementationElementNode *res = new implementationElementNode();
    res->type = implementationElementType::procedure_impl_type;
    res->procedure_impl_node = procedure_impl_node;
    return res;
}

implementationElementNode *implementationElementNode::create_implementation_element_node_from_function_impl(functionImplNode *function_impl_node)
{
    implementationElementNode *res = new implementationElementNode();
    res->type = implementationElementType::function_impl_type;
    res->function_impl_node = function_impl_node;
    return res;
}

list<implementationElementNode *> *implementationElementNode::create_implementation_element_node_list_from_implementation_element_node(implementationElementNode *implementation_element_node)
{
    list<implementationElementNode *> *res = new list<implementationElementNode *>();
    res->push_back(implementation_element_node);
    return res;
}

list<implementationElementNode *> *implementationElementNode::add_implementation_element_node_to_implementation_element_node_list(list<implementationElementNode *> *implementation_element_node_list, implementationElementNode *implementation_element_node)
{
    implementation_element_node_list->push_back(implementation_element_node);
    return implementation_element_node_list;
}