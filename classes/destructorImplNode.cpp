#include "destructorImplNode.h"

destructorImplNode::destructorImplNode()
{
}

destructorImplNode *destructorImplNode::create_destructor_impl_node(string *id, string *parent_id, stmtNode *stmt_node, bool has_override)
{
    destructorImplNode *res = new destructorImplNode();
    res->id = id;
    res->parent_id = parent_id;
    res->stmt_node = stmt_node;
    res->has_override = has_override;
    return res;
}