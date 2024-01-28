#pragma once
#include <list>
#include "exprNode.h"
#include "node.h"
#include "stmtNode.h"

/**
 * Класс элемента инструкции case
 */
class caseElementNode : public node
{
public:
    list<exprNode *> *condition;
    stmtNode *body;

    caseElementNode();

    static std::list<caseElementNode *> *create_case_element_list_node(list<exprNode *> *condition, stmtNode *body);

    static std::list<caseElementNode *> *add_case_element_to_list_node(std::list<caseElementNode *> *list_node, list<exprNode *> *condition, stmtNode *body);
};