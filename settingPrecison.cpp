/******
 * Setting Precision:precision()
 * By defualt the floating numbers are printed with six digits after the decimal point
 * However we can specify the number of digits to be displayed after the decimal point while 
 * printing the floating point numbers
  * This can be done by using the precision() member function as follows
  * cout.precision()
  * where d is the number of digits to the rright of the decimal point 
  * For example the statments
  * cout.precision(3);
  * cout<<sqrt(2)<<endl
  * Not that unlike the function width() and precision() retins the setting effect until it 
  * is reset 
  * that is why we have declared only one statment for the prrecision setting which is used by all the three outputs
  * 
 * 
 * 
 * ******/
#include<iostream>
#include<cmath>

int main()
{
    std::cout<<"Precision set to three digits"<<std::endl<<std::endl;
    std::cout.precision(3);

    std::cout.width(10);
    std::cout<<"VALUE";
    std::cout.width(15);
    std::cout<<"SQRT_OF_VALUE"<<std::endl;

    for(int i=1;i<5;i++)
    {
        std::cout<<std::endl;
        std::cout.width(8);
        std::cout<<i;
        std::cout.width(13);
        std::cout<<sqrt(i);
    }

    std::cout<<std::endl<<"Precision set to 5  digits"<<std::endl<<std::endl;
    std::cout.precision(5);
    std::cout<<" sqrt(10) = "<<sqrt(10)<<std::endl<<std::endl;

    std::cout.precision(6);
    std::cout<<" sqrt(10) :"<<sqrt(10)<<" Default settings "<<std::endl;

    return 0;
}
/**
 * Observe the following from the output
 * 1)The output is rounded to the nearst cent 
 * 2)the trailing zeros are truncated
 * 3)Precision setting stays in effect until it is reset
 * 4)Defult precision is 6 digit
 * 
 * 
 * ***/