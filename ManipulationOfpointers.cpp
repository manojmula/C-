/***
 * As discussed earler we can manipulate a pointer with the indirection operator that is * which is also known as 
 * dereference operator
 * with the operator we can indirectly access the data varaible content it takes the following genertal form
 * *pointer_varaible
 * As we know dereferincing a pointer allows us to get the content of the memory location that the pointer 
 * points to 
 * after assigninf address of the variable to a pointer we may want to change the content off a variable
 * Using dereferencing operator we can change the conetents of the meory location
 * Let us consider an example that illistrated how to dereference a pointer variable 
 * 
 * 
 * **/
#include<iostream>

int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    std::cout<<"The value of a is: "<<*ptr<<std::endl;
    *ptr = *ptr +a;
    std::cout<<"the revised value of a is: "<<*ptr<<std::endl;
    return 0;
}

/**
 * Before dereferencing a pointer it is essential to assign a value to the pointer
 * If we attempt to dereference an uninitilized pointer it will cause runtime error
 * by referencing to anyother location in memory
 * **/