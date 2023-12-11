#include "exprNode.h"
#include "stmtNode.h"

class ifStmtNode
{
public:
    exprNode *condition;
    stmtNode *if_body;
    stmtNode *else_body;
    int id_node;
    int max_id;

    static ifStmtNode *create_if_stmt_node(exprNode *condition, stmtNode *if_body, stmtNode *else_body);
};