enum literalType
{
    int_type,
    real_type,
    boolean_type,
    char_type
};

class literalNode
{
public:
    literalType type;
    int int_value;
    double real_value;
    bool boolean_value;
    char char_value;
    int id_node;
    static int max_id;

    static literalNode *create_literal_node_from_int(int value);

    static literalNode *create_literal_node_from_real(double value);

    static literalNode *create_literal_node_from_boolean(bool value);

    static literalNode *create_literal_node_from_char(char value);
};