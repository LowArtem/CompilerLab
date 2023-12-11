#include "exprNode.h"
#include "stmtNode.h"
#include "node.h"

/**
 * Класс инструкции if .. then .. else
 *
 */
class ifStmtNode : public node
{
public:
    exprNode *condition;
    stmtNode *if_body;
    stmtNode *else_body;

    ifStmtNode();

    static ifStmtNode *create_if_stmt_node(exprNode *condition, stmtNode *if_body, stmtNode *else_body);
};