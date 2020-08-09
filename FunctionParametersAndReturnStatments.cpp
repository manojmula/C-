/**
 * Function parameters are 
 * when we call a function we can pass in data to that function
 * in the function call they are called arguments
 * in the function defination they are called parameters
 * they must match in number, order and in type
 * 
 * pass-by value
 * when you pass data into function it is passed by value
 * a copy of the data is passed to the function
 * whatever change you make to the parameter in the function dose not affect the argument that was passed in
 * Formal vs Actual parameters
 * Formal parameters-the parameters defined in the function header
 * actual parameters- the parameters used in the function call the arguments
 * function return statment
 * IF a dunction returns a value then it must use a return statment that returns a value
 * if a function dose not return a value(void) then the return statment is optanal
 * return statment can occur anywhere in the body of the function
 * return statment immideatly exists the function
 * we can have multiple return statments in a function
 * avoid many return statments in a function
 * the return value is the result of function call
 * 
 * **/
#include<iostream>
using namespace std;

int add_number(int,int);

int main()
{
    int result{0};
    result = add_number(100,200);
    cout<<"The result of adding two numbers is :"<<result<<endl;
    return 0;
}

int add_number(int a, int b)
{
    return a+b;
}