#include "typeNode.h"

typeNode::typeNode() {
}

typeNode *typeNode::create_type_node_from_simple_type(simpleType simple_type)
{
    typeNode *type_node = new typeNode();
    type_node->type = typeType::simple_type;
    type_node->simple_type = simple_type;
    return type_node;
}

typeNode *typeNode::create_type_node_from_id(string *id)
{
    typeNode *type_node = new typeNode();
    type_node->type = typeType::id_type;
    type_node->id = id;
    return type_node;
}

typeNode *typeNode::create_type_node_from_array_without_dimension(typeNode *array_type)
{
    typeNode *type_node = new typeNode();
    type_node->type = typeType::array_type;
    type_node->array_type = array_type;
    return type_node;
}

typeNode *typeNode::create_type_node_from_array_with_dimension(list<arrayDimensionNode *> *array_dimension_node_list, typeNode *array_type)
{
    typeNode *type_node = new typeNode();
    type_node->type = typeType::array_type;
    type_node->array_dimension_node_list = array_dimension_node_list;
    type_node->array_type = array_type;
    return type_node;
}