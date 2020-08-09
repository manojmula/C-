/**
 * There are two types of recursions in the broad aspect 
 * Linear recursion and tree recursion
 * 
 * Linear recursion
 *  Function calling itself only when it is called once in the function
 * 
 * Tree recursion 
 * if a function calls itself more than once then it is called tree recursion
 * 
 * **/
#include<iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
        fun(n-1);
        fun(n-1);
        fun(n-1);
        fun(n-1);
    }
}

int main()
{
    fun(5);
    return 0;
}