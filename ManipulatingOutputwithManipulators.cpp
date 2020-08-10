/***
 * the heade file iomanip proviedes a set of functions called manipulators which can be used to manipulate the 
 * outputfiles
 * They provide the same features as that of ios members and flags
 * some manipulators are more convinient to use than their counter parts in the class ios
 * For example two or more manipulators can be used as a chain in one statment as shown below
 * cout<<manip1<<manip2<<item;
 * cout<<manip1<<item1<<manip2<<item2;
 * this kind of concatination is useful when we want to display several columsn of output
 * The most commonly used manipulatrs are shown in the below table 
 * the table also gives their meaning and equivalents 
 * to access these manipulators we must include iomanip in the program
 * setw------setfield width ------width()
 * setprecision(int d)----set floating point precision to d------precsion()
 * setfill(int c)-----set the fill character to c
fill() 
*

 *
 * 
 * setiosflags(long f)
 * resetiosflags(long f)
 * endl--inseert new line
 * 
 * some examples of manipulators are below
 * cout<<setw(10)<<12345;
 * the statment prints the values 1234 right-adjust in the field width off 10 characters
 * the output can be madee left justified by modifying the statment
 * cout<<setw(10)<<setiosflags(ios::left)<<12345;
 * 
 * one statment can be used to formate output for two or more values
 * there is a major differeence in the way the manipulators are implemented as compared too ios member functions
 * the ios member functions return the previous format state which can be used later if necessary
 * but the manipulators dose not return the previous state
 * in case we need to save the old format state we must use the ios member functions rather than the
 * manipulators
 * 
 * cout.precision(2);//previous state
 * int p = cout.precision(4) ;current state;
 * 
 * when these statments are executed p will hold the values of 2(previous state) and the 
 * new formant state will be 4
 * we can restore the previous format state as follows
 * cout.precision(p)
 * 
 * ***/

#include<iostream>
#include<iomanip>



int main()
{
    std::cout.setf(std::ios::showpoint);

    std::cout<<std::setw(5)<<"n"
             <<std::setw(15)<<"Inverse_of_n"
             <<std::setw(15)<<"Sum_of_terms\n\n";

    double term,sum=0;

    for(int n=1;n<10;n++)
    {
        term = 1.0 / float(n);
        sum = sum + term;

        std::cout<<std::setw(5)<<n
                 <<std::setw(14)<<std::setprecision(4)
                 <<std::setiosflags(std::ios::scientific)<<term
                 <<std::setw(13)<<std::resetiosflags(std::ios::scientific)
                 <<sum<<std::endl;
    }
    return 0;
}