#include "literalNode.h"

literalNode::literalNode()
{
}

literalNode *literalNode::create_literal_node_from_int(int value)
{
    literalNode *res = new literalNode();
    res->type = literalType::int_type;
    res->int_value = value;
    return res;
}

literalNode *literalNode::create_literal_node_from_real(double value)
{
    literalNode *res = new literalNode();
    res->type = literalType::real_type;
    res->real_value = value;
    return res;
}

literalNode *literalNode::create_literal_node_from_boolean(bool value)
{
    literalNode *res = new literalNode();
    res->type = literalType::boolean_type;
    res->boolean_value = value;
    return res;
}

literalNode *literalNode::create_literal_node_from_char(char value)
{
    literalNode *res = new literalNode();
    res->type = literalType::char_type;
    res->char_value = value;
    return res;
}