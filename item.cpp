#include "item.h"
void Item::setAmount(int value)
{
    this->amount = value;
}
int Item::getAmount()
{
    return this->amount;
}

void Item::displayInfo()
{
    std::cout << name << std::endl
              << description << std::endl
              << amount << std::endl;
}