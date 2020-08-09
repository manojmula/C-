/**
 * Virtual Functions
 * Redefined functions are bound statically
 * Overriden functions are bound dynamically
 * Virtual functions are overriden 
 * Allow us to treat all object generally as objects of base class
 * 
 * 
 * Declaring virtual functions
 * Declare the function you want to override as a virtual function in the Base class
 * Virtual functions are virtual all the way down the hirarchy from this point 
 * Dynamic polymorphism only via Account class Pointer or refernce
 * 
 * Class Account
 * {
 * public:
 *      virtual void withdraw(double amount);
 * };
 * 
 * Declaring virtual functions
 * Override the function in derived classes
 * Function signature and return type must match exactly
 * Virtual keyword is not required but is the best practice
 * If you dont provide an overriden version it is inherited from its base class
 * 
 * Class Checking: public Account
 * {
 * public:
 *  virtual void withdraw(double amount);
 * }
 * **/

#include<iostream>
using namespace std;

class Account
{
    public:
       virtual void withdraw(double amount)
        {
            cout<<"In Account::withdraw"<<endl;
        }
};
class Checking:public Account{
    public:
       virtual void withdraw(double amount)
        {
            cout<<"In Checking::withdraw"<<endl;
        }

};
class Savings:public Account
{
    public:
        virtual void withdraw(double amount)
        {
            cout<<"In Savings::withdraw"<<endl;
        }
};
class Trust:public Account{
    public:
        virtual void withdraw(double amount)
        {
            cout<<"In Trust::withdraw"<<endl;
        }
};

int main()
{
    cout<<"\n=====Pointer======"<<endl;
    Account *p1 = new Account();
    Account *p2 = new Checking();
    Account *p3 = new Savings();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    cout<<"\n=====Clean up====="<<endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
