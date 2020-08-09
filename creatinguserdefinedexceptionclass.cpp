/***
 * user defined exceptions
 * we can creat exception classes and throw instances of those classes
 * best practices
 * throw an object not a primitive type
 * throw an object by value
 * catch an object by reference(or const reference)
 * 
 * class DivideByZeroException{};
 * claass NegativeValueException{};
 * ***/
#include<iostream>

class DivideByZeroException{};
class NegativeValueException{};


double calculate_mpg(int miles,int gallons)
{
    if(gallons==0)
    throw DivideByZeroException();
    if(gallons<0||miles<0)
    throw NegativeValueException();

    return static_cast<double>(miles)/gallons;
}

int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallons{};

    std::cout<<"Enter the miles travelled: ";
    std::cin>>miles;
    std::cout<<std::endl;
    std::cout<<"Enter the gallons consumed: ";
    std::cin>>gallons;

    try{
        miles_per_gallons =calculate_mpg(miles,gallons);
 }
        catch(DivideByZeroException &ex)
        {
            std::cout<<"You have tried to divide with zero"<<std::endl;
        }
        catch(NegativeValueException &ex)
        {
            std::cout<<"You have given negative value"<<std::endl;
        }
        
   return 0;
}
