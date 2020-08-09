/**
 *Files,streams and I/O
 field streams and I/O
 default when displaying floating point values is
 setw-not set by default
 leeft-when no field width,right-when using field wifth
 fill-not set by default -blank space is used
 some of the manipulators affect only the neext data elements out on the stream
 * 
 * default 
 * double num{1234.5678};
 * std::string hello{"Hello"};
 * 
 * std::cout<<num<<hello<<std::endl;
 * 
 *  ***/
#include<iostream>
#include<iomanip>

void ruler()
{
    std::cout<<"\n12345678901234567890123456789012345678901234567890"<<std::endl;
}

int main()
{
    int num1{1234};
    double num2{1234.5678};
    std::string hello{"Hello"};

    //Defaults
    
    std::cout<<"\n--Defaults--------------------------------------"<<std::endl;
    ruler();
        std::cout<<num1
            <<num2
            <<hello
            <<std::endl;

    //defaults per line

    std::cout<<"\n-Defaults -one per line---------------------------------"<<std::endl;
    ruler();
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<hello<<std::endl;

    //st field width to 10
    //note the default justification is right for num1 only
    std::cout<<"\n-width 10 for num1-----------------------------------"<<std::endl;
    ruler();
    std::cout<<std::setw(10)
                    <<num1
                    <<num2
                    <<hello
                    <<std::endl;

    //set field width to 10 for the first 2 outputs
    //note the default justification is right for both
    //std::cout<<"-\n--width 10 for num1 and num2-------------------------"<<std::endl;
    //ruler();
    std::cout<<"\n--width 10 for num1------------------------------"<<std::endl;
    ruler();
    std::cout<<std::setfill('-');
    std::cout<<std::setw(10)<<std::left <<num1
             <<std::setw(10)<<std::left <<num2
             <<std::setw(10)<<std::left <<hello
             <<std::endl;
             

}