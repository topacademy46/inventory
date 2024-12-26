#include "item.h"
#include "inventory.h"

int main()
{
    Inventory inv;
    inv.displayInventory();
    inv.addItem(Item("Apple", "Just an apple", 1));
    inv.addItem(Item("Rusty Sword", "...", 1));
    inv.displayInventory();
    inv.removeItem(1);
    inv.displayInventory();
}

/*
Item - сделать абстрактным
use () = 0;

class WeaponItem : Item
class FoodItem : Item

*/
