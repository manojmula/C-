#include<iostream>

using namespace std;

int main()
{
    int num{};

    cout<<"Enter an integer : ";
    cin>>num;

    (num%2==0) ? (cout<<num<<" is even"<<endl) : (cout<<num<<" is odd"<<endl);

}