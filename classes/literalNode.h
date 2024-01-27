#pragma once
#include "node.h"

/**
 * Перечисление literalType определяет тип литерала
 */
enum literalType
{
    int_type,
    real_type,
    boolean_type,
    char_type
};

/**
 * Класс представляющий литерал (целое, вещественное, логическое, символ)
 */
class literalNode : public node
{
public:
    literalType type;
    int int_value;
    double real_value;
    bool boolean_value;
    char char_value;

    literalNode();

    static literalNode *create_literal_node_from_int(int value);

    static literalNode *create_literal_node_from_real(double value);

    static literalNode *create_literal_node_from_boolean(bool value);

    static literalNode *create_literal_node_from_char(char value);
};