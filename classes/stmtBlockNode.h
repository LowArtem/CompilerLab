#include <list>
#include "stmtNode.h"
#include "node.h"

using namespace std;

/**
 * Класс представляющий блок инструкций
 */
class stmtBlockNode : public node
{
public:
    list<stmtNode *> *stmt_list;

    stmtBlockNode();

    static stmtBlockNode *create_stmt_block_node(list<stmtNode *> *stmt_list);
};