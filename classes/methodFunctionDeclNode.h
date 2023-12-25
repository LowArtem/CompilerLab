#include "paramListNode.h"
#include "node.h"
#include <list>
#include <string>
#include "typeNode.h"
#include "functionElementNode.h"

class methodFunctionDeclNode : public node
{
public:
    std::string id;
    std::list<paramListNode *> *param_list_node_list;
    typeNode *type;

    methodFunctionDeclNode();

    static methodFunctionDeclNode *create_method_function_decl_node_with_params(functionElementNode *function_element, typeNode *type);
    static methodFunctionDeclNode *create_method_function_decl_node_without_params(std::string id, typeNode *type);
};