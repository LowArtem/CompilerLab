#include <list>
#include "exprNode.h"
#include "node.h"

using namespace std;

/**
 * Перечисление stmtType определеляет тип выражения
 */
enum stmtType
{
    assign_type,
    function_call_type,
    inherited_type,
    stmt_block_type,
    if_type,
    case_type,
    repeat_type,
    while_type,
    for_type,
    with_type
};

/**
 * Класс инструкции
 */
class stmtNode : public node
{
public:
    stmtType type;
    exprNode *left_operand;
    exprNode *right_operand;
    string id;
    list<exprNode *> *params;

    stmtNode();

    static list<stmtNode *> *create_stmt_node_list_from_stmt_node(stmtNode *stmt_node);

    static list<stmtNode *> *add_stmt_node_to_stmt_node_list(std::list<stmtNode *> *stmt_node_list, stmtNode *stmt_node);
};