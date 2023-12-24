#include <list>
#include <string>
#include "node.h"
#include "classDeclNode.h"
#include "enumDeclNode.h"

using namespace std;

/**
 * Перечисление typeSectType определеляет тип typeSectNode
 */
enum typeSectType
{
    class_decl_type,
    enum_decl_type
};

/**
 * Класс type_sect
 */
class typeSectNode : public node
{
public:
    typeSectType type;
    list<classDeclNode *> *class_decl_node_list;
    list<enumDeclNode *> *enum_decl_node_list;

    typeSectNode();

    static typeSectNode *create_type_sect_node_from_class_decl_list(list<classDeclNode *> *class_decl_node_list);

    static typeSectNode *create_type_sect_node_from_enum_decl_list(list<enumDeclNode *> *enum_decl_node_list);
};