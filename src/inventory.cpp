#include "../include/inventory.h"

    Inventory::Inventory()
    {
        _inventory.reserve(10);
    }
    Inventory::Inventory(Item& obj)
    {
        _inventory.push_back(obj);
    }
    bool Inventory::add_item(Item& obj)
    {
        bool find = false;
        for(auto i : _inventory)
        {
            if(obj.get_name() == i.get_name())
            {
                find = true;
            }
        }
        if(!find)
        {
            _inventory.emplace_back(obj);
            return true;
        }
        else
        {
            return false;
        }
    }
    void Inventory::delete_item(std::string& name)
    {
        int count = 0;
        for(auto it = _inventory.begin(); it != _inventory.end(); ++it)
        {
            count++;
            if(name == _inventory.at(count).get_name())
            {
                _inventory.erase(it);
            }
        }
    }
