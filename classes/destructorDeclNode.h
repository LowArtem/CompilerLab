#include <string>
#include "node.h"

using namespace std;

class destructorDeclNode : public node
{
public:
    string id;
    bool has_override;

    destructorDeclNode();

    destructorDeclNode *create_destructor_decl_node(string id, bool has_override);
};