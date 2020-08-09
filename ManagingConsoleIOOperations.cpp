/******
 * INTRODUCTION
 * 
 * Every program takes some data as input and generates processed data as following output the 
 * familiar input output proceess cycle
 * It is therefore essential to know how to provode the input data and present the results 
 * in adesired fom
 * we have in the erlier chapters used cin and cout with operators 
 * >> and << for iput and output operations 
 * But we have not so far discussed as to how to control the way the output is printed 
 * C++ supporrts a rich set of I/O functions and operations to do this
 * since these functions use the advanced features of c++ ssuch as classes derived classes and
 * virtual functions we need to know lot about them 
 * before rellay implementing the c++ I/O operations
 * rember c++ supports all of the cC's rich set of IO operational functions
 * we can use any of them in the c++ programs But we restarin from using them due to two reaons 
 * FiRST IO methods in c++ support the concept of OOp and secondly IO methods in c cannot handle user
 * defined data types such as class objects
 * C++ uses the concept od stream and stream classes to implement it IO operations with console and disk 
 * files
 * we will discuss in this chapter how stream classes support the console-oriented input 
 * output operations
 * File-oriented I/O operations will be discussed in the next chapter
 * 
 * C++ streams
 * Th eIO system in c++ is desiged to work with widely variety of divices including disks
 * tapes and terminals
 * Although each device is very different the IO system supplies an interface to the programmer that 
 * is independernt of the actual device being accessed 
 * This interface is known as stream
 * 
 * A stream is sequence of bytes 
 * It acts either as a source which the input data can be obtained or the destination to which the
 * output data is to be sent
 * The source stream that provides data to the program is called input stream  and the destination stream
 * that recives output from the program is called the output stream
 * In other wwords a program extracts the bytes from input stream and inserts bytes on the output stream
 * The data in the input stream can come from a keyboard or any other storage device
 * Similarly the data in the output stream can go to the screen or any other storage device 
 * therefore a c++ program handles data input and output 
 * independednt of the device used
 * C++ contains several pre difined stream that are automaticlaly opened when a program begins 
 * its eecution these include cin and cout which have been used very often in our earlier programs
 * we know that cin represents the input stream connected to the standard input device that is keyboard
 * and cout represent the output stream connected to the device which is usually screen
 * Note that the keyboard and screen are default options
 * we can redirect streams to other devices or files if necessaty
 * 
 * C++ Stream classes
 * 
 * TheC++ IO stream contains a hieracrchy of classes that are used to define various strens 
 * to deal with console and disk files.
 * these classes are called stream classes the below figure shows the hierarchy of the stream classes
 * used for input and output operations with console unit
 * These classes are declared in the headar file iostream
 * This file should be included in all programs that deal wihth console unit
 * 
 * As seen in the below figure ios is the base class for istream and ostream output streams 
 * which are in turn classes of iostream(input and output stream
 * )
 * The class ios is declared as the virtual base class so the only one copy of its members are inherited by the 
 * iostream
 * 
 * ios ---> istream,ostream,streambuf
 * iostream
 * isstream_withassign
 * iostream_withassign 
 * ostream_withassign
 * The class ios provides the basic support for formatted and unformaatted IO operations 
 * the class istream provides the facility for formatted and unformated input whule the class 
 * ostream through inheritance provides the facility for formatted output
 * the class iostream provides the facility for handling both input and output stream
 * threee classes namely 
 * istream_withassign
 * ostream_withassign and
 * iostream_withassign and assignment 
 * opertors to these classes
 * The below table gives the details of these classes
 * 
 * Class name   content
 * ios(general input and output stream class)-- contains basic features that are used by 
 * all other input and output classes
 * Also contains a pointer to a buffer object stream buf object
 * Declares constants and functions that are necesssary for handling formatted input and 
 * output operations
 * 
 * istream-inherts the pproperties of ios
 * declares input functions such as get()
 * getline() and read()
 * contains overloaed extraction operator>>
 * 
 * ostream(output stream)--
 * Inherits the prroperties of ios
 * and as well as declares output functions such as put() and write()
 * contains overloaded insertion operator <<
 * 
 * iostream-- ibherits the properties of ios istream and ostream through multiple 
 * inheritance and thus cotain all the input and output functions
 * streambuf-- Provides an interfearance to physical device through buffer
 * acts as a base for filebuf class used ios files
 * 
 * 
 * unformatted IO operations 
 * overloaded operators << and >>
 * we have used the object cin and cout pre defined in the iostream file
 * for the input and output of the data of vaarious types 
 * this has been made possible by overloading the operators << and as well as >>
 * to recognize all the basic types in c++
 * the >> operator is overloaded in the istream class and << is overloaded in the ostream class
 * the folloing is the general format for reading data from the keyboard
 * cin>>varaible>>varaivle2
 * varible 1 varivble2 are valid c++ varaibles names that have been declared already
 * this stamnet will cause the computer to stop execution and look for the input data 
 * from the keyboard
 * this input for this stament would be like
 * data1 data2 datan;
 * 
 * The input data are seprated by white spaces and should match the type of varaaible in the 
 * cin list space and newlines and tabs will be skipped
 * 
 * the operator >> reads input the data character by character and assigns it to the indicated
 * location
 * the reading for a variable will be terminated at the encounter of white space or a 
 * character that dose not match the desstination type
 * for example conside the followung code
 * int code
 * cin>>code;
 * 
 * suppose the following data gives an input 
 * 4258D
 * the operator will read the character upto 8 and the value 4258 is assigned to the code
 * the character D remains in the input stream and will
 * be input to the next cin statments
 * the general form for displaying data on the screen is
 * cout<<item1<<item2
 * the items item1 through itmen may variables or constants of any basic type
 * we have used such statments in number of examples illistrated in the previous chapters
 * 
 * 
 * put() and get() functions
 * 
 * these classes istream and ostream defined two member functions get() and put() respcetively
 * to handle single character input and output operations
 * these are two types of get() functions
 * we can use both get(char*) and get(void) prototypes to fecth a character including 
 * blank space tab and newline character 
 * the get(char*) version assigns the input character to its argument and the get(void)
 * version returns the input charcter
 * 
 * since these functions are member of input and output stream clases we must 
 * invoke them using a appropriate obejct
 * char c;
 * cin.get(c);
 * while(c!='\n)
 * {
 * cout<<c;
 * cin.get(c);
 * }
 * 
 * this code reads and displays a line of text(terminated by a new line character)
 * Remebr the operator >>can be also be used to read a character but it will skip white spaces and newline
 * charactre
 * the above while loop will not work if
 * cin>>c;
 * is used in the place of
 * cin.get(c);
 * the get(void )version is used as follows
 * char c;
 * c = cin.get();//cin.get(c) is replaces
 * the values returned by the function get() is assigned to the varaible c.
 * the function put() a member of ostream class can be used to output a line of text 
 * character by character 
 * for example
 * cout.p('x');
 * displays the characcetr x
 * cout.put(ch);
 * 
 * display the value of variable ch
 * the varaible ch must contain a character value we can also use number as an argument
 * to the function put()
 * for example
 * cout.put(68);
 * 
 * dispalys the character D.this statment will convert int value into char value
 * and display the character whose ASCII value is 68
 * the following segent of program reads a line of text from the keyboard and displays
 * it on th escreen
 * 
 * 
 * 
 * 
 * 
 * ********/

#include<iostream>

using namespace std;
int main()
{
    int count = 0;
    char c;

    cout<<"INPUT THE TEXT"<<endl;

    cin.get(c);

    while(c!='\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout<<"\nNumber of characters = "<<endl;

    return 0;

}

/****
 * when we typr a line of input the text is sent to the program as soon as we press the 
 * return key
 * the program then reads one character at a time using the statment cin.get(c)
 * and displays it using the statment cout.put(c)
 * The process is terminated when the newline character is encountered
 * 
 * 
 * 
 * *****/