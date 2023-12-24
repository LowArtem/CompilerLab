#include "varDeclNode.h"

varDeclNode::varDeclNode()
{
}

varDeclNode *varDeclNode::create_var_decl_node(std::list<exprNode *> *id_list, typeNode *type, exprNode *expr)
{
    varDeclNode *res = new varDeclNode();
    res->id_list = id_list;
    res->type = type;
    res->expr = expr;
    return res;
}

std::list<varDeclNode *> *varDeclNode::create_var_decl_node_list_from_var_decl_node(varDeclNode *var_decl_node)
{
    std::list<varDeclNode *> *res = new std::list<varDeclNode *>;
    res->push_back(var_decl_node);
    return res;
}

std::list<varDeclNode *> *varDeclNode::add_var_decl_node_to_var_decl_node_list(std::list<varDeclNode *> *var_decl_node_list, varDeclNode *var_decl_node)
{
    var_decl_node_list->push_back(var_decl_node);
    return var_decl_node_list;
}