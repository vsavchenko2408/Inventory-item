#include "../include/item.h"

    Item::Item(std::string name, double price, int quantity) : _name(name), _price(price), _quantity(quantity)
    {

    }

    std::string Item::get_name() const
    {
        return _name;
    }
    double Item::get_price() const
    {
        return _price;
    }
    int Item::get_quantity() const
    {
        return _quantity;
    }
    Item add_item(std::string name, double price,int quantity)
    {
        Item obj = Item(name, price, quantity);
        return obj;
    }