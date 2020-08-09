/***
 * Formatting integer types
 * default display integer values is
 * dec(base 10)
 * noshowbase -prefix used to show hexadecimal or octal
 * nouppercase-when displaying a prefix and hex valuees it must be lower case
 * noshowpos- no + is displayed for positive numbers
 * 
 * these manipulators affect all further output to the stream
 * 
 * 
 * **/
#include<iostream>
#include<iomanip>

int main()
{

    int num{255};
    int num2{-255};

    //Displaying using different bases
    std::cout<<std::dec<<num<<std::endl;
    std::cout<<std::hex<<num<<std::endl;
    std::cout<<std::oct<<num<<std::endl;

    std::cout<<std::dec<<num2<<std::endl;
    std::cout<<std::hex<<num2<<std::endl;
    std::cout<<std::oct<<num2<<std::endl;

    //Display using the base prefix for hex and oct 

    std::cout<<std::showbase;
    std::cout<<std::dec<<num<<std::endl;
    std::cout<<std::oct<<num<<std::endl;
    std::cout<<std::hex<<num<<std::endl;

    std::cout<<std::dec<<num2<<std::endl;
    std::cout<<std::oct<<num2<<std::endl;
    std::cout<<std::hex<<num2<<std::endl;

    //Display the hex value in uppercase

    std::cout<<std::showbase<<std::uppercase<<std::endl;
    std::cout<<std::hex<<num<<std::endl;
    std::cout<<std::hex<<num2<<std::endl;

    return 0;
}