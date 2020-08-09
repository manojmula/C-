#include<iostream>

using namespace std;

int main()
{
int num{};
const int min{10};
const int max{100};

cout<<"Enter a number between "<<min<<" and "<<max<<" : ";
cin>>num;

if(num>=min)
{
    cout<<"\n=================If Statment 1======================"<<endl;
    cout<<num<<" is greater than or equal to "<<min<<endl;

    int diff{num-min};
    cout<<num<<" is "<<diff<<" greater than "<<min<<endl;

}
if(num<=max)
{
    cout<<"\n=================If Statment 2======================"<<endl;
    cout<<num<<" is less than or equal to "<<max<<endl;
    
    int diff{max-num};
    cout<<num<<" is "<<diff<<" lesser than "<<min<<endl;

}
if(num>=min && num<=max)
{
    cout<<"\n=================If Statment 3======================"<<endl;
    cout<<num<<" is in range<<endl";
    cout<<"This means statment1 and statment2 must also display as true"<<endl;

}
if(num == min|| num == max)
{
    cout<<"\n=================If Statment 4======================"<<endl;
    cout<<num<<" is right on the boundry"<<endl;
    cout<<"This means all 4 statments display"<<endl;


}
}