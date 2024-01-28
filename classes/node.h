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

