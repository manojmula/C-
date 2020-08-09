#include<iostream>

int main()
{
    int miles{};
    int gallons{};
    float miles_per_gallon{};

    std::cout<<"Enter the miles driven:";
    std::cin>>miles;
    std::cout<<std::endl;
    std::cout<<"Enter the gallons used:";
    std::cin>>gallons;
    std::cout<<std::endl;
    
    try{
        if(gallons==0)
        throw 0;
    miles_per_gallon = miles/gallons;
    std::cout<<"Results: "<<miles_per_gallon<<std::endl;
    }
    catch(int &ex)
    {
        std::cout<<"cannot divide by zero"<<std::endl;
    }
    std::cout<<"Bye"<<std::endl;
    return 0;
}