#include <list>
#include "exprNode.h"
#include <string>
#include "varDeclNode.h"
#include "typeSectNode.h"
#include "implementationElementNode.h"
#include "node.h"

using namespace std;

/**
 * Класс секции
 */
class sectionNode : public node
{
public:
    varDeclNode *var_decl;
    typeSectNode *type_sect;
    list<implementationElementNode *> *implementation_element_list;

    sectionNode();

    static sectionNode *create_section_node_from_var_decl(varDeclNode *var_decl);

    static sectionNode *create_section_node_from_type_sect(typeSectNode *type_sect);

    static sectionNode *create_section_node_from_implementation_sect(list<implementationElementNode *> *implementation_element_list);

    static list<sectionNode *> *create_section_node_list_from_section_node(sectionNode *section_node);

    static list<sectionNode *> *add_section_node_to_section_node_list(list<sectionNode *> *section_node_list, sectionNode *section_node);
}