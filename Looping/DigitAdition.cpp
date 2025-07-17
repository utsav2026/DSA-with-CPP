#include <iostream>
using namespace std;

int main() 
{
    int number, original, firstDigit, lastDigit;

    cout << "Enter any number: ";
    cin >> number;

    original = number;
    lastDigit = number % 10;

    for (; number >= 10; number /= 10);

    firstDigit = number;

    int sum = firstDigit + lastDigit;

    cout << "The sum of the first and the last digit: " << sum << endl;

}
