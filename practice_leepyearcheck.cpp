#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year you want to check : ";
    cin>>year;

    if(year%4==0 && year !=100)
    {
        cout<<"The year is leap year";

    }
    else
    {
        cout<<"The year is not a leap year";
    }

    return 0;
    
}