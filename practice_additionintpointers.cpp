#include<iostream>
using namespace std;

int main()
{
    int *pNum1 = new int;
    int *pNum2 = new int;
    int *pAdd = new int;

    cout<<"Enter the first number: ";
    cin>>*pNum1;
    cout<<"Enter the second number: ";
    cin>>*pNum2;

    *pAdd = *pNum1 + *pNum2;
    cout<<"The result of adding two numbers is : "<<*pAdd<<endl;

    return 0;
    
}