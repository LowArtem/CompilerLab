#include "sectionNode.h"

sectionNode::sectionNode()
{
}

sectionNode *sectionNode::create_section_node_from_var_decl(varDeclNode *var_decl)
{
    sectionNode *res = new sectionNode();
    res->var_decl = var_decl;
    return res;
}

sectionNode *sectionNode::create_section_node_from_type_sect(typeSectNode *type_sect)
{
    sectionNode *res = new sectionNode();
    res->type_sect = type_sect;
    return res;
}

sectionNode *sectionNode::create_section_node_from_implementation_sect(list<implementationElementNode *> *implementation_element_list)
{
    sectionNode *res = new sectionNode();
    res->implementation_element_list = implementation_element_list;
    return res;
}

std::list<sectionNode *> *sectionNode::create_section_node_list_from_section_node(sectionNode *section_node)
{
    std::list<sectionNode *> *res = new std::list<sectionNode *>;
    res->push_back(section_node);
    return res;
}

std::list<sectionNode *> *sectionNode::add_section_node_to_section_node_list(list<sectionNode *> *section_node_list, sectionNode *section_node)
{
    section_node_list->push_back(section_node);
    return section_node_list;
}