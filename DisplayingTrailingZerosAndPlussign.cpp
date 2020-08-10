/*****
 * If we print the numbers 10.75,25.00 and 15.50 using a field width of say eight positions 
 * with two wwidth precision then the output will be
 * 10.75 25 15.5
 * Note that trailing zeros in the second and third term items have been trucated
 * 
 * certain situations such as a list of prices of items or salary statments of employees require 
 * trailing zeros to be shown 
 * the above output would look better if printed as shown below
 * 10.75
 * 25.00
 * 15.50
 * 
 * the setf() can be used with the flag ios::showwpoint as a single argument to achive this 
 * form of output
 * cout.setf(ios::showpoint);//dispays trailing zeros
 * 
 * would cause cout to display trailing zeros and trailing decimal points 
 * Under default precision the value 3.25 will be displayed as 3.250000.
 * remeber the default precision assumes a precision 6 digits
 * similarly a plus sign can be printed before the positive sign using the following
 * cout::setf(ios::showpos);
 * the flags such as showpoint and showpos ddo not have ay bit fields and therefore are used 
 * as single arguments in setf()
 * this is possible because of setf() has been declared as overloaded function in the class ios
 * the list of flasgs that do not possees a naded bit field
 * these flags are not mulutually exclusive so can be set or cleared indepnedtly
 * ios::showbase        use base indicator on output
 * ios::showpos         print + before positive number
 * ios::showpoint       show trailing decimal points and zero
 * ios::uppercase       use uppercase for hex output
 * ios::skipus          skip white spaces on input
 * ios::untibuf         flush all streams after insertion
 * ios::stdio           Flush stdout and stderr after insertion
 * 
 * 
 * ******/

#include<iostream>
#include<cmath>

int main()
{
    std::cout.fill('*');
    std::cout.setf(std::ios::left,std::ios::adjustfield);
    std::cout.width(10);
    std::cout<<"VALUE";
    std::cout.setf(std::ios::right,std::ios::adjustfield);
    std::cout.width(15);
    std::cout<<"SQRT OF VALUE"<<std::endl;

    std::cout.fill('.');
    std::cout.precision(4);
    std::cout.setf(std::ios::showpoint);
    std::cout.setf(std::ios::showpos);
    std::cout.setf(std::ios::fixed,std::ios::floatfield);

    for(int i = 1;i<=10;i++)
    {
        std::cout.setf(std::ios::internal,std::ios::adjustfield);
        std::cout.width(5);
        std::cout<<i;
        std::cout.setf(std::ios::right,std::ios::adjustfield);
        std::cout.width(20);
        std::cout<<sqrt(i)<<std::endl;

    }

    //floatfield change
    std::cout.setf(std::ios::scientific,std::ios::floatfield);
    std::cout<<"\nSQRT(100)"<<sqrt(100)<<std::endl;

    return 0;

}

/**
 * NOTE:
 * The flags set by setf remian effective until they are reset or unset
 * A format flag can be reset any number of times in a program
 * we can apply more than one format controls jointly on an output value
 * The setf() sets the speecified flags and leaves the others unchanged
 * 
 * 
 * ***/