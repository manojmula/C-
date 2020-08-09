/***
 * Constructor and class initialisation
 * A derived class inherits from base class
 * The base part od the derived class must be initialized before the derived class is initialized
 * when a derived object is created
 * base class constructor executes then
 * derived class constructor executes
 * Constructors and class initialization
 * class Base{
 * public:
 *      Base(){ccout<<"Base constructor"<<endl;}
 * 
 * };
 * 
 * class Derived : public Base{
 * public:
 *      derived(){cout<<"Derived constructor"<<endl;}
 * };
 * 
 * Destructors
 * class destructors are invoked in the reverse order as constructors
 * the derived part of the derived class Must be destroyed before the class destructor is invoked
 * when a derived object is destroyed 
 * derived class destructor executes then
 * base class destructor executes
 * Each destructor should free resources allocated in its own constructors
 * 
 * Constrctor and class initialisation
 * A derived class dose not inherit
 * Base class constructors
 * base class destructors
 * base class overloaded opearators
 * base class friend fuctions
 * 
 * However the base class constructors,destructors and overloaded asignment operators can invoke
 * the base class versions
 * c++11 allows explicit inheritance of base non-special constructors with
 * using Base::Base; anywhere in the derived class declaration
 * Lots of rule involved,often better to define constructors yourself
 * ***/

#include<iostream>

using namespace std;

class Base{
    private:
        int value;
    public:
        Base(): value{0}{cout<<"Base no-args constructor"<<endl;}
        Base(int x):value{x}{cout<<"Base (int) overloaded constructor"<<endl;}
        ~Base(){cout<<"Base Destructot"<<endl;}
};

class Derived :public Base{
        using Base :: Base ;
    private:
        int double_value;
    public:
        Derived() : double_value{0}{cout<<"Derived no-args constructor"<<endl;}
       // Derived(int x) : double_value{x*2}{cout<<"Derived (int) overloaded constructor"<<endl;}
       // ~Derived(){cout<<"Derived destructor"<<endl;} 

};

int main()
{
    Derived d{100};
    return 0;
}