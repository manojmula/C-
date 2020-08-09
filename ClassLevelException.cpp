/***
 * Class level exceptions
 * exceptions can be thrown from within a class
 * method:
 * these work the same as the functions as we have seen
 * constructor
 * constructor may fail 
 * constructors do not return any values
 * throw an exception in the constructor if you cannot initilize an object
 * 
 * destructor 
 * ddo not throw an exception from your destructor
 * 
 * the c++ standard library exception hierarchy
 * c++ provides a class hirerachy of exception classes
 * std::exception is a base class
 * all subclassses implemented the what() virtual function
 * we can create our own user defined exception subclasses
 * 
 * virtual const chat *what() const noexpect;
 * class illigalBalanceException:public std::exception
 * {
 * public:
 *  illegalBalanceException() noexpect = default;
 *  ~illegalBalanceException() =default;
 * virtual const char* what() const noexpect
 * {
 * return "Illegal balance exception";
 * }
 * }
 * **/