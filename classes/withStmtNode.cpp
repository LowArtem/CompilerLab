#include "withStmtNode.h"

withStmtNode::withStmtNode()
{
}

withStmtNode *withStmtNode::create_with_stmt_node(std::list<exprNode *> *id_list, stmtNode *body)
{
    withStmtNode *res = new withStmtNode();
    res->id_list = id_list;
    res->body = body;
    return res;
}