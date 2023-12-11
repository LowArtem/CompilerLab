#include "caseElementNode.h"

caseElementNode::caseElementNode()
{
}

std::list<caseElementNode *> *caseElementNode::create_case_element_list_node(exprNode *condition, stmtNode *body)
{
    caseElementNode *case_element_node = new caseElementNode();
    case_element_node->condition = condition;
    case_element_node->body = body;

    std::list<caseElementNode *> *res = new std::list<caseElementNode *>();
    res->push_back(case_element_node);
    return res;
}

std::list<caseElementNode *> *caseElementNode::add_case_element_to_list_node(std::list<caseElementNode *> *list_node, exprNode *condition, stmtNode *body)
{
    caseElementNode *case_element_node = new caseElementNode();
    case_element_node->condition = condition;
    case_element_node->body = body;

    list_node->push_back(case_element_node);
    return list_node;
}