#include <iostream>
using namespace std;

main() 
{
    int n,a= 0;
    
    cout << "Enter a number: ";
    cin >>n;
    
    while (n>9||a>9) {
        while(n>0) 
        {
            a+=n%10;
            n/=10;
        }
        
        n=a;
        a=0;
    }
    
    cout<<"Final: "<<n<< endl;
}