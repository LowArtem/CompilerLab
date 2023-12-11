#include "exprNode.h"
#include "stmtNode.h"

class repeatStmtNode
{
public:
    stmtNode *body;
    exprNode *condition;
    int id_node;
    int max_id;

    static repeatStmtNode *create_repeat_stmt_node(stmtNode *body, exprNode *condition);
};