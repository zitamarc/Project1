//
//  GildedRose.hpp
//  cspc131_spring2019_project1
//
//  Created by Marc Zita on 2/18/19.
//  Copyright © 2019 Marc Zita. All rights reserved.
//

#pragma once

#include <vector>
#include "Item.hpp"
using std::vector;

// This class is incomplete...
class GildedRose {
private:
    // Add something to hold at least 10 items
    vector<Item>items;
    
public:
    GildedRose();
    ~GildedRose();
    
    size_t size() const;
    Item& get(size_t);
    void add(const Item&);
    
    Item& operator[](size_t);
};
