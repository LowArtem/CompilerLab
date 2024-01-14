#include "constructorImplNode.h"

constructorImplNode::constructorImplNode()
{
}

constructorImplNode *constructorImplNode::create_constructor_impl_node(string id, string parent_id, functionElementNode *function_element, bool has_override, stmtNode *stmt_node)
{
    constructorImplNode *res = new constructorImplNode();
    res->id = id;
    res->parent_id = parent_id;
    res->function_element = function_element;
    res->has_override = has_override;
    res->stmt_node = stmt_node;
    return res;
}