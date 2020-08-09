#include<iostream>
using namespace std;

int main()
{
    int num{0};
    int num2{0};
    cout<<"Enter the number to reverse : ";
    cin>>num;

    do
    {
        num2 = (num2*10) + (num%10);
        num =num/10;
    }while(num>0);
     num2 = (num2*10) + (num%10);

    cout<<"After reversing the number : "<<num2<<endl;

    return 0;
}