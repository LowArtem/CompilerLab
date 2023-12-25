#include "node.h"
#include <list>

using namespace std;

/**
 * Класс class_decl
 */
class classDeclNode : public node
{
public:
    classDeclNode();

    static list<classDeclNode *> *create_class_decl_node_list_from_class_decl_node(classDeclNode *class_decl_node);

    static list<classDeclNode *> *add_class_decl_node_to_class_decl_node_list(list<classDeclNode *> *class_decl_node_list, classDeclNode *class_decl_node);
};