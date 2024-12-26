#pragma once
#include <iostream>
#include "inventory.h"

class Character
{
private:
    float health;
    float damage;

    Inventory inv;

public:
    Character(float health, float damage) : health(health), damage(damage) {}

    Inventory getInventory();
    void useItem(int index);
};