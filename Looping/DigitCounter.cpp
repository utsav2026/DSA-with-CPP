#include <iostream>
using namespace std;

main() 
{
    int number, count = 0;

    cout << "Enter any number: ";
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    do {
        number /= 10;
        count++;
    } while (number != 0);

    cout << "Total number of digits: " << count << endl;

}
