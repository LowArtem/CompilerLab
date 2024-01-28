#include <list>
#include "stmtNode.h"

stmtNode::stmtNode()
{
}

std::list<stmtNode *> *stmtNode::create_stmt_node_list_from_stmt_node(stmtNode *stmt_node)
{
    std::list<stmtNode *> *res = new std::list<stmtNode *>();
    res->push_back(stmt_node);
    return res;
}

std::list<stmtNode *> *stmtNode::add_stmt_node_to_stmt_node_list(std::list<stmtNode *> *stmt_node_list, stmtNode *stmt_node)
{
    stmt_node_list->push_back(stmt_node);
    return stmt_node_list;
}

stmtNode *stmtNode::create_stmt_node_from_assignment(exprNode *left_operand, exprNode *right_operand)
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::assign_type;
    res->left_operand = left_operand;
    res->right_operand = right_operand;
    return res;
}

stmtNode *stmtNode::create_stmt_node_from_function_call(string *id, list<exprNode *> *params)
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::function_call_type;
    res->id = id;
    res->params = params;
    return res;
}

stmtNode *stmtNode::create_stmt_node_from_inherited_call()
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::inherited_type;
    return res;
}

stmtNode *stmtNode::create_stmt_node_from_stmt_block(stmtBlockNode *stmt_block)
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::stmt_block_type;
    res->stmt_block = stmt_block;
    return res;
}

stmtNode *stmtNode::create_stmt_node_from_if_stmt(ifStmtNode *if_stmt)
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::if_type;
    res->if_stmt = if_stmt;
    return res;
}

stmtNode *stmtNode::create_stmt_node_from_case_stmt(caseStmtNode *case_stmt)
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::case_type;
    res->case_stmt = case_stmt;
    return res;
}

stmtNode *stmtNode::create_stmt_node_from_repeat_stmt(repeatStmtNode *repeat_stmt)
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::repeat_type;
    res->repeat_stmt = repeat_stmt;
    return res;
}

stmtNode *stmtNode::create_stmt_node_from_while_stmt(whileStmtNode *while_stmt)
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::while_type;
    res->while_stmt = while_stmt;
    return res;
}

stmtNode *stmtNode::create_stmt_node_from_for_stmt(forStmtNode *for_stmt)
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::for_type;
    res->for_stmt = for_stmt;
    return res;
}

stmtNode *stmtNode::create_stmt_node_from_with_stmt(withStmtNode *with_stmt)
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::with_type;
    res->with_stmt = with_stmt;
    return res;
}

stmtNode *stmtNode::create_stmt_node_from_empty()
{
    stmtNode *res = new stmtNode();
    res->type = stmtType::empty_type;
    return res;
}