/*****
 * Formatting flags ,bitfields and setf()
 * we have seen that when the function width() is used ,
 * 
 * the vaule weather text or number is printed right justifief in the field width created
 * But it is usal parctice to print the text in left justified
 * How do we get a value printed left justified
 * or how do we get a floating point number printed in the scientific notation
 * 
 * the setf() a member function of the ios class can provide answers to these and many other
 * formatting qestions the setf() setf stands for setflag function can be used as following
 * cout.setflag(arg1,arg2)
 * 
 * the arg1 is one of the formatting flags defined in the class ios
 * the format action required for the output
 * another ios constant arg2 known as bit field specifies the group to which the formatting 
 * flag belongs
 * 
 * the table below shows the bit fields flags and their format actions
 * There are three bit fields and each has a group format flags which are mutually exclusive
 * Flags and bitfields  for setf function()
 * cout.setf(ios::left,ios::adjustfield);
 * cout.setf(ios::right,ios::setfield);
 * left justifief ios::left ios::adjustfield
 * right justified ios::right ios::adjustfield
 * Padding after sign or base ios::internal ios::adjustfield
 * fixed point ntation ios::fixed ios::floatfield
 * scientific notation ios::scientific ios::floatfield
 * Decimal notation ios::dec ios::basefield
 * octal notation ios::oct ios::basefield
 * Hexadeciaml notation ios::hex ios::basefield
 * 
 * 
 * Note that the first argumentt should be one of the group members of the second argument
 * 
 * 
 * *****/
#include<iostream>

int main()
{
    int a;
    std::cout<<"Enter a number : ";
    std::cin>>a;

    std::cout.setf(std::ios::dec,std::ios::basefield);
    std::cout<<"\nThe Decimal field is : "<<a<<std::endl;;
    std::cout.setf(std::ios::hex,std::ios::basefield);
    std::cout<<"Hexadecimal form : "<<a<<std::endl;
    std::cout.setf(std::ios::oct,std::ios::basefield);
    std::cout<<"Octal form : "<<a<<std::endl;

    return 0;
}
