#include "node.h"
#include "typeNode.h"
#include <string>

/**
 * Класс объявления свойства
 */
class propertyDeclNode : public node
{
public:
    std::string id;
    typeNode *type;
    std::string readId;
    std::string writeId;

    propertyDeclNode();

    static propertyDeclNode *create_property_decl_node(std::string id, typeNode *type, std::string readId, std::string writeId);
};