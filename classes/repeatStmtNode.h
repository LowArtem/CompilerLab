#include "exprNode.h"
#include "stmtNode.h"
#include "node.h"

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