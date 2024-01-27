#pragma once
#include "exprNode.h"
#include "node.h"

class stmtNode;

/**
 * Класс инструкции with
 */
class withStmtNode : public node
{
public:
    std::list<exprNode *> *id_list;
    stmtNode *body;

    withStmtNode();

    static withStmtNode *create_with_stmt_node(std::list<exprNode *> *id_list, stmtNode *body);
};