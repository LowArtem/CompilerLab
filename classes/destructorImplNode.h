#include "node.h"
#include <string>
#include "stmtNode.h"

using namespace std;

class destructorImplNode : public node
{
public:
    string id;
    string parent_id;
    stmtNode *stmt_node;
    bool has_override;

    destructorImplNode();

    destructorImplNode *create_destructor_impl_node(string id, string parent_id, stmtNode *stmt_node, bool has_override);
};