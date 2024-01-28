#include "functionElementNode.h"

functionElementNode::functionElementNode()
{
}

functionElementNode *functionElementNode::create_function_element(string *id, std::list<paramListNode *> *param_list_node_list)
{
    functionElementNode *res = new functionElementNode();
    res->id = id;
    res->param_list_node_list = param_list_node_list;
    return res;
}