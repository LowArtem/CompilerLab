#include "exprNode.h"
#include "stmtNode.h"
#include "node.h"
#include <list>

/**
 * Класс элемента инструкции case
 */
class caseElementNode : public node
{
public:
    exprNode *condition;
    stmtNode *body;

    caseElementNode();

    static std::list<caseElementNode *> *create_case_element_list_node(exprNode *condition, stmtNode *body);

    static std::list<caseElementNode *> *add_case_element_to_list_node(std::list<caseElementNode *> *list_node, exprNode *condition, stmtNode *body);
};