#pragma once
#include "exprNode.h"
#include "node.h"
#include "stmtNode.h"
#include <list>

using namespace std;

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