#include "functionImplNode.h"

functionImplNode::functionImplNode()
{
}

functionImplNode *functionImplNode::create_function_impl_node_with_params(std::string parentId, functionElementNode *function_element, std::list<varDeclNode *> *var_decl_node_list, typeNode *type, stmtNode *stmt_node)
{
    functionImplNode *res = new functionImplNode();
    res->parentId = parentId;
    res->id = function_element->id;
    res->param_list_node_list = function_element->param_list_node_list;
    res->var_decl_node_list = var_decl_node_list;
    res->type = type;
    res->stmt_node = stmt_node;
    return res;
}

functionImplNode *functionImplNode::create_function_impl_node_without_params(std::string parentId, std::string id, std::list<varDeclNode *> *var_decl_node_list, typeNode *type, stmtNode *stmt_node)
{
    functionImplNode *res = new functionImplNode();
    res->parentId = parentId;
    res->id = id;
    res->param_list_node_list = nullptr;
    res->var_decl_node_list = var_decl_node_list;
    res->type = type;
    res->stmt_node = stmt_node;
    return res;
}