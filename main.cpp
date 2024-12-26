#include "character.h"
#include "weaponItem.h"

int main()
{
    Character hero = Character(100, 0);

    WeaponItem* item1 = new WeaponItem("Sword", "...", 1, 5);
    hero.getInventory().addItem(item1);
    hero.getInventory().displayInventory();
    hero.useItem(0);
}