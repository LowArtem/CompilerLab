#include "repeatStmtNode.h"

repeatStmtNode::repeatStmtNode()
{
}

repeatStmtNode *repeatStmtNode::create_repeat_stmt_node(list<stmtNode *> *body, exprNode *condition)
{
    repeatStmtNode *res = new repeatStmtNode();
    res->body = body;
    res->condition = condition;
    return res;
}