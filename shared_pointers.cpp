/***
 * shared_ptr
 * {
 * std::shared_ptr<int> p1{new int {100}};
 * std::cout<<*p1<<std::endl;
 * *p1 = 200;
 * std::cout<<*p1<<std::endl;
 * 
 * }//automatically delted
 *
 * weak_ptr
 * provides a non owning weak reference
 * weakptr<T>
 * points to an object to type T on a heap
 * Does not participate in owning relationship
 * Always create from ownership
 * Dose not increment or decrement reference use count
 * used to prevent strong reference cycles which could prevent objects from being deleted 
*/
#include<iostream>
#include<memory>

using namespace std;

class B;

class A
{
    private:
        std::shared_ptr<B> b_ptr;
    public:
        void set_B(std::shared_ptr<B> &b)
        {
            b_ptr =b;
        }
        A(){cout<<"A Constructor"<<endl;}
        ~A(){cout<<"A Destructor"<<endl;}
};

class B{
    std::shared_ptr<A> a_ptr;
    public:
        void set_A(std::shared_ptr<A> &a)
        {
            a_ptr=a;
        }
        B(){cout<<"B Constructor"<<endl;}
        ~B(){cout<<"B Destructor"<<endl;}
};

int main()
{
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();
    a->set_B(b);
    b->set_A(a);
    return 0;
}