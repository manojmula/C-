#include<iostream>

using namespace std;

int main()
{
    int num1;   //to store first number
    int num2;   //to store second number
    int add;    //to store addition

    //read numbers
    cout<<"Enter first Number: ";
    cin>>num1;
    cout<<"Enter second Number: ";
    cin>>num2;

    //calculating the number
    add = num1+num2;

    //printing addition
    cout<<"Addition is : "<<add<<endl;

    return 0;

}