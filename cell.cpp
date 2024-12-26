#include "cell.h"

void Cell::addItem(Item &item)
{
    *this->item = item;
}
void Cell::removeItem()
{
    this->item->setAmount(0);
}
void Cell::displayCell()
{
    if (!this->isEmpty())
    {
        item->displayInfo();
    }
}

bool Cell::isEmpty()
{
    if (item->getAmount() > 0)
    {
        return false;
    }
    return true;
}

void Cell::useItem()
{
    item->use();
}