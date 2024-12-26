#pragma once
#include "item.h"

class Cell
{
private:
    Item *item;

public:
    Cell(Item *item) : item(item) {}
    Cell() : Cell(nullptr) {}

    void addItem(Item* item);
    void removeItem();
    void displayCell();
    bool isEmpty();

    void useItem();
};