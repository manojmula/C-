#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number: ";
    cin>>n;
    cout<<endl;

    while(n>1)
    {
        n = n - 2;
    }

    if(n==0)
    {
        cout<<"Number given is an even number";

    }
    else 
    {
        cout<<"Number given is odd number";
    }

    return 0;
}