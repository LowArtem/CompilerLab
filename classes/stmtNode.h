#include <list>
#include "exprNode.h"

using namespace std;

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

class stmtNode
{
public:
    stmtType type;
    exprNode *left_operand;
    exprNode *right_operand;
    string id;
    list<exprNode *> *params;
    int id_node;
    static int max_id;

    static std::list<stmtNode *> *create_stmt_node_list_from_stmt_node(stmtNode *stmt_node);

    static std::list<stmtNode *> *add_stmt_node_to_stmt_node_list(std::list<stmtNode *> *stmt_node_list, stmtNode *stmt_node);
};