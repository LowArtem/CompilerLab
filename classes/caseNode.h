#include "exprNode.h"
#include "stmtNode.h"
#include <list>
#include "caseElementNode.h"

class caseNode
{
public:
    exprNode *selector_expression;
    std::list<caseElementNode *> *elements;
    stmtNode *else_body;
    int id_node;
    static int max_id;

    static caseNode *create_case_node(exprNode *selector_expression, std::list<caseElementNode *> *elements, stmtNode *else_body);
};
