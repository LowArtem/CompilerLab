#include "node.h"
#include <string>

/**
 * Класс объявления заголовка класса
 */
class classDeclHeaderNode : public node
{
public:
    std::string parentId;
    std::string id;

    classDeclHeaderNode();

    static classDeclHeaderNode *create_class_decl_header_node(std::string parentId, std::string id);
};