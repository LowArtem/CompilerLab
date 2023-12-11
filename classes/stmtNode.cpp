#include <list>
#include "stmtNode.h"

stmtNode::stmtNode()
{
}

std::list<stmtNode *> *stmtNode::create_stmt_node_list_from_stmt_node(stmtNode *stmt_node)
{
    std::list<stmtNode *> *res = new std::list<stmtNode *>();
    res->push_back(stmt_node);
    return res;
}

std::list<stmtNode *> *stmtNode::add_stmt_node_to_stmt_node_list(std::list<stmtNode *> *stmt_node_list, stmtNode *stmt_node)
{
    stmt_node_list->push_back(stmt_node);
    return stmt_node_list;
}