//
//  fjm.h
//  fruit juice machine
//
//  Created by Ibrahım Halıl Sahın on 22.07.2020.
//  Copyright © 2020 ahmet naci sahin. All rights reserved.
//

#ifndef fjm_h
#define fjm_h
include "fjm.cpp"

cashregister::cashregister()
{
    cashonhand = 500;
}

cashregister::cashregister(int cashin)
{
    if(amountin >= 0)
    {
    cashonhand = cashin
    }
    else
    {
        cashregister();
    }
   
}

int cashregister::getcurrentbalance()
{
    return cashonhand;
}

void cashregister::acceptamount(int amountin)
{
    cashonhand =+ amountin;
}

dispensertype::dispensertype()
{
    nooffitems = 50;
    cost = 50;
}

dispensertype::dispensertype(int no_ofitems, int costin)
{
    if(no_ofitems >= 0)
    {
    noofitems = no_ofitems;
    }
    else
    {
        noofitems = 50;
    }
    if (cost >= 0) {
        cost = costin;
    } else {
        costin = 50;
    }
    
}

int dispensertype::getnumberofitems()
{
    return numberofitems;
}

int dispensertype::getcost() 
{
    return cost;
}

void dispensertype::makesale()
{
    noofitems--;
}
#endif /* fjm_h */
