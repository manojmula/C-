/****
 * A constrictor cannot be virtual
 * There are some valid reasons that justify the reason
 * First to create a object the constructor of the object class must be of the same type of the class
 * But this is not possible with virtually implemented constructor 
 * Second at all the timr of calling constructor the virtual table would not been created to
 * resolve any virtual function calls
 * Thus virtual constructor itsld would not have places to look up to
 * It is not possible to create constructor as virtual
 * 
 * A virtual destructor however is pretty much fessable in c++ 
 * In fact its use if often promotted in certain situations
 * one such sitation is when we need to make sure that the different distructors in a 
 * inheritance hierarchy are called in order 
 * When base class pointer is refering to the derived class object
 * it must be noted  that here the order of calling of destructors in an inheritance heirarchy is
 * opposite too that of constrcutors
 * 
 * SUMMARY
 * POLYMORPHISM simply means that one name having multiple forms
 * There are two types of polymorphism , namely compile timr and run timr polymorphsm
 * Functions and operrators overloading are examples of compile time polymorphism 
 * The overloaded memmber functions are selected by amatching arguments both type and number
 * The compiler knos this information at the compile time and therefore compiler is able to
 * select the appropriate function for the particular call at the compile time itself
 * This is selected dynamically at the run timeand therefore compiler is able to select the appropritae 
 * function for a particular call at the compile timritseld
 * This is called static bnding or static linking
 * It means that an object is bound to its function call at compile time
 * In run time polymorphism , an approprite member function is selected while the program is running
 * C++ supports run time polymorphism with help of virtual functions 
 * it is called dynamic binding because the appropriate function is selected dynamically at the
 * run time
 * Dynamic binfding requires use of poiners to the objects and one of the most powerful features of c++
 * Object pointers are useful in creating objects at run time
 * It can be usd to access the public members of an object
 * along with the arrow operator
 * A this pointer refers to an object that currently invokes a member function
 * For example the function call a.show() will set the poinet yhis to the address
 * of the object a
 * Pointers to objects of a base classtype are competeble with pointers to the object 
 * of derived class
 * Therefore we can use single pointer varaible to point to objects of base class as well
 * as derived class
 * 
 * when a function is made virtual c++ determined which function to use at run time based on the type
 * of object pointed to by the base pointer
 * rather than the type of the pointer
 * By making the base pointer to pint to different objects 
 * we can excute different versions of the virtual function
 * run time polymorphism is achived only when a virtual function is accessed used a pointer to the
 * base class
 * It cannot be achived using object name along with a dot operator to access the virtual function
 * we have virtual destructors but not virtual constructors'
 * 
 * If a virtual function is defined in the base class and is not defined in the derived class
 * in such cases the respective calls will invoke the base class funtion
 * A virtual  function equated to zero is called a pure virtual function
 * it is a function declared in a base class that has no defination relative to the base class
 * A ckass containing such pure virtual functions are called abstract class
 * ***/