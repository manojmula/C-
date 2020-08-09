/**
 * How do function call work
 * functions use the function call stacl
 * Anaalogus to stack of books
 * LIFO-Last in first out
 * push and pop
 * stack Frame or activation Record
 * Functions must return control to function that called it
 * Each time a function is called we create a new activation record and it to stack
 * when a function terminates we pop the activation record and return
 * Local variables and function parameters are allocated on the stack
 *  
 * stack size is finitr-stack overflow
 * **/

#include<iostream>

using namespace std;

int func2(int &x,int y,int z){
    x+=y+z;
}

int func1(int a ,int b)
{
    int result {};
    result = a+b;
    func2(result,a,b);
    return result;
}

int main()
{

    int x{10};
    int y{20};
    int z{};
    z=func1(x,y);
    cout<<x<<endl;
    return 0;
}

/**
 * What happens when main calls func1(or any other function)?
 * there are other ways to achive the same resutl
 * 
 * main:
 *        push space for the return value
 *        push space for parameters
 *        push the return address
 *          transfer control to func1(jump)
 * 
 * func1:
 *          push the address of the previous activation record
 *          push any register values that will need to be restored before returning to the caller
 *          [erform the code in func1
 *          restore the register values
 *          restore the previous activation record(move the stack pointer)
 *          store any function result
 *          transfer control to the return address(jump)
 * main:
 *          pop the parameters
 *            pop the return value
 * ***/