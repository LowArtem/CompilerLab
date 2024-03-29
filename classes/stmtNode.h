#pragma once
#include <list>
#include <string>
#include "caseStmtNode.h"
#include "exprNode.h"
#include "forStmtNode.h"
#include "ifStmtNode.h"
#include "node.h"
#include "repeatStmtNode.h"
#include "stmtBlockNode.h"
#include "whileStmtNode.h"
#include "withStmtNode.h"

using namespace std;

/**
 * Перечисление stmtType определеляет тип инструкции
 */
enum stmtType
{
    assign_type,
    function_call_type,
    method_function_call_type_stmt,
    inherited_type,
    stmt_block_type,
    if_type,
    case_type,
    repeat_type,
    while_type,
    for_type,
    with_type,
    empty_type
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
    string *id;
    list<exprNode *> *params;
    stmtBlockNode *stmt_block;
    ifStmtNode *if_stmt;
    caseStmtNode *case_stmt;
    repeatStmtNode *repeat_stmt;
    whileStmtNode *while_stmt;
    forStmtNode *for_stmt;
    withStmtNode *with_stmt;
    exprNode *parent;

    stmtNode();

    static list<stmtNode *> *create_stmt_node_list_from_stmt_node(stmtNode *stmt_node);

    static list<stmtNode *> *add_stmt_node_to_stmt_node_list(std::list<stmtNode *> *stmt_node_list, stmtNode *stmt_node);

    static stmtNode *create_stmt_node_from_assignment(exprNode *left_operand, exprNode *right_operand);

    static stmtNode *create_stmt_node_from_function_call(string *id, list<exprNode *> *params);

    static stmtNode *create_stmt_node_from_method_function_call(exprNode *parent, string *id, list<exprNode *> *params);

    static stmtNode *create_stmt_node_from_inherited_call();

    static stmtNode *create_stmt_node_from_stmt_block(stmtBlockNode *stmt_block);

    static stmtNode *create_stmt_node_from_if_stmt(ifStmtNode *if_stmt);

    static stmtNode *create_stmt_node_from_case_stmt(caseStmtNode *case_stmt);

    static stmtNode *create_stmt_node_from_repeat_stmt(repeatStmtNode *repeat_stmt);

    static stmtNode *create_stmt_node_from_while_stmt(whileStmtNode *while_stmt);

    static stmtNode *create_stmt_node_from_for_stmt(forStmtNode *for_stmt);

    static stmtNode *create_stmt_node_from_with_stmt(withStmtNode *with_stmt);

    static stmtNode *create_stmt_node_from_empty();
};