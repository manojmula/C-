/**
 * Formatting floating point numbers
 * point types
 * default when displaying floating point values is:
 * setprecision-number of digits displayed(6)
 * fixed - not fixed to specific number of ddigits after the decimal point 
 * noshowpoint -trailing zeros are not displayed
 * nouppercase- when displaying in scientificnotation
 * noshowpos- no + is displayed for positive numbers
 * 
 * these manipulators affect all further output stream
 * 
 * 
 * Formatting floating point types
 * default when displaying floating point values is:
 * setprecison-number of digits displayed(6)
 * fixed-not fixed to a specific number of digits after the decimal point
 * noshowpoint-trailing zeros are not displayed
 * nouppercase-when displaying in scientific notation
 * noshow-no+ is displayed for positive numbers
 * these manuplators affect all further output to the stream
 * Formatting floating point types -precision
 * double num{123.56789};
 * std::cout<<num<<std::endl;
 * //will display
 * 1234.57//notice precison is 6 and rounding
 * 
 * 
 * Formatting floating point types-precision
 * double num{123456789.987654321};
 * 
 * std::cout<<std::setprecision(9);
 * std::cout<<num<<std::endl;'
 * 
 * //will display
 * 
 * 
 * 123456789    //note that rounding accours
 * 
 * Formatting floating point types-fixed
 * 
 * double num{123456789.987654321};
 * 
 * std::cout<<std::efixed;
 * std::cout<<num<<std::endl;
 * 
 * //will display precision 6 from the decimal
 * 
 * 123456789.987654
 * 
 * formatting floating point types-fixed
 * 
 * double num{123456789.987654321};
 * 
 * std::cout<<std::setprecision(3)<<std::fixed;
 * std::cout<<num<<std::endl;
 * 
 * //will display precision 3 from the decimal 
 * 123456789.988
*/
#include<iostream>
#include<iomanip>

int main()
{
    double num1{123456789.987654321};
    double num2{1234.5678};
    double num3{1234.0};

    //using default settings
    std::cout<<"--Default----------------------"<<std::endl;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;

    //Note how since we cannot display in precision 2 scientific notation is used
    std::cout<<std::setprecision(2);
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;

    //Note how since we cannot display in precision 2 scientific notation is used
    std::cout<<std::setprecision(5);
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;
    
    //Note how since we cannot display in precision 2 scientific notation is used
     std::cout<<std::setprecision(9)<<std::fixed;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;

    std::cout<<std::setprecision(3)<<std::scientific;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;

    std::cout.unsetf(std::ios::scientific|std::ios::fixed);
    std::cout<<std::resetiosflags(std::ios::showpos);

    std::cout<<std::setprecision(10)<<std::showpoint;
    std::cout<<"=--precisoon 10 -showpiont-------"<<std::endl;
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<num3<<std::endl;
    return 0;
}