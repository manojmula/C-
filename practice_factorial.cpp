#include<iostream>
using namespace std;

int main()
{
    int num,i;
    long int fact = 1;

    cout<<"Enter the number: ";
    cin>>num;

    for(i=num;i>=1;i--)
    {
        fact = fact * i;

    }

    cout<<"Factorial of "<<num<<" is = "<<fact<<endl;

    return 0;
}