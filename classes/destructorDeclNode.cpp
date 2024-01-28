#include "destructorDeclNode.h"

destructorDeclNode::destructorDeclNode()
{
}

destructorDeclNode *destructorDeclNode::create_destructor_decl_node(string *id, bool has_override)
{
    destructorDeclNode *node = new destructorDeclNode();
    node->id = id;
    node->has_override = has_override;
    return node;
}