#include "propertyDeclNode.h"

propertyDeclNode::propertyDeclNode()
{
}

propertyDeclNode *propertyDeclNode::create_property_decl_node(std::string id, typeNode *type, std::string readId, std::string writeId)
{
    propertyDeclNode *node = new propertyDeclNode();
    node->id = id;
    node->type = type;
    node->readId = readId;
    node->writeId = writeId;
    return node;
}