#include "ifStmtNode.h"

ifStmtNode::ifStmtNode()
{
}

ifStmtNode *ifStmtNode::create_if_stmt_node(exprNode *condition, stmtNode *if_body, stmtNode *else_body)
{
    ifStmtNode *res = new ifStmtNode();
    res->condition = condition;
    res->if_body = if_body;
    res->else_body = else_body;
    return res;
}