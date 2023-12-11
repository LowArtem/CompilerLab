#include <list>
#include "stmtNode.h"

using namespace std;

class stmtBlockNode
{
public:
    list<stmtNode *> *stmt_list;
    int id_node;
    int max_id;

    static stmtBlockNode *create_stmt_block_node(list<stmtNode *> *stmt_list);
};