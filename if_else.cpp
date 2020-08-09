#include<iostream>

using namespace std;

int main()
{
    int num{};
    const int target{10};

    cout<<"Ente a number and i will compare it to "<<target<<" : ";
    cin>>num;

    if(num>=target)
    {
        cout<<"\n===================================================="<<endl;
        cout<<num<<" is  greater than or equal to  "
    }
}
