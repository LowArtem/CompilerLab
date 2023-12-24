#include "exprNode.h"
#include "stmtNode.h"
#include "node.h"

/**
 * Класс инструкции while .. do
 */
class whileStmtNode : public node
{
public:
    stmtNode *body;
    exprNode *condition;

    whileStmtNode();

    static whileStmtNode *create_while_stmt_node(stmtNode *body, exprNode *condition);
};