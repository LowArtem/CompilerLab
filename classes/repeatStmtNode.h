#pragma once
#include "exprNode.h"
#include "node.h"
#include <list>

using namespace std;

class stmtNode;

/**
 * Класс инструкции repeat .. until
 */
class repeatStmtNode : public node
{
public:
    list<stmtNode *> *body;
    exprNode *condition;

    repeatStmtNode();

    static repeatStmtNode *create_repeat_stmt_node(list<stmtNode *> *body, exprNode *condition);
};