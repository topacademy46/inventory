#include "inventory.h"

void Inventory::addItem(Item item)
{
    bool cellFound = false;
    for (int i = 0; i < inventory.size(); i++)
    {
        if (inventory[i].isEmpty())
        {
            inventory[i].addItem(item);
            cellFound = true;
            break;
        }
    }
    if (!cellFound)
    {
        std::cout << "Empty cell not found!" << std::endl;
    }
}

void Inventory::displayInventory()
{
    for (int i = 0; i < inventory.size(); i++)
    {
        std::cout << "Cell #" << i + 1 << std::endl;
        inventory[i].displayCell();
        std::cout << std::endl;
    }
}

void Inventory::removeItem(int index)
{
    inventory[index].removeItem();
}
