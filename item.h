#pragma once
#include <iostream>

class Item
{
private:
    std::string name;
    std::string description;
    int amount;

public:
    Item(std::string name, std::string description, int amount) : name(name), description(description), amount(amount) {}

    Item() : Item("", "", 0) {}

    void setAmount(int value);
    int getAmount();
    void displayInfo();

    virtual void use() = 0;
};