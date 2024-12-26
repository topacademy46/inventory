#pragma once
#include <iostream>
#include <vector>
#include "cell.h"
#include "item.h"

class Inventory
{
private:
    std::vector<Cell> inventory;
    int size;

public:
    Inventory(int size)
    {
        for (int i = 0; i < size; i++)
        {
            inventory.push_back(Cell());
        }
    }
    Inventory() : Inventory(6) {}

    void addItem(Item &item);
    void removeItem(int index);
    void displayInventory();
    bool cellIsEmpty(int index);
    void useItem(int index);
};
