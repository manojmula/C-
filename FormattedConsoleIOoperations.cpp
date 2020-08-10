/*****
 * Formatted console input output operations
 * c++ support a numbber of featurres that could be used for formatting the output
 * These features include
 * ios class functions and flags
 * manipulators
 * user friendly output functions
 * ios class contains large number of memeber functions that would help us to format the 
 * output in a number of ways the most important one is 
 * width()-to specify the required field size for displaying output value
 * precision() to specify the number of digits to be display after the decimal
 * point of a float value
 * fill() -to specify a character that is used to fill the unseen portion of a field
 * setf()- to specify format flags that can control the form of output display such as left 
 * justification and right justification
 * unsetf()- to clear the flags specified
 * 
 * Manipulators are special functions that can be included in the IO statments to alter the
 * format parameters of a stream
 * Table 10.3 shows some important manipulator functions that are frequently used 
 * to access these manipulators the file iomanip should be included in the program
 * 
 * setw() =width()
 * setprecision=precision()
 * setfill()=fill()
 * setiosflag()=setf()
 * resetiosflag()=unset()
 * in addition to these functions supported by the c++ library we can create our own manipulator
 * functions to provide any special output formts
 * the follwoing sections willl provide details of how to use the pre-defined formatting functions and how to create new ones
 * 
 * Defining field width:width()
 * We can use the wwidth() function to define the width of a field necessary for the
 * output of an item
 * sincee it os a member function we have to use an object to invoke it as shown below
 * cout.width(w);
 * 
 * where w is the field width number of columns
 * The output will be printed in a field of w characters wode at the right end of the field
 * The width() function can specify the field width for only one item the item that follows
 * it imidetly
 * after prindting one item as per the specifications it will
 * revert back to the default 
 * cout.width(5);
 * cout<<543<<12<<std::endl
 * 
 * the value is right justified in the first five columns
 * the specification width(5) dose not retain the setting for printing the number 12
 * remeber that the field width should be specified for each item seperately
 * c++ never truncates the values and therefore if the 
 * specifeid field width is smaller than the size of the value to be printed 
 * c++ expands the field to the fit value
 * Program demonstrates how the function width() works
 * 
 * 
 * 
 * ********/


#include<iostream>

int main()
{
    int item[4] = {10,8,12,15};
    int cost[4] = {75,100,60,99};

    std::cout.width(5);
    std::cout<<"ITEMS";
    std::cout.width(8);
    std::cout<<"COST";

    std::cout.width(15);
    std::cout<<"TOTAL VALUE"<<std::endl;

    int sum = 0;

    for(int i = 0;i<4;i++)
    {
        std::cout.width(5);
        std::cout.left;
        std::cout<<item[i];

        std::cout.width(8);
        std::cout.left;
        std::cout<<cost[i];

        int value = item[i] * cost[i];
        std::cout.width(15);
        std::cout.left;
        std::cout<<value<<std::endl;
        sum += value;
    }

    std::cout<<std::endl<<"Grand Total = ";

    std::cout.width(2);
    std::cout<<sum<<std::endl;

    return 0;

}