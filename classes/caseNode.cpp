#include "caseNode.h"

caseNode::caseNode()
{
}

caseNode *caseNode::create_case_node(exprNode *selector_expression, std::list<caseElementNode *> *elements, stmtNode *else_body)
{
    caseNode *res = new caseNode();
    res->selector_expression = selector_expression;
    res->elements = elements;
    res->else_body = else_body;
    return res;
}