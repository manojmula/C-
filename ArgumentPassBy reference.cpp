/**
 * Pass by reference
 * Sometimes we want to be able to change the actual parameter from within the function body
 * in order to achive this we need the location or address of the actual parameter
 * we saw hoe this is the effect with array , but what about other variable types?
 * we can use refernce parameters to tell the compiler to tell the compiler to pass in a reference to the actual parameter
 * the formal parameter will now be an alias for the actual parameter
 * 
*/

#include<iostream>

using namespace std;

int swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 100;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
