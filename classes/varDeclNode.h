#include "typeNode.h"
#include "exprNode.h"
#include "node.h"
#include <list>

class varDeclNode : public node
{
public:
    typeNode *type;
    exprNode *expr;
    std::list<exprNode *> *id_list;

    varDeclNode();

    static varDeclNode *create_var_decl_node(std::list<exprNode *> *id_list, typeNode *type, exprNode *expr);
    static std::list<varDeclNode *> *create_var_decl_node_list_from_var_decl_node(varDeclNode *var_decl_node);
    static std::list<varDeclNode *> *add_var_decl_node_to_var_decl_node_list(std::list<varDeclNode *> *var_decl_node_list, varDeclNode *var_decl_node);
};