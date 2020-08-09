/*****
 * Function
 * Defination prototype 
 * Parameters and paa-by-value
 * return statment
 * default parameter vlaues
 * overloading
 * passing arrays to function
 * pass by reference
 * inline funvtions
 * auto return type
 * recursive function
 * 
 * third party libraries(functions and classes)
 * our own function and classes
 * function allow the modularization of a program
 * seperate code into logical self contained units 
 * these units can be reused
 * 
 * Boss/Worker anology on functions
 * write your code to the function specification
 * understand what the function dose
 * understand what information the function needs
 * understand what the function returns
 * understand any errors the function may produce
 * understand any performace constrains
 * dont worry how the functions work internally
 * 
 * ***/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double num{};

    cout<<"Please Enter a number(double)";
    cin>>num;

    cout<<"The square root of the number is : "<<sqrt(num)<<endl;
    cout<<"The cubed root of the number is :"<<cbrt(num)<<endl;

    cout<<"The sine of the number is : "<<sin(num)<<endl;
    cout<<"The cosine of the number is : "<<cos(num)<<endl;

    cout<<"The ceil of the nuber is : "<<ceil(num)<<endl;
    cout<<"The floor of the given number is : "<<floor(num)<<endl;
    cout<<"The round of the given number is : "<<round(num)<<endl;
}