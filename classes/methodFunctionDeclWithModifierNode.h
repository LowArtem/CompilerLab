#include "node.h"
#include "modifierEnum.h"
#include "functionElementNode.h"
#include "typeNode.h"
#include "methodFunctionDeclNode.h"
#include <list>

class methodFunctionDeclWithModifierNode : public node
{
public:
    methodFunctionDeclNode *functionDeclNode;
    std::list<modifier> *modifier_list;

    methodFunctionDeclWithModifierNode();

    static methodFunctionDeclWithModifierNode *create_method_function_decl_with_modifier_node(methodFunctionDeclNode *functionDeclNode, std::list<modifier> *modifier_list);
};