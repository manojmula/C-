/***
 * Passing arguments to base class constructors
 * The base part of a derived class must be initialized first
 * how can we control exactly which class constructor is used during initialization?
 * we can invoke the whichever base class constructor we wish in the initialization list of the derived class
 * 
 * ***/
#include<iostream>
using namespace std;

class Base{
    private:
        int value;
    public:
        Base():value{0}{
            cout<<"No-args constructor is initialized"<<endl;
        }

        Base(int x):value{x}{
            cout<<"Base (int) overloaded cosntructor"<<endl;
        }
        ~Base(){
            cout<<"Base destructor is initialized"<<endl;
        }
};

class Derived : public Base{
    private:
        int double_value;
    public:
        Derived():Base{},double_value{0}{
            cout<<"Derived no-args constructor is initialized"<<endl;
        }
        Derived(int x)
            :Base{x},double_value{x*2}
            {
                cout<<"Derived (int) constructor"<<endl;
            }
        ~Derived(){
            cout<<"Derived destructor"<<endl;
        }
};

int main()
{
    Derived d{10};
    return 0;
}