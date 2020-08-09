#include<iostream>

using namespace std;

class Test{
    int *a;
    public:
    Test(int size)
    {
        a = new int[size];
        cout<<"\n\nConstructor Msg:Integer array of size "<<size<<" created..";
    }
    ~Test()
    {
        delete a;
        cout<<"\n\nDestructor Msg: Freed up the memory allocated for integer array";
    }
};

int main()
{
    int s;
    cout<<"enter the size of the array:";
    cin>>s;
    cout<<"\n\nCreating an object of test class..";
    Test T(s);
    cout<<"\n\nPress any key to the end the program..";

    return 0;

}
