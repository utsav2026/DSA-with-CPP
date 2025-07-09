#include <iostream>
using namespace std;

main()
{
    float units,bill;
    
    cout << "Enter Electricity units : ";
    cin >> units;
    
    if(units <= 50)
       bill = units*0.5;
    else if(units <= 150)
        bill = 25+(units-50)*0.75;
    else if(units <= 250)
        bill = 100+(units-150)*1.20;
    else
        bill = 220+(units-250)*1.50;
    
    
    bill += bill*0.20;
    cout << "Electricity Bill = Rs." << bill << endl;
}