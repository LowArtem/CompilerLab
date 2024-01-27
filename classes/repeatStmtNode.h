#pragma once
#include "exprNode.h"
#include "node.h"

class stmtNode;

/**
 * Класс инструкции repeat .. until
 */
class repeatStmtNode : public node
{
public:
    stmtNode *body;
    exprNode *condition;

    repeatStmtNode();

    static repeatStmtNode *create_repeat_stmt_node(stmtNode *body, exprNode *condition);
};