#include <iostream>
#include "../include/inventory.h"

int main()
{
    Inventory myinv;
    Item it("First", 0.65, 100);
    myinv.add_item(it);
    
}