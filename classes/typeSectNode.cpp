#include "typeSectNode.h"

typeSectNode::typeSectNode()
{
}

typeSectNode *typeSectNode::create_type_sect_node_from_class_decl_list(list<classDeclNode *> *class_decl_node_list)
{
    typeSectNode *res = new typeSectNode();
    res->type = typeSectType::class_decl_type;
    res->class_decl_node_list = class_decl_node_list;
    return res;
}

typeSectNode *typeSectNode::create_type_sect_node_from_enum_decl_list(list<enumDeclNode *> *enum_decl_node_list)
{
    typeSectNode *res = new typeSectNode();
    res->type = typeSectType::enum_decl_type;
    res->enum_decl_node_list = enum_decl_node_list;
    return res;
}