#include "character.h"

void Character::useItem(int index)
{
    if (!inv.cellIsEmpty(index))
    {
        inv.useItem(index);
    }
}

Inventory Character::getInventory()
{
    return inv;
}
