/**
 * Exception Handling
 * if an exception is thrown but not caught in current scope c++ tries to find a handler for the exception by unwinding the stack
 * function in which the exception was not caught terminates and is removed from the call stack
 * if a try block was used to then catch block are checked for match
 * if noo try block was used or the catch handler dosent match staack unwinding occurs again
 * if the stack is unwound back to main and no catch handler hand;es the exception the program terminates
 * 
 * 
 * ***/
