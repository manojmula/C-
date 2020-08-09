/***
 * What is polymorphism and inheritance
 * what is polymorphism
 * using base class pointers
 * static vs dynamic binfind
 * virtual functions
 * virtual distructors
 * the override and final specifiers
 * using base class references
 * Pure vertual functions and abstract classes
 * abstract classes as interfearnces
 * What is polymorphism
 * 
 * Fundamentals to object oriented programming
 * Polymorphism
 * compile timr/early/static binding
 * Run time/late/dynamic binding
 * 
 * Runtime polymorphism
 * Being able o assign different meanings to the same function at runtime
 * 
 * Allows us to program more abstractly
 * think general vs specific
 * Let c++ figure out which function to call at runtime
 * not the defaukt in c++ run time polymorphism is achived via
 * inheritance
 * base class pointers or reference
 * virtual functions
 * 
 * 
 * Types of polymorphism 
 * An non polymorphic example static binding
 * Polymorphism
 * compile time
 * Function overloading operator overload
 * 
 * runtimr 
 * function overriding
 * **/

#include<iostream>
#include<memory>
using namespace std;

class Base{
    public:
        void say_hello() const
        {
            cout<<"Hello I am base class object"<<endl;
        }

};

class Derived:public Base
{
    public:
        void say_hello() const
        {
            cout<<"Hello I am derived class object"<<endl;
        }
};

void greetings(const Base &obj)
{
    cout<<"Greetings";
    obj.say_hello();
}

int main()
{
    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    greetings(b);
    greetings(d);

    Base *ptr = new Derived();
    ptr->say_hello();

    unique_ptr<Base> ptr1 = make_unique<Derived>();
    ptr1->say_hello();

    return 0;
}