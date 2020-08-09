/**
 * Throwing multiple exceptions
 * from a function
 * gallons is zero
 * miles or gallons is negative
 * throwing an exception from a function 
 * throw different type eexceptions for each condition
 * 
 * double calculate_mpg(int miles,int gallons)
 * {
 * if(gallons==0)
 * throw 0;
 * if(miles<0||gallons<0)
 * throw std::string{"Negative value error"};
 * 
 * return static_cast<double>(miles)/gallon;
 * }
 * catching an eexception thrown from a function
 * double miles_per_gallon{};
 * try{
 * miles_per_gallon = calculate_mpg(miles,gallon);
 * std::cout<<miles_per_gallon<<std::endl;
 * }
 * catch(int &ex)
 * {
 * std::cerr<<"You cannot devide by zero"<<std::endl;
 * 
 * }
 * catch(std::string &ex)
 * {
 * std::cerr<<ex<<std::endl;
 * }
 * std::cout<<"Bye<<std::endl;"
 * **/
#include<iostream>

double calculate_mpg(int miles,int gallon)
{
    if(gallon==0)
    throw 0;
    if(gallon<0 || miles<0)
    throw std::string{"Negative value error"};
    return static_cast<double>(miles)/gallon;

}

int main()
{
    int miles{};
    int gallon{};
    double miles_per_gallon{};

    std::cout<<"Enter the miles";
    std::cin>>miles;
    std::cout<<"Enter gallons";
    std::cin>>gallon;

    try{
        miles_per_gallon=calculate_mpg(miles,gallon);
        std::cout<<"Result:"<<miles_per_gallon<<std::endl;
    }
    catch(int &ex)
    {
        std::cerr<<"Tried to divide by zero"<<std::endl;
    }
    catch(std::string &ex)
    {
        std::cout<<ex<<std::endl;
    }

    std::cout<<"Bye"<<std::endl;

}