#pragma once
#include <iostream>
#include "inventory.h"
#include "weaponItem.h"

class Character
{
private:
    float health;
    float damage;

    WeaponItem* weaponItem = nullptr;
    Inventory inv;

public:
    Character(float health, float damage) : health(health), damage(damage) {}

    Inventory& getInventory();
    void useItem(int index);
    void applyItems();
};