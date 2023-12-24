#include "node.h"
#include "functionElementNode.h"
#include "varDeclNode.h"
#include "stmtNode.h"
#include "typeNode.h"
#include <string>
#include <list>

/**
 * Класс реализации функции
 */
class functionImplNode : public node
{
public:
    std::string parentId;
    std::string id;
    std::list<paramListNode *> *param_list_node_list;
    std::list<varDeclNode *> *var_decl_node_list;
    stmtNode *stmt_node;
    typeNode *type;

    functionImplNode();

    static functionImplNode *create_function_impl_node_with_params(std::string parentId, functionElementNode *function_element, std::list<varDeclNode *> *var_decl_node_list, typeNode *type, stmtNode *stmt_node);
    static functionImplNode *create_function_impl_node_without_params(std::string parentId, std::string id, std::list<varDeclNode *> *var_decl_node_list, typeNode *type, stmtNode *stmt_node);
}