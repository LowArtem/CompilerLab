#include "sectionNode.h"

sectionNode::sectionNode()
{
}

sectionNode *sectionNode::create_section_node_from_var_decl(list<varDeclNode *> *var_decl_list)
{
    sectionNode *res = new sectionNode();
    res->type = sectionType::var_decl_sect;
    res->var_decl_list = var_decl_list;
    return res;
}

sectionNode *sectionNode::create_section_node_from_type_sect(typeSectNode *type_sect)
{
    sectionNode *res = new sectionNode();
    res->type = sectionType::type_sect;
    res->type_sect = type_sect;
    return res;
}

sectionNode *sectionNode::create_section_node_from_implementation_sect(list<implementationElementNode *> *implementation_element_list)
{
    sectionNode *res = new sectionNode();
    res->type = sectionType::implementation_sect;
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