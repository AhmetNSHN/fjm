//
//  main.cpp
//  fruit juice machine
//
//  Created by Ibrahım Halıl Sahın on 22.07.2020.
//  Copyright © 2020 ahmet naci sahin. All rights reserved.
//
#include "fjm.cpp"
#include <iostream>
using namespace std;

void showselection()
{
cout << "*** Welcome to Shelly's Fruit Juice Shop ***" << endl; cout << "To select an item, enter " << endl;
cout << "1 for apple juice" << endl;
cout << "2 for orange juice" << endl;
cout << "3 for mango lassi" << endl;
cout << "4 for fruit punch" << endl;
cout << "9 to exit" << endl;
}

void sellproduct(dispensertype &product, cashregister &pcounter)
{
    int amount,amount2;
    if(product.getnoofitems() > 0)
    {
        cout<< "please deposit " << product.getcost() << " cents " << endl;
        cin >> amount;
        if(amount < product.getcost())
        {
            cout << "Please deposit another "
            << product.getcost()- amount << " cents" << endl;
            cin >> amount2;
            amount = amount + amount2;
        }
        if(amount >= product.getcost())
        {
            pcounter.acceptamount(amount);
            product.makesale();
            cout << "Collect your item at the bottom and enjoy."
            << endl;
        }
        else
            cout << "The amount is not enough. "
            << "Collect what you deposited." << endl;
            cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl << endl;
    }
    else
    cout << "Sorry, this item is sold out." << endl;
}

int main(int argc, const char * argv[]) {
    cashregister counter;
    dispensertype appleJuice(100, 50);
    dispensertype orangeJuice(100, 65);
    dispensertype mangoLassi(75, 45);
    dispensertype fruitPunch(100, 85);
    int choice;
    showselection();
    cin >> choice;
    while(choice != 9)
    {
        switch(choice)
        {
                case 1:
                sellproduct(appleJuice, counter);
                break;
                case 2:
                sellproduct(orangeJuice, counter); break;
                case 3:
                sellproduct(mangoLassi, counter); break;
                case 4:
                sellproduct(fruitPunch, counter); break;
                default:
                cout << "Invalid selection." << endl;
        }
        showselection();
        cin >> choice;
    }
    return 0;
}



