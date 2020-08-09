#include<iostream>

using namespace std;

int main()
{
    float number1,number2,sum,average;

    cout<<"Please enter the two numbers:";
    cin>>number1;
    cin>>number2;
    
    sum = number1+number2;
    average = sum /2;

    cout<<"The sum of two numbers = "<<sum<<endl;
    cout<<"The average of two numbers = "<<average<<endl;

    return 0;

}