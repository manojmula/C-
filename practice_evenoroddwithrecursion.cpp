#include<iostream>
using namespace std;

int isEvent(int);

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(isEvent(n))
    {
        cout<<"Its an even number";

    }
    else {
        cout<<"Its an oddd number";
    }

    return 0;

}

int isEvent(int num)
{
    if(num==0)
        return 1;
    else if(num==1)
        return 0;
    else if(num<0)
        return isEvent(-num);
    else 
        return isEvent(num-2);

}