#include<iostream>

using namespace std;

int m = 10;

int main()
{
    int m = 20;
    {
        int k = m;
        int m = 30;

        cout<<"we are in innerblock\n"<<endl;
        cout<<"k = "<<k<<endl;
        cout<<"m = "<<m<<endl;

        cout<<"::m = "<<::m<<endl;
    }

    cout<<"\nwe are now in the outer block\n";
    cout<<"m = "<<m<<endl;
    cout<<"::m = "<<::m<<endl;

    return 0;
}