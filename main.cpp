#include "character.h"
#include "weaponItem.h"

int main()
{
    Character hero = Character(100, 0);

    hero.getInventory().addItem(WeaponItem("Sword", "...", 1, 5));
    hero.useItem(0);
}

/*
Item - сделать абстрактным
use () = 0;

class WeaponItem : Item
class FoodItem : Item

*/
