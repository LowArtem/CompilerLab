#pragma once
#include <list>
#include "exprNode.h"
#include "node.h"

class stmtNode;
class caseElementNode;

/**
 * Класс инструкции case
 */
class caseStmtNode : public node
{
public:
    exprNode *selector_expression;
    std::list<caseElementNode *> *elements;
    stmtNode *else_body;

    caseStmtNode();

    static caseStmtNode *create_case_node(exprNode *selector_expression, std::list<caseElementNode *> *elements, stmtNode *else_body);
};
