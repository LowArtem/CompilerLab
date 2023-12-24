#include "exprNode.h"
#include "stmtNode.h"
#include "node.h"

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