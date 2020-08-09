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
 * 
 * 
 * 
 * ********/