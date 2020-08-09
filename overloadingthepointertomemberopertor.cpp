/**
 * Overloading the pointer to member(->) operator
 * The pointer to member opertaor(->) is normally used in conjuction with an object pointer to access
 * any of the objects member
 * demostrates the overloading operatoe
 * 
 * 
 * **/

#include<iostream>

using namespace std;

class Test{
    public:
        int num;
        Test(int j)
        {
            num = j;

        }

        Test* operator->(void)
        {
            return this;
        }
};

int main()
{
    Test T(5);
    Test *ptr = &T;

    cout<<"T.num = "<<T.num;
    cout<<"\nPtr->num = "<<ptr->num;

    cout<<"\nT->num = "<<T->num;

    return 0;
}