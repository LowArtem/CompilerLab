#pragma once
#include <list>
#include "caseElementNode.h"
#include "exprNode.h"
#include "node.h"
#include "stmtNode.h"

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
