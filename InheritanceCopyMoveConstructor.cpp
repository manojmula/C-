/***
 * Copy/Move constructors and overloaded operator
 * Not inheritedt from the base class
 * You may not need to provide your own
 * compiler-provided versions may be just fine
 * we can explicitly invoke the base class versions from the derived class
 * Copy constructor
 * Can invoke Base copy constructor explicitly
 * Derived objects other will be sliced
 * Derived::Derived(const Derived &other)
 * :Base(other),{derived initialization list}
 * {
 * }
 * *
 * 
 * Copy constructor
 * class Derived : public Base{
 * int double_value}
 * publiv:
 *  same 
 * Derived(const Derived &other)
 * :Base(other),double_value{other.double_value}
 * {
 * cout<<"Derived copy constructor"<<endl;}
 * 
 * Copy/Move constructors and oveloaded opertor=
 * Often you do not need to provide your own
 * if you  do not define them in derived 
 * then the compiler will create them and autometically and call the base class version
 * 
 * if you do not provde derived verions then you must invoke the base versions explicitly yourseld
 * 
 * Be careful with raw poiners 
 * Espeecially if base and derived each have the raw pointers
 * Provide them the deep copy semantics
 * */
#include<iostream>

using namespace std;

class Base{
    private:
        int value;
    public:
        Base():value{0}
        {
            cout<<"Base no-args constructor"<<endl;
        }

        Base(int x):value{x}
        {
            cout<<"int Base constructor"<<endl;
        }

        Base(const Base &other) : value{other.value}
        {
            cout<<"Base copy constructor"<<endl;
        }

        Base &operator=(const Base &rhs)
        {
            cout<<"Base operator="<<endl;
            if(this == &rhs)
            {
                return *this;
            }
            value = rhs.value;
            return *this;
        }

        ~Base(){
            cout<<"Base destructor"<<endl;
        }
};

class Derived:public Base{
    private:
        int double_value;

    public:
        Derived():Base{}
        {
            cout<<"Derived no-args constructor"<<endl;
        }
        Derived(int x):Base{x},double_value{2*x}
        {
            cout<<"int Derived constructor"<<endl;
        }

        Derived(const Derived &other):Base(other),double_value{other.double_value}
        {
            cout<<"Derived copy constructor"<<endl;
        }

        Derived &operator=(const Derived &rhs)
        {
            cout<<"Derived operator="<<endl;
            if(this==&rhs)
            {
                return *this;
            }
            Base::operator=(rhs);
            double_value = rhs.double_value;
        }
};

int main()
{
    // Base b{100};//overload constructor
    // Base b1{b};//Copy constructor
    // b = b1;//copy assignment

    Derived d{100};
    Derived d1{d};
    d = d1;

    return 0;
}