#include "forStmtNode.h"

forStmtNode::forStmtNode()
{
}

forStmtNode *forStmtNode::create_for_stmt_node(exprNode *id, exprNode *from_expr, exprNode *to_expr, stmtNode *body, bool is_reversed)
{
    forStmtNode *res = new forStmtNode();
    res->id = id;
    res->from_expr = from_expr;
    res->to_expr = to_expr;
    res->body = body;
    res->is_reversed = is_reversed;
    return res;
}