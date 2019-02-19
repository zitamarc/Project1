//
//  Item.hpp
//  cspc131_spring2019_project1
//
//  Created by Marc Zita on 2/18/19.
//  Copyright © 2019 Marc Zita. All rights reserved.
//

#pragma once
#include <string>
using std::string;

// This is already done for you...
class Item {
public:
    string name;
    int sellIn;
    int quality;
    Item(string, int, int);
};

