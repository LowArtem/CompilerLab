#include "exprNode.h"
#include "stmtNode.h"
#include <list>
#include "caseElementNode.h"
#include "node.h"

/**
 * Класс инструкции case
 */
class caseNode : public node
{
public:
    exprNode *selector_expression;
    std::list<caseElementNode *> *elements;
    stmtNode *else_body;

    caseNode();

    static caseNode *create_case_node(exprNode *selector_expression, std::list<caseElementNode *> *elements, stmtNode *else_body);
};
