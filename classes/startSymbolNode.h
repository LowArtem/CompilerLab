#include "node.h"
#include "sectionNode.h"
#include "stmtBlockNode.h"
#include <string>
#include <list>

using namespace std;

class startSymbolNode : public node
{
public:
    string id;
    stmtBlockNode *stmt_block;
    list<sectionNode *> *section_node_list;

    startSymbolNode();

    static startSymbolNode *create_start_symbol_node(string id, stmtBlockNode *stmt_block, list<sectionNode *> *section_node_list);
};