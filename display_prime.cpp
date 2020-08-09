#include<iostream>

using namespace std;

int isPrime(int);

int main()
{
    int i;
    int n;

    cout<<"Enter the maximum range(n): ";
    cin>>n;

    cout<<"The list of prime numbers are: ";
    for(i=2;i<n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }

    }
cout<<endl;
return 0;

}
int isPrime(int n)
{
    int i ;
    int prime = 1;

    for(i=2;i<(n/2);i++)
    {
        if(n%i==0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}