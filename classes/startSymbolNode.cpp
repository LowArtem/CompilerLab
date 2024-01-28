#include "startSymbolNode.h"

startSymbolNode::startSymbolNode()
{
}

startSymbolNode *startSymbolNode::create_start_symbol_node(string *id, stmtBlockNode *stmt_block, list<sectionNode *> *section_node_list)
{
    startSymbolNode *start_symbol_node = new startSymbolNode();
    start_symbol_node->id = id;
    start_symbol_node->stmt_block = stmt_block;
    start_symbol_node->section_node_list = section_node_list;
    return start_symbol_node;
}