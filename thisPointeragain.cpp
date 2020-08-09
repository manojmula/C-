/**
 * C++ uses a unique keyword called this to represent an object that invokes a member function
 * this is a pointer that points to the object for which this function was called
 * for example the function call
 * A.max() will set the pointer this to the address of object A.
 * The starting address is the same as the address of the first varaible in the class structure
 * class ABC
 * {
 * int a;
 * 
 * };
 * the private varaible a can be used directly inside a member function like
 * a = 123;
 * we can aslo use the following statment to do the same job
 * this->a = 123;
 * 
 * since c++ permits the use of shorthand form of a =123 we have not been using the pointer 
 * this explicitly so far
 * however we have been implicitly using this pointed when overloading operators using member function 
 * recal that when a binary is overloaded using a member function
 * we pass only one argument to the function 
 * the other argument is implicilty passed using the pointer this 
 * one important application of the pointer this is to return the object it points to
 * for example statment 
 * return *this;
 * inside the member function will return the object that invoked the function
 * this statment assumes importnace when we want to compare two or more objects onside the member functions
 * and return the invoking objects as a result 
 * person &person::great(person &x)
 * {
 * if x.age>age
 *  return x;
 * else 
 * return *this;
 * }
 * 
 * max = A.greater(B);
 * The function will return object B(argument object) if the age of the person B is greater that od A otherwise will return A
 * 
 * 
 * 
 * ****/
#include<iostream>

using namespace std;

class Person{
    char name[20];
    float age;
    public:
        Person(char *a,float a)
        {
            strcpy(name,s)
        }

}