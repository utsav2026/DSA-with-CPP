#include<iostream>
using namespace std;

main()
{
    int num,value=1,i=1,count=1;

    cout<<"Enter Any Number : ";
    cin>>num;

    cout<<"Values=";

    while(count<=num)
    {
        cout<<" "<<value;
        value=value+i;
        i++;
        count++;
    }
    
}