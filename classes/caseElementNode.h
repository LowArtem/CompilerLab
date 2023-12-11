#include "exprNode.h"
#include "stmtNode.h"
#include <list>

class caseElementNode
{
public:
    exprNode *condition;
    stmtNode *body;
    int id_node;
    static int max_id;

    static std::list<caseElementNode *> *create_case_element_list_node(exprNode *condition, stmtNode *body);

    static std::list<caseElementNode *> *add_case_element_to_list_node(std::list<caseElementNode *> *list_node, exprNode *condition, stmtNode *body);
};