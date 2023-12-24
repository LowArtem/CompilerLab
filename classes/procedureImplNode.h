#include "node.h"
#include "functionElementNode.h"
#include "varDeclNode.h"
#include "stmtNode.h"
#include <string>
#include <list>

/**
 * Класс реализации процедуры
 */
class procedureImplNode : public node
{
public:
    std::string parentId;
    std::string id;
    std::list<paramListNode *> *param_list_node_list;
    std::list<varDeclNode *> *var_decl_node_list;
    stmtNode *stmt_node;

    procedureImplNode();

    static procedureImplNode *create_procedure_impl_node_with_params(std::string parentId, functionElementNode *function_element, std::list<varDeclNode *> *var_decl_node_list, stmtNode *stmt_node);
    static procedureImplNode *create_procedure_impl_node_without_params(std::string parentId, std::string id, std::list<varDeclNode *> *var_decl_node_list, stmtNode *stmt_node);
}