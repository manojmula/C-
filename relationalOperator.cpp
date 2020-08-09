//The relational operators are now intorduced in 2020 i mean new operator in 2020 was released that is nothing but three way relational operator

#include<iostream>

using namespace std;

int main()
{
    int num1{},num2{};

    cout<<boolalpha;
    // cout<<"Please enter two integers seprated by space:"<<endl;
    // cin>>num1>>num2;

    // cout<<num1<<">"<<num2<<":"<<(num1>num2)<<endl;
    // cout<<num1<<"<"<<num2<<":"<<(num1<num2)<<endl;
    // cout<<num1<<"<="<<num2<<":"<<(num1<=num2)<<endl;
    // cout<<num1<<">="<<num2<<":"<<(num1>=num2)<<endl;

    const int lower{10};
    const int upper{20};

    cout<<"Enter an integer that is greater than "<<lower<<":";
    cin>>num1;
    cout<<num1<<">"<<lower <<" is "<<(num1>lower)<<endl;

    cout<<"Enter an integer that is less than or equal "<<upper<<":";
    cin>>num2;
    cout<<num2<<">"<<upper <<" is "<<(num1<=upper)<<endl;



}