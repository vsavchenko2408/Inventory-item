#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include "item.h"

class Inventory
{
    std::vector<Item> _inventory;
    public:
    Inventory();
    Inventory(Item& obj);
    bool add_item(Item& obj);
    void delete_item(std::string& name);
    
};

#endif