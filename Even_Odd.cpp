#include <iostream>
using namespace std;

main()
{
    int num;

    cout << "Enter Your Number : ";
    cin >> num;

    if(num % 2 == 0)
      {
          cout << num << "is Even" << endl;
      }
      else{
        cout << num << "is Odd" << endl;
      }

      //divided by 5 or not
      if(num %5 == 0)
      {
        cout << "The number is divisible by 5" << endl;
      }
      else{
        cout << "The number is not divisible by 5" << endl;
      }
}