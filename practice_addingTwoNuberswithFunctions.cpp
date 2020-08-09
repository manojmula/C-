#include<iostream>

using namespace std;

int addition(int num1,int num2);

int main()
{
    int num1;
    int num2;
    int add;

    cout<<"Enter the number 1: "<<endl;
    cin>>num1;
    cout<<"Enter the number 2 : "<<endl;
    cin>>num2;

    add = addition(num1,num2);

    cout<<"The result of addding two numbers is: "<<add<<endl;
    return 0;
}

int addition(int num1,int num2)
{
    return num1+num2;
}