#include<iostream>
using namespace std;

int main()
{
    int num1;
    cout<<"Please enter the number to check if its even or odd below"<<endl;

    cin>>num1;

    if(num1%2)
    {
        cout<<num1<<" is a even number";

    }

    else {
        cout<<num1<<" is a odd number";
    }

    return 0;
}