/****
 * Polymorphism
 * Polymorphism means one name multiple forms
 * it can be broadly categorized into twwo forms as shown below
 * 
 * Ploymorphism
 * compile time polymorphism and Run time Polymorphism
 * function overloading operator coverloading
 * virtual functions
 * 
 * COMPILE TIME POLYMORPHISM
 * Compile time polymorphism simply means that an object is bound to its function call at the compile time
 * that means there is no ambifuilty at the compile time avout which function is to be linked
 * to a particular function call
 * This mechanism is called early binding or static binding or static linking
 * 
 * In c++ compile time polymorphism is achived in two ways function overloading and operator overloading 
 * we have already seen the example of function overloading and operator oveloading 
 * However what happens when multiple functions with the same name and paramenters (order and number and type are defined)
 * in both base and derived classes
 * For instance consider the following program
 * In this example d.show() function call overroides the show() function defination in the base class
 * to make the object d specifically callshow() function we have used the class resolution operator
 * 
 * NEED for runtime polypmorphism
 * The use of class resolution operator is resolving the ambiduity works fine for us
 * But what if we want to build a large application that should be scalable that means it caan be 
 * expandd in further to add more features
 * in such situation it could be tedious to modify the code which imlements static binding 
 * this is shwre run-time polymorphism is required 
 * It defers the linking of a function call to a particular class much later that is at run time
 * this it is known which function will be invioked till the object is actually created the function call during
 * the programs execution
 * this pocess is reffered as dynamic binding
 * In c++ run-time polymorpjhoisnm is achived with the help of virtual functions Before we 
 * learn more about virtual functions, lets first undertand how pointers to derived class work
 * 
 * POINTERS TO DERIVED CLASS
 * we can use pointers not only to base objeccts but also to the objects of the derived class
 * Pointers objects of a base class are type compatibale with pointrs to objects of derived class
 * Therefore a single pointer varaiable cna be made to pint objects belonging to different classes
 * For exampke 
 * 
 * if B is a base class and D is a derive class from B
 * Then a pointer declared as a pointer too B can be also be pointer to D
 * Consider the following 
 * B *cptr;
 * B b;
 * D d;
 * cptr = &b //cptr points to object b
 * we can make cptr to pint to object d as follows
 * cptr = &d this is perfeclty valid with c++ because d is an object deerived from the class B
 * However there is a problem in accessing cptr to access the publcic member of the derived class
 * D
 * using the cptr we can access only those members which are inherited from B and not the members that are 
 * originally belonging to D 
 * In case a member of D has a same name as one of the member of that of B then any reference to that 
 * memeber by cptr will always access the base class member
 * Although c++ permits a base pointer to pint to any object derived fom the base
 * the pointer cannot be directly usd to access all the members of the derived class
 * we may have to use another pointer decalred as a pointer of the derived class
 * 
 * *
 */
#include<iostream>

class BC
{
    public:
        int b;
        void show()
        {
            std::cout<<"b = "<<b<<std::endl;
        }
};
class DC :public BC
{
    public:
        int d;
        void show()
        {
            std::cout<<"d = "<<d<<std::endl;
        }
};

int main()
{
    BC *bptr;
    BC base;
    bptr = &base;

    bptr->b = 100;
    std::cout<<"bptr points to the base object"<<std::endl;
    bptr->show();

    DC derived;
    bptr = &derived;
    bptr->b = 200;
    std::cout<<"bptr now points to derived object"<<std::endl;
    bptr->show();

    DC *dptr;
    dptr = &derived;
    dptr->d = 300;

    std::cout<<"dptr is now derived pointer "<<std::endl;
    dptr->show();

    std::cout<<"Using ((DC *)bptr)"<<std::endl;
    ((DC *)bptr)->d = 400;
    ((DC *)bptr)->show();

    return 0;
}

/**
 * We have used the statment 
 * bptr->showw();
 * two times
 * first when bptr points to the base object and the second time bptr is made to point the 
 * derived object 
 * but both the time it executes BC::show() and displays the content of the base object 
 * However statments 
 * dptr->show();
 * displays content of the derived object this shows that although a base pointer can be made to pint 
 * any number of derived objects 
 * it cannot directly access the members defined by derived class
 * **/