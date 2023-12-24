#include "whileStmtNode.h"

whileStmtNode::whileStmtNode()
{
}

whileStmtNode *whileStmtNode::create_while_stmt_node(stmtNode *body, exprNode *condition)
{
    whileStmtNode *res = new whileStmtNode();
    res->body = body;
    res->condition = condition;
    return res;
}