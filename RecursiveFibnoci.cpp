/**
 * if recursion dosent eventually stop you will have infinite recursion
 * recursion can be resource intensive
 * remember the base case,it terminates the recursion
 * only use recursion solution when it makes sense
 * anything that can be done recursively can be done iteratively
*/

#include<iostream>

using namespace std;

unsigned long long fib(unsigned long long n);

unsigned long long fib(unsigned long long n)
{
    cout<<"\t"<<n;
    if(n <= 1)
    return n;

    return fib(n-1)+fib(n-2);
}

int main()
{
cout<<fib(40)<<endl;
return 0;
}