#include "stmtBlockNode.h"

stmtBlockNode::stmtBlockNode()
{
}

stmtBlockNode *stmtBlockNode::create_stmt_block_node(list<stmtNode *> *stmt_list)
{
    stmtBlockNode *res = new stmtBlockNode();
    res->stmt_list = stmt_list;
    return res;
}