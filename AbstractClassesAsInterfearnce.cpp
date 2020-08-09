/**
 * Abstract classes as interfaces in c++
 * An abstract class that has only pure virtual functions
 * these functions provide a general set of services to the user of the class
 * povide a public
 * Each subclass is free to implement these services as needed
 * Every service must be implemented
 * the service type infformation is strictly eenforced
 * 
 * C++ dose not provide true interfaces
 * we use abstract classes and pure virtual functions to achive it
 * Suppose we want to be able to provide printable support for any object we wish without knowing
 * its implementation at compile time
 * 
 * std::cout<<any_object<<std::endl;
 * any_object must conform to the printable interface
 * 
 * An Printable example
 * 
 * class Printable{
 *  friend ostream &operator(ostream &,const Printable &obj);
 * 
 * public:
 *  virtual void print(ostream &os) const = 0;
 *  virtual ~Printable(){};
 * };
 * 
 * ostream &operator<<(ostream &os,const &obj)
 * {
 * obj.print(os);
 * return os;
 * }
 * 
 * Any_Class *ptr = new Any_Class();
 * cout<<*ptr<<endl;
 * 
 * void function1(Any_class &obj)
 * {
 * cout<<obj<<endl;
 * }
 * 
 * void function2(Printable &obj)
 * {
 * cout<<obj<<endl;
 * }
 * 
 * function1(*ptr); //Hi from Any_class
 * 
 * function2(*ptr);
 * **/
#include<iostream>
using namespace std;

class Account
{
    friend std::ostream &operator<<(std::ostream &os,const Account &acc);

    public:
        virtual void withdraw(double amount)
        {
            std::cout<<"In Account::withdraw"<<std::endl;
        }
        virtual ~Account(){}
};

std::ostream &operator<<(std::ostream &os,const Account &acc)
{
    os<<"Account display";
    return os;
}

class Checking:public Account
{
    friend std::ostream &operator<<(std::ostream &os,const Checking &acc);

    public:
        virtual void withdraw(double amount)
        {
            std::cout<<"In checking::withdraw"<<endl;
        }
        virtual ~Checking(){}
};

std::ostream &operator<<(std::ostream &os,Checking &acc)
{
    os<<"Checking display";
    return os;
}

class Savings:public Account{
    friend std::ostream &operator<<(std::ostream &os,const Savings &acc);

    public:
        virtual void withdraw(double amount)
        {
            std::cout<<"In Savings::withdarw"<<std::endl;
        }
        virtual ~Savings();
    
};