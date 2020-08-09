#include<iostream>

using namespace std;

class ABC;

class XYZ
{
    int data;
    public:
        void setValue(int value)
        {
            data = value;
        }

        friend void add(XYZ,ABC);
        
};

class ABC
{
    int data;
    public:
        void setValue(int value)
        {
            data = value;
        }
        friend void add(XYZ,ABC);
};

void add(XYZ obj1,ABC obj2)
{
    cout<<"Sum of data value of XYZ and ABC objects using the friend functions = "<<obj1.data+obj2.data<<endl;
}

int main()
{
    XYZ X;
    ABC A;
    X.setValue(5);
    A.setValue(50);
    add(X,A);
    return 0;
}