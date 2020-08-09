/**
 * using friend function to add data objects of two different classes
 * 
 * 
*/
#include<iostream>

using namespace std;

class ABC;

class XYZ{
    private:
        int data;
    public:
        void setValue(int value)
        {
            data = value;
        }

        friend void add(XYZ,ABC);
};

class ABC{
    private:
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
    cout<<"sum of data values of XYZ and ABC objects using friend function = "<<obj1.data+obj2.data;
}

int main()
{
    XYZ Z;
    ABC A;
    Z.setValue(5);
    A.setValue(50);
    add(Z,A);
    return 0;
}

/**
 * the function add() has arguments from both XYZ and ABC.
 * When the function add() is declared as  a friend function in XYZ for the first time,the compilerwill not acknowledge
 * the precense of ABC unless its name is declare in the begining as
 * class ABC;
 * this is known as forward declaration
 * As pointed out erlier a friend function can be called by refrence .
 * in this case local copies of the objects are made.Instread a pointer to the address of the object is passed and the called function 
 * directly on objects used in the call
 * this method can be use to alter the values of the private members of the class
 * rember altering values of the private members is against the basic principle of data hiding 
 * it shuould be only used when obsolute nessaary 
 * the below prograns show how to use common fiend function to exchange the private values of two classes
 * the function is called by refrence
 * **/