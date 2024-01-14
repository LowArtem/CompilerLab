#include "node.h"
#include <list>
#include "classDeclHeaderNode.h"
#include "classElementNode.h"

using namespace std;

/**
 * Класс class_decl
 */
class classDeclNode : public node
{
public:
    classDeclHeaderNode *classDeclHeader;
    std::list<classElementNode *> *classElementList;

    classDeclNode();

    static classDeclNode *create_class_decl_node(classDeclHeaderNode *class_decl_header_node, list<classElementNode *> *class_element_node_list);

    static list<classDeclNode *> *create_class_decl_node_list_from_class_decl_node(classDeclNode *class_decl_node);
    static list<classDeclNode *> *add_class_decl_node_to_class_decl_node_list(list<classDeclNode *> *class_decl_node_list, classDeclNode *class_decl_node);
};