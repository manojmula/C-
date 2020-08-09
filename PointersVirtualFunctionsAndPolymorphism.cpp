/**
 * pointer is one of the key aspects of c++ similar to that of c
 * they offer a unique approach to handle data in c and c++
 * we have seen ssome of the applications of pointers in chapter 3 and 5
 * we shall discuss the rudiments of pointers and their special usage with accessing member data and 
 * function context of inherited classes and objects
 * another cruicial feature of OOp is polymorphism
 * it is simply means one name and multiple forrms 
 * we have already seen how concept of polymorphism is implemented using the overloaded functions an 
 * and operators
 * The overloaded member functions are selectedd for invoking the matching arguments
 * both type and number
 * This is also true in inherited classes'
 * but what happens when the function name and prototype are same in both the cases and derived classes
 * for instance
 * class A{
 * int x;
 * public:
 * void show()
 * {}
 * }
 * class B
 * int y
 * show
 * 
 * since the prrototype of show is same in both the places
 * how do we use the member function show() to print values of objects of both the class A and B
 * as we have seen earlier we can address this situation by using class resolution operator to specify 
 * class while invoking the function with derived classes object
 * this is refreed as static bindig
 * that is the compiler is able to select an appropriate function for a dynamic polymorphism that is 
 * program us able to chooe the appropriate function at the time when a run-time object actually makes a call
 * this process is termed as dynamic binding In c++ thi is achived using virtual functions
 * 
 * Dynamic binding is one of the powerful features of C++ this requires the use of pointers to an object
 * we shall discuss in details how pointers to object and virtual functions are used to implement dynamic binding
 * 
 * Pointers
 * We know that a pointer is derived data type that refers to another data variable by storing the variable s
 * memory address rather tha daya
 * the pointer variable defines where to get the value of a specific data varaible instead of defining actual data
 * Like c a pointer varaible can also refer to or point to another pointer ariavle in c++
 * However it often points to a data varaibel 
 * Pointers provide an alternative approach to access other data objects
 * 
 * Declaring and initilizing pointers
 * As discussed earlier we can declare a pointer variale similar to another variable in c++
 * like c the declaration is based on data type of the variavle it points to
 * The declaration of pointer of a popular takes the foillwoing
 * data type
 * *pointervariable
 * Here ,pointer variable is the name of the pointer and the data type refers to one of the valid c++ data
 * types
 * such as int ,char ,float and so on
 * The data type is followed by an astrick * symbol which ddistingush a pointer varaible from another
 * variables to compiler
 * We can locate astrisk immiditelt before the pointer varaible or inbetween the data type and the pointer varaible
 * 
 * or immideltyly after the data type it dose not cause any effect in the execution process
 * As we know a pointer variable can point to any type of data available in c++,however it is necssary ti
 * understand that a pointer is able to point to only one data type at specific tyme
 * let us declare a pointer varaible wich pointsto integer varaovle as follows
 * 
 * int 8ptr;
 * Here ptr is pointer varaible and poits to an integer data type 
 * the pointer varaible ptr should contain the memory location of any integer vatriable
 * In the same manner
 * we can declare pointer varaible of another data types
 * Like other programming langages a varaible must be initialized bfore using it in c
 * ++ program
 * we can intilized a pointer varaible as follows
 * int *ptr ,a
 * ptr = &a;
 * the pointer varaible ptr contains the address of the ariabel a
 * like c we use the address of operator of reference operator ie & to retrive the address of a varaible
 * the second statment assigns the address of the varaible a to the pointer ptr
 * 
 * we can also declare a pointer varaible to pint to another pointer similar to that of c
 * That is a pointer varaible contains address of another pointer 
 * **/
#include<iostream>


int main()
{
    int a=0;
    int *ptr1,**ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;

    std::cout<<"The address of a : "<<ptr1<<std::endl;
    std::cout<<"The address of ptr1: "<<ptr2<<std::endl;
    std::cout<<std::endl<<std::endl;
    std::cout<<"After incrementing the address values: "<<std::endl;
    ptr1 +=2;
    std::cout<<"The address of a: "<<ptr1<<std::endl;
    ptr2 += 2;
    std::cout<<"The address of ptr1:"<<ptr2<<std::endl;
    return 0;
}

/**
 * 
 * We can also provide void pointers known as generic pointers which refers to a varaivle of
 * any data type
 * Before using void pointers we must type cast the variables to the specific data type that they point to
 * **/