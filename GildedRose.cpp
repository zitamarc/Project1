//
//  GildedRose.cpp
//  cspc131_spring2019_project1
//
//  Created by Marc Zita on 2/18/19.
//  Copyright © 2019 Marc Zita. All rights reserved.
//

#include "GildedRose.hpp"

GildedRose::GildedRose(){  }
//Parameterized constructor
GildedRose::~GildedRose() {    }

//items in vector
size_t GildedRose::size() const {
    return items.size();
}

//access item details using the operator []
Item& GildedRose::operator[](size_t i) {
    return items.at(i);
}

//Get item details of the given index
Item& GildedRose::get(size_t i) {
    return items.at(i);
}
//this is done to add an item
void GildedRose::add(const Item& item) {
    items.push_back(item);
}


