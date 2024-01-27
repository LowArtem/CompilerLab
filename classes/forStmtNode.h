#pragma once
#include "exprNode.h"
#include "node.h"

class stmtNode;

/**
 * Класс инструкции for .. to (downto)
 */
class forStmtNode : public node
{
public:
    exprNode *id;
    exprNode *from_expr;
    exprNode *to_expr;
    stmtNode *body;
    bool is_reversed;

    forStmtNode();

    static forStmtNode *create_for_stmt_node(exprNode *id, exprNode *from_expr, exprNode *to_expr, stmtNode *body, bool is_reversed);
};