/**
 * The compiler shouldd know abut the function before it is used
 * Define functions before calling them 
 * ok for small programs
 * not a practical solution for larger programs
 * tell the compiler what it needs to know eithout a full ffunction defination
 * also called forword declaration
 * placed at the beginning of the program
 * Also used in our own header files (.h)-more baout this later
 * **/

#include<iostream>

using namespace std;

void say_hello();
void say_world();

int main()
{
say_hello();
say_world();
}

void say_hello()
{
    cout<<"Hello";
}
void say_world()
{
    cout<<" World";
}