#ifndef ITEM_H
#define ITEM_H
#include <string>
class Item
{
    std::string _name;
    double _price;
    int _quantity;
    public:
    Item() = delete;
    Item(std::string name,  double price,  int quantity);
    std::string get_name() const ;
    double get_price() const;
    int get_quantity() const;
    Item add_item(std::string name, double price,int quantity);
};

#endif