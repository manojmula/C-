/***
 * Even though pointers to functions(or function pointer) are introduced in c
 * they are widely used in c++ for dynamic binding
 * and event based applications
 * The concept of pointer to function acts as a base for pointers to members
 * 
 * the pointer to function is known as callback function
 * we can use these function pointers to refer to a function.Using function pointers we can allow a 
 * c++ program to select a function dynamically at run time
 * we can also pass a function as an argument to another function 
 * here the function is passed as a pointer 
 * the function pointers cannot be dereferenced c++ also allows to compae two function pointers
 * c++ provides two types of function pointers that point to static member function and function pointers
 * that point to non-static member function 
 * The two function pointers are incompetable with each other
 * the function pointers that point to the non-static member function requires hidden arguments
 * 
 * like other varaibles we can declare a function pointer in c++ it takes the following form
 * data_type(*funcntion name)
();
 *As we know that data type is any valid data type in c++
 The function name is the name of the function
 Which must be preceded by an astrick the function name is any valid name of the function which must 
 be precede wit astrik
 int (8num)functiomn)(int x);

 remember that declaring a pointer only creates a pointer 
 it dose not create actual functions
 for this we muist define the task
 which is to be performed by the function
 the function must have the same return type and arguments  
 * ***/
#include<iostream>

typedef void (*FunPtr)(int,int);
void Add(int i,int j)
{
    std::cout<<i<<" + "<<j<<" = "<<i+j<<std::endl;
}
void Substract(int i,int j)
{
    std::cout<<i<<" - "<<j<<" = "<<i-j<<std::endl;
}
int main()
{
    FunPtr ptr;
    ptr = &Add;
    ptr(1,2);
    std::cout<<std::endl;
    ptr = &Substract;
    ptr(1,2);
}