/**
 * Exception handling
 * throwwing an exception from a function
 * what do we return if total is zero
 * 
 * double calculate_avg(int sum,int total)
 * {
 * return static_cast<double>(sum)/total;
 * }
 * 
 * catching an exception thrown from a function
 * double average{};
 * 
 * try{
 * average = calculate_avh(sum,total);
 * std::cout<<average<<std::endl;
 * }
 * catch(int &ex)
 * {
 * std::cerr<<"You cant divide by zero"<<std::endl;
 * }std::cout<<"Bye"<<std::endl;
 * 
*/
#include<iostream>

double calculate_mpg(int miles,int gallons)
{
    if(gallons==0)
    throw 0;
    return static_cast<double>(miles)/gallons;
}

int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallons{};

    std::cout<<"Enter the miles: ";
    std::cin>>miles;
    std::cout<<"Enter the gallons: ";
    std::cin>>gallons;
    try{
    miles_per_gallons = calculate_mpg(miles,gallons);
    std::cout<<"Result: "<<miles_per_gallons<<std::endl;
    }
    catch(int &ex)
    {
        std::cout<<"Gallons cannot be zero"<<std::endl;
    }
    std::cout<<"Bye"<<std::endl;

    return 0;
}