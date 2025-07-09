#include <iostream>
using namespace std;

main()
{
    int num;

    cout << "Enter Your Number : ";
    cin >> num;

    if(num > 0)
    {
        cout << "The Number is Positive....." << endl;
    }
    else if(num < 0)
    {
        cout << "The Number is Negative....." << endl;
    }
    else
    {
        cout << "The Number is Zero.....";
    }
}
