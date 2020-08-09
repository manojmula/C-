#include<iostream>
using namespace std;

int isPrime(int num);

int main()
{
    int inNum;

    cout<<"enter the number: ";
    cin>>inNum;

    if(isPrime(inNum))
    {
        cout<<"The number is prime";
    }
    else
    {
        cout<<"The number is non-prime number";
    }

    return 0;
    
}
int isPrime(int n)
{
    int i;
    int prime = 1;

    for(i = 2;i<n;i++)
    {
        if(n%i==0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}