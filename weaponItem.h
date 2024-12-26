#pragma once
#include "item.h"

class WeaponItem : public Item
{
private:
    float damage;
    float durability;

public:
    WeaponItem(std::string name, std::string description, int amount, int damage) : Item(name, description, amount), damage(damage), durability(100) {}

    void use() override;
};