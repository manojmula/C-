/**
 * overview of pointer
 * Declaring pointers
 * storing addresses in pointer dereefereecing pointerss 
 * dynamic memory allocation 
 * pointer arthemetic
 * pointers and arrays
 * pass by reference with pointers
 * consts and pointers using pointers to functions
 * potential pointer pitfalls
 * what is reference
 * review passing refereence to functions
 * const and references
 * reference varible for range based for loops
 * potential reference pitfalls
 * raw vs smart pointers
 * what is a pointer
 * pointer is a variable
 * what can be at that address?
 * another variable
 * a function
 * pointers to variables or function
 * if x is an integer variable and its value is 10 then i can declare a pointer that points to it
 * to use the data that the pointer is pointing to you must know its types
 * why use pointer?
 * cant i just use the varibale or function itself?
 * yes but not always
 * inside funcions, pointers can be used to access data that are defined outside the function.
 * those variables may not be in scope so you cant access them by thier name
 * pointers can be used to operate on arrays very efficiently
 * we can allocate memory dynamically on the heap or free store
 * this memory dosent even have a variable name
 * the only way is to get to it is via a pointer
 * ith OO.pointer are how polymorphism work
 * can access specific address in memory 
 * useful in embeded and system applications
 * Declaring the pointers
 * Always initialize pointers
 * uninitialized pointers contain garbage value data and can point anywhere
 * initializing to zero or nulptr represents zero
 * implies that the pointer is pointing nowhere
 * if you dont initialize a pointer to point to a variable or function then you should initialize it to 
 * nullptr to make it null
 * Initializing pointer variables to 'point to nowhere
 * Accesing pointer address
 * the address operator
 * variablees are stores in unique addresses
 * Unary operator
 * Evaluates to the address of its operand
 * operadn cannot be constant or expression that evaluates to temp vales
 * **/

#include<iostream>

using namespace std;

int main()
{
   int *p;

   cout<<"Value of P: "<<p<<endl;

   cout<<"Address of P: "<<&p<<endl;

   cout<<"Size of P: "<<sizeof p <<endl;

   p = nullptr;

   cout<<"Value of P : "<<p<<endl;
}