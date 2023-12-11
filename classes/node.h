#pragma once

/**
 * Базовый класс узла дерева
 */
class node
{
private:
    static int max_id;

public:
    /**
     * Уникальный идентификатор узла
     */
    int id_node;

    node();
};

/**
 * Конструктор (устанавливает уникальный идентификатор узла)
 * @return void
 */
inline node::node()
{
    id_node = ++max_id;
}
