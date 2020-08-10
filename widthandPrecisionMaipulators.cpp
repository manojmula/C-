/***
 * 
 * 
 * 
 * ***/
#include<iostream>

int main()
{
    float pi=22.0/7.0;
    int i;
    std::cout<<"Value of PI : "<<std::endl;
    for(i=1;i<=10;i++)
    {
        std::cout.width(i+1);
        std::cout.precision(i);
        std::cout<<pi<<std::endl;
    }
    return 0;
}