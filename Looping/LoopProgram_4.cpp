#include <iostream>
using namespace std;

main()
{
    char one,two;
    int count=1;

    cout << "Enter 1st Charcter : ";
    cin >> one;

    cout << "Enter 2nd Charcter : ";
    cin >> two;
    cout << "Charcters " << one << "to" << two << ": ";

    char value=one;
    while(value<=two)
    {
        cout<<value<<" ";
        value++;
        count++;
    }
    cout<<endl;
    cout << "The Number Of Charcter : "<< count <<endl;
}