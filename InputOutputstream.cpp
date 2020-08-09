/***
 * I/O and streams
 * streams and I/O
 * Stream manuplators
 * Reading and writing to a text file
 * using string stream
 * 
 * 
 * C++ uses streams as an interface between the program and input and output devices
 * Independent of actual device
 * Sequence of bytes
 * Input stream provides data to thee program
 * Output stream recives data from the program
 * 
 * Common headder files
 * iostream provides defination for formatted input and output from to streams
 * provides defination for formatted input and output from /to file stream
 * iomanip provides defination for manipulators used to format stream I/O
 * 
 * 
 * commonly used stream classes
 * class         description
 * ios          Provides basic support for forrmatted and unformatted I/O opertions 
 *                Base class most other classes
 * ifstream provides for high-level input operations on file based streams
 * ofstream provides for hihj level output operations on file based straem
 * 
 * fstream  provides for high-level I/O operations on file based systems
 * derived from ofstream and ifstream
 * stringstream provides for high level I/O operations on memory based strings 
 *  Derived from istringstream and ostringstream
 * gloabal stream objects
 * cin standar input stream by default connected to standard input device(keyboard) instace of 
 * istream
 * cout standard output stream by default connected to standard output stream (console) isntance of ostream
 * cerr standard error stream - by default connected to the standard error device (console)
 * instance of ostream (unbuffered)
 * clog standard log stream by default connected to the standard log device (console) instance of ostream(unbuffered)
 * GLobal objects initialized before main executes
 * best practice is to use cerr for error messages and clog for log messages
 * 
 * C++ stream manuplators
 * Streams have useful member functions to control formatting
 * can be used on input and output streams
 * the time of the effect on stream varies
 * can be used as member function or maniplato
 * std::cout.wwidth(10); //member function
 * std::cout<<std::setw(10);
 * 
 * we will focus on manipulator usage
 * 
 * Common stream manipulators
 * Boolean
 * boolalpha,noboolalpha
 * Integer
 * dec,hex,oct,noshowbase,showpos,noshowpos,uppecase,nouppercase
 * floating point
 * fixed,scientific,setprecisoion,sho
 * stream manuplators
 * strems gave useful member functions to control formatting
 * can be used on input and output streams
 * the time of the effect on stream varies
 * can be used as member functions or as a maniplato
 * std::cout.width(10);  //member functions
 * std::cout<<std::setw(10);    //manipulator
 * we will focus on manipulator usage
 * 
 * Stream manipulators boolean
 * Formatting boolean to output streams
 * Default when displaying boolean values is 1 or 0
 * Sometimes the strings true or false are more approprite
 * std::cout<<std::boolalpha
 * formatting boolean types
 * Method version
 * std::cout.setf(std::ios::boolalpha);
 * std::cout.setf(std::ios::noboolalpha);
 * 
 * reset to default
 * std::cout<<std::resetiosflags(std::ios::boolalpha);
*/
#include<iostream>
#include<iomanip>

int main()
{
    std::cout<<"noboolalpha-default(10==10): "<<(10==10)<<std::endl;
    std::cout<<"noboolalpha-default(10==20): "<<(10==20)<<std::endl;

    std::cout<<std::boolalpha;
    std::cout<<"boolalpha-default(10==10): "<<(10==10)<<std::endl;
    std::cout<<"boolalpha-default(10==20): "<<(10==20)<<std::endl;

    std::cout<<std::noboolalpha;
    std::cout<<"noboolapha(10==10):"<<(10==10)<<std::endl;
    std::cout<<"noboolalpha(10==20):"<<(10==20)<<std::endl;

    std::cout.setf(std::ios::boolalpha);
    std::cout<<"boolalpha(10==10):"<<(10==10)<<std::endl;
    std::cout<<"boolalpha(10==20):"<<(10==20)<<std::endl;

    std::cout<<std::resetiosflags(std::ios::boolalpha);
    std::cout<<"Deafult(10==10)"<<(10==10)<<std::endl;
    std::cout<<"Default(10==20)"<<(10==20)<<std::endl;

    return 0;
}