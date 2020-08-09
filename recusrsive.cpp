/**
 * a recursive function  is a function that calls itself
 * a either directly or indirectly
 * through another function
 * recursion problem solving
 * base case
 * divide the rest of the problem into subproblem and do recursive call
 * there are many problems that lend themselve to recursive solution
 * mathematical-factorial, fibinoci,fractals
 * searching and sorting-binary search,search tree
 * 

*/

#include<iostream>

unsigned long long factorial(unsigned long long n)
    {
        if(n==0)
        return 1;
        
        return n * factorial(n-1);
    }

using namespace std;

int main()
{
    cout<<factorial(10)<<endl;
    return 0;
}