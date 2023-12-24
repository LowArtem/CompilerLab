#include "arrayDimensionNode.h"

arrayDimensionNode::arrayDimensionNode()
{
}

arrayDimensionNode *arrayDimensionNode::create_array_dimension_node(literalNode *left_operand, literalNode *right_operand)
{
    arrayDimensionNode *res = new arrayDimensionNode();
    res->left_operand = left_operand;
    res->right_operand = right_operand;
    return res;
}

list<arrayDimensionNode *> *arrayDimensionNode::create_array_dimension_node_list_from_array_dimension_node(arrayDimensionNode *array_dimension_node)
{
    list<arrayDimensionNode *> *res = new list<arrayDimensionNode *>();
    res->push_back(array_dimension_node);
    return res;
}

list<arrayDimensionNode *> *arrayDimensionNode::add_array_dimension_node_to_array_dimension_node_list(std::list<arrayDimensionNode *> *array_dimension_node_list, arrayDimensionNode *array_dimension_node)
{
    array_dimension_node_list->push_back(array_dimension_node);
    return array_dimension_node_list;
}