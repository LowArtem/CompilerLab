#include <list>
#include "literalNode.h"
#include "node.h"

using namespace std;

/**
 * Класс инструкции arrayDimension
 */
class arrayDimensionNode : public node
{
public:
    literalNode *left_operand;
    literalNode *right_operand;

    arrayDimensionNode();

    static arrayDimensionNode *create_array_dimension_node(literalNode *left_operand, literalNode *right_operand);

    static list<arrayDimensionNode *> *create_array_dimension_node_list_from_array_dimension_node(arrayDimensionNode *array_dimension_node);

    static list<arrayDimensionNode *> *add_array_dimension_node_to_array_dimension_node_list(std::list<arrayDimensionNode *> *array_dimension_node_list, arrayDimensionNode *array_dimension_node);
};