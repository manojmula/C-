/**
 * What is opertaor overloading
 * using traditional operators such as +,=,* etc with user-defined types
 * allows user defined types to behave similar to built in types
 * can make code more readable and writeable
 * not done automatically(except for assignment operators)
 * they must be explicitly defined
 * 
 * 
 * What is Operator overloading in the perspective of objects
 * suppose we have a Number class that models any number
 * using functions
 * Number result = multiply(add(a,b),divide(c,d));
 * using member methods:
 * Number result = (a.add(b)).multiply(c.divide(d));
 * 
 * Suppose we have a number class that models any number
 * using overloaded operators
 * Number result =  (a+b) * (c/d)
 * the majority of c++ operators can be overloaded
 * the following operators cannot be overloaded
 * ::
 * :?
 * .*
 * .
 * sizeof
 * 
 * basic rules of opertaor overloading
 * Precedence and Associativity cannot be changed
 * arity cannot be changed(i.e cannot make the division opertor unary)
 * cannot overload operators for prrimitive type(e.g int, double,etc)
 * cannot create new opertors
 * [],(),-> and the assignment operator(=) must be declared as member methods
 * Other operators can be declared as member methods or global functions
 * 
 * 
 * **/

#include<iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring empty;             //no args constructor
    Mystring larry("Larry");    //overloaded constructor
    Mystring stooge{larry};     //copy constructor

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}