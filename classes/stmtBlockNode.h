#pragma once
#include <list>
#include "node.h"
#include "stmtNode.h"

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