/**
 * What is exception handling
 * what do we throw and catch exceptions
 * how dose it affect flow of control
 * Defining our own exception classes
 * the standard library exception hierarchy
 * std::exception and what()
 * Basic concepts of exception handling
 * dealing with extrodinary sitautiosn
 * indicates that an extraordinary situation has been detected or has occured
 * program can be deal with extraordinary in suitable manner
 * 
 * what casuse exception
 * insufficient resources
 * missing resources
 * invalid operations
 * range voilations
 * underflows or overflows
 * illegal data and many others
 * Exception safe
 * when your code handles exception
 * terminology used in c++ 
 * Exception 
 * An object or primitive type that signals that an error occured
 * throwing an exceptionn (raising an exception)
 * your code has detected that error has occured or will occur
 * the place where the errror occured may not know hor to handle the error
 * Code can throw an exception describing the errror to another part of the program that knows 
 * how to handle the error
 * 
 * catching an exception (handl the exception
 * code that handles the exception
 * may or maynot caue the program to terminate
 * )
 * C++ syntax for exceptional haandling
 * 
 * throw 
 * throws an exception
 * followed by an argument
 * 
 * try{code that may throw an exception}
 * you place code that may throw an exception in a try block
 * if the code throws an exception the try block is exited
 * the trow exception is handeled by a catch handler
 * if no catch handler exists the program teerminates
 * 
 * catch(Exception ex){code to handle the excepion}
 * code that handles exception
 * can have multiple catch handlers
 * may or maynot cause the program to terminate
 * 
 * Exception handling
 * Divide by zero example
 * what happens if total is zero
 * crash or overflow?
 * it depends
 * double average{};
 * average = sum/total;
 * 
 * Divide by zero example
 * 
 * double average{};
 * try{ //try block
 * if(total==0)
 * throw 0;     //throw the exception 0
 * average = sum/total; //wont execute if total ==0
 * }
 * catch(int &ex)//exception handler
 * {
 * std::cerr<<"cant devide by zero"<<std::endl;
 * }
 * std::cout<<"Program continues"<<std::endl;
 * **/
#include<iostream>

int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    std::cout<<"Enter the miles";
    std::cin>>miles;
    std::cout<<std::endl;
    std::cout<<"Enter the gallons";
    std::cin>>gallons;
    std::cout<<std::endl;

    if(gallons!=0){
    miles_per_gallon = static_cast<double> (miles)/gallons;
    std::cout<<"Results: "<<miles_per_gallon<<std::endl;
    }
    else
    {
        std::cerr<<"Sorry,can't divide by zero"<<std::endl;
    }
    
    std::cout<<"Bye"<<std::endl;
    return 0;
}