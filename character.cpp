#include "character.h"

void Character::useItem(int index)
{
    if (!inv.cellIsEmpty(index))
    {
        inv.useItem(index);
        applyItems();
    }
}

void Character::applyItems()
{
    if (weaponItem != nullptr) {
        //setDamage(weaponItem.use());
    }
}

Inventory& Character::getInventory()
{
    return inv;
}
