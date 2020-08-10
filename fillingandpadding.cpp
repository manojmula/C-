/***
 * We have been printing the values using much larger fields than required by the values 
 * then unused positions of the firelds are filledd with white spaces by defauyi;r
 * However we can use the fill() function to fill the unused positions by any desired character
 * cout.fill(ch);
 * where ch represents the character which is to be filled in the unused positions 
 * 
 * 
 * 
 * ****/
#include<iostream>

int main()
{
    std::cout.fill('*');

    std::cout.precision(3);
    std::cout<<std::endl;
    for(int n=1;n<=6;n++)
    {
        std::cout.width(5);
        std::cout<<std::endl;
        std::cout.width(10);
        std::cout<<1.0/float(n)<<std::endl;
        if(n==3)
        {
            std::cout.fill('>');

        }

    }
    std::cout<<"\nPadding changed "<<std::endl;
    std::cout.fill('#');    //fill() reset
    std::cout.width(15);
    std::cout<<12.345678<<std::endl;

    return 0;


}