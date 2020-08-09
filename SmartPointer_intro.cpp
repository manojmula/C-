/***
 * Smart pointers
 * issues with raw pointers
 * what are smart pointers
 * concept of ownership and RAII
 * c++ smart pointers
 * unique pointers
 * shared pointers
 * weak pointers
 * custo deleters
 * 
 * Issues with raw pointers
 * C++ provides absolute flexiblity with memory managmeent
 * allocation 
 * deaallocation
 * Lifetime managment
 * Some potentially serious problems
 * unintialized wild pointers
 * memory leaks
 * Dangling pointers
 * no exception safe
 * Ownership
 * who owns the pointer?
 * when should be a pointer deleted
 * 
 * What are smart pointers ?ownership and RAII
 * What are smart pinters?
 * smart pointers are objects
 * can only point to heap allocated memory
 * Automatically delete when ni longer needed
 * Adhere to RAII principles
 * C++ Smart pointers
 * unique pointer(uniquee_ptr)
 * shared pointers(shared_ptr)
 * weak pointer(weak_ptr)
 * Auto pointers(auto_ptr) deprecated-we will not discuss
 * c++ template class related as much as he is saying
 * How to create smart pointer
 * #include<memory>
 * 
 * Define by class teemplates
 * wrapper around a raw pointer
 * overloaded operators
 * Dereference(*)
 * Member slection(->)
 * pointer artithmetic not supported(++,--,etc)
 * can have custom deleters
 * 
 * sMART pointers 
 * {
 *  std::smart_pointer<Some_class> ptr =...
 * ptr->method();
 * cout<<(*ptr)<<endl;
 * }
 * RAII -Resource Acqisation is initialization
 * Common idom or pattern used in software design based on container object lifetime
 * RAII objects are allocated on the stack
 * resource acquisitaion
 * open a file
 * Allocate memory
 * Acquire a lock
 * is initalizion
 * The resource is acquired in the constructo
 * Resource relinquisating
 * Happens in the destructor
 * close the file 
 * Deallocate the memory
 * Release the lock
 * 
 * UNIQE POINTER
 * unique_ptr
 * simple smart pointer-very efficient
 * 
 * unique_ptr<T>
 * points to an object of type T on the heap
 * it is unique there can be only one unique_ptr<T> pointing to the object on the heap
 * owns what it points to
 * cannot be assigned or copieed
 * CAN be moved
 * when the pointer is destroyed what it points to is automatically destroyed
 * 
 * uniqe_ptr-creating intializing and using
 * {
 *  std::unique_ptr<int> p1 {new int {100}};
 * std::cout<<*p1<<std::endl;
 * *p1=200;
 * std::cout<<*p1<<std::endl;
 * 
 * }//automatically deleted
 * 
 * uniquw_ptr-some other useful methods
 * {
 * std::unique_ptr<int> p1{new int{100}};
 * std::cout<<p1.get()<<std::endl;
 * p1.reset();//p1 is now null pointer
 * 
 * if(p1)
 * std::cout<<*p1<<std::endl;//wont execute
 * 
 * }//automatically deleted
 * unique_ptr
 * {
 * std::unique_ptr<Account> pe{new Account{"Larry"}}
 * std::cout<<*p1<<std::endl;
 * 
 * p1->deopsit(1000);
 * p1->withdarw(500);
 * 
 * 
 * }
 * 
 * **/
#include<iostream>
#include<memory>
#include<vector>

#include"Account.h"

class Test
{
    private:
        int data;
    public:
        Test():data{0} {std::cout<<"Test Constructor"<<data<<std::endl;}
        Test(int data):data{data}{std::cout<<"Test constructor"<<data<<std::endl;}
        int get_data()const{return data;}
        ~Test(){std::cout<<"Test destructors"<<data<<std::endl;}
};

using namespace std;

int main()
{
    // Test *t1 = new Test{1000};
    // delete t1;

    std::unique_ptr<Test> t1 {new Test{100}};
    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);

    std::unique_ptr<Test> t3;
    t3 = std::move(t1);
    if(!t1)
    {
        std::cout<<"t1 is a null pointer"<<std::endl;
    }
    return 0;
}