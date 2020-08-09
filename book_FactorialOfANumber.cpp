#include<iostream>

using namespace std;

long long fact(int n)
{
    if(n==0)
    {
        return 1;   //base case
    }

    return (n * fact(n-1));     //recursive function
}

int main()
{
    int num;

    cout<<"Enter a positive integer: "<<endl;
    cin>>num;

    cout<<"Factorial of "<<num<<" is "<<fact(num);

    return 0;
}