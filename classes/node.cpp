#include "node.h"

int node::max_id = 0;

/**
 * Конструктор (устанавливает уникальный идентификатор узла)
 * @return void
 */
node::node()
{
    id_node = ++node::max_id;
}