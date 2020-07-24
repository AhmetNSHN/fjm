//
//  fjm.cpp
//  fruit juice machine
//
//  Created by Ibrahım Halıl Sahın on 22.07.2020.
//  Copyright © 2020 ahmet naci sahin. All rights reserved.
//


class cashregister
{
private:
    int cashonhand;
public:
    cashregister();
    cashregister(int cashin);
    int getcurrentbalance();
    void acceptamount(int amountin);
};

class dispensertype
{
private:
    int noofitems;
    int cost;
public:
    dispensertype();
    dispensertype(int setnoofitems, int cost);
    int getnoofitems();
    int getcost();
    void makesale();
};

