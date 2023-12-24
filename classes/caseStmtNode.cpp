#include "caseStmtNode.h"

caseStmtNode::caseStmtNode()
{
}

caseStmtNode *caseStmtNode::create_case_node(exprNode *selector_expression, std::list<caseElementNode *> *elements, stmtNode *else_body)
{
    caseStmtNode *res = new caseStmtNode();
    res->selector_expression = selector_expression;
    res->elements = elements;
    res->else_body = else_body;
    return res;
}