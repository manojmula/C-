/***
 * The protected Members and class Access
 * The protected class member modifier
 * class Base{
 * protected:
 * 
 * };
 * Accessible from the base class itself
 * Accessible from classes derived from base class
 * Not accessible by objects of base or derived
 * 
 * The potected class member modifier
 * Class Base{
 * public:
 *  int a ;//public class members
 * 
 * protected:
 * int b;//protected base class members
 * 
 * private:
 * int c;//private base class members
 * 
 * Access with public inheritance
 * 
 * Base Class           public inheritance      Access in derived class
 * public:a                                     public:a
 * protected:b                                  protected :b
 * private:c                                    private c:no access
 * 
 * Base class                                   Access in derived class
 * public :a                                    protected:a
 * protected:d                                  protected:b
 * private:c                                    c:no access
 * 
 * }
 * ****/
#include<iostream>
using namespace std;

class Base{
    public:
        int a{0};
        void display(){std::cout<<a<<","<<b<<","<<c<<endl;}

    private:
        int b{0};
    
    protected:
        int c{0};
};

class Derived:public Base{
    public:
        void access_base_members(){
            a = 100;
            c = 200;

        }

};

int main()
{
    cout<<"======Base member access from base objects============="<<endl;
    Base base;
    base.a = 100;
    // base.b = 200;
    // base.c = 300;



    cout<<"===Base member acceess from derived objects============"<<endl;

    return 0;
}