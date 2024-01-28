#include "classDeclHeaderNode.h"

classDeclHeaderNode::classDeclHeaderNode()
{
}

classDeclHeaderNode *classDeclHeaderNode::create_class_decl_header_node(std::string *parentId, std::string *id)
{
    classDeclHeaderNode *res = new classDeclHeaderNode();
    res->parentId = parentId;
    res->id = id;
    return res;
}