/****
 * We can design our own maipulators for certain special purpose
 * the gerneral form for creating a minuplator without any argument is
 * ostream & manipulator(ostream &output)
 * {
 * return output;
 * }
 * 
 * here the manipulator is the name of the manupulator under creation
 * the following function defines a manipulator
 * The following function defines manipulatoe called unit that displys inches
 * 
 * ostream &unit(ostream &output)
 * {
 * output<<"Inches"
 * return output;
 * }
 * 
 * The statment 
 * cout<<36<<unit;
 * 
 * will produce the following output
 * 36 inches
 * we can also create manipulators that could represent a sequence of operators
 * example
 * ostream & show(ostream & output)
 * {
 *  output.setf(ios::showpoint);
 * }
 * 
 * 
 * 
 * 
 * 
 * **/

#include<iostream>
#include<iomanip>

std::ostream & currency(std::ostream & output)
{
    output<<" Rs";
    return output;
}

std::ostream & form(std::ostream & output)
{
    output.setf(std::ios::showpos);
    output.setf(std::ios::showpoint);
    output.fill('*');
    output.precision(2);
    output<<std::setiosflags(std::ios::fixed)
            <<std::setw(10);

        

}
int main()
{
    std::cout<<currency<<form<<7864.5<<std::endl;

    return 0;
}