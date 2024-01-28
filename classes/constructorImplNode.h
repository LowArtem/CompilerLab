#pragma once
#include <string>
#include "functionElementNode.h"
#include "node.h"
#include "stmtNode.h"

using namespace std;

class constructorImplNode : public node
{
public:
    string *id;
    string *parent_id;
    functionElementNode *function_element;
    bool has_override;
    stmtNode *stmt_node;

    constructorImplNode();

    static constructorImplNode *create_constructor_impl_node(string *id, string *parent_id, functionElementNode *function_element, bool has_override, stmtNode *stmt_node);
};