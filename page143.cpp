/***
 * The constructor first creats a vector pointer to an int of size d1
 * then allocates iterlatively an int type vector from off size d2
 * pointed by each element p[i]
 * thus the space for each elemet is of d1xd2 matrix is allocated from free store as shown above
 * 
 * CONSTANT OBJECTS
 * 
 * we may create and use constant objects using const keyword before object declaration
 * for example
 * we may create X as constant object of the class matric as follows
 * const Matrix X(m,n);
 * 
 * Any attempt to modify the values of m and n will generate compile time eerror
 * further a constant object can call only constant membe functions
 * as wwe know a const member function prototype or function defination where the keyword const appears after the function signature
 * whenever const obejcts try to invoke nonconst member function the compiler generates an error
 * 
 * DESTRUCTORS
 * 
 * A destructor as the name implies , is used to destroy yhe objects that have been created by a constructor 
 * Like a constructor the destructor is a member function whose name is same as the class name but the preceded by tide
 * foe example the destructor for the class integer can be defined as shown below
 * ~integer()
 * {}
 * 
 * A destructor never takes any argument nor dose it return any values 
 * it will be invoked implicitly by the compiler upn exit from program or block of function as the case may be
 * to clean up the storage that is no loger accessible
 * It is good practice to decalre destructors  in a program since it release memory space for further use
 * whenever new is used to allocate memory in the constructor we should delete to free that memory 
 * for example
 * matrix::matrix()
 * {
 *  for(int i = 0;i<d1;i++)
 * delete p[i];
 * delete p;
 * }
 * this is required because when the pointers to the object go out of the scope a destructor is not called
 * implecitly 
 * the example beelow illitartes that the destructor has been invoked implicitly by the compiler
 * **/

#include<iostream>

using namespace std;

int count = 0;

class Test{

    public:
        Test()
        {
            count++;
            cout<<"\n\nConstructor Mag: Object Number: "<<count<<" created.."<<endl;
        }
        ~Test()
        {
            cout<<"\n\nDestructor Mag:Object number "<<count<<" destroyed.."<<endl;
            count--;
        }
};

int main()
{
    cout<<"Inside the main block..."<<endl;
    cout<<"\nCreating firs object T1";

    Test T1;

    {
        //Block 1
        cout<<"\n\nInside block 1..";
        cout<<"\n\nCreating two more objects T2 and T3..";
        Test T2,T3;
        cout<<"\n\nLeaving Block 1";

    }

    cout<<"\n\nBack inside the main block ";

    return 0;
}

/**
 * Note: A class constructor is called everytime an object is created.
 * Similarly as the program control leaves the current block the object in the block start getting destroyed 
 * and distructors are called for each one of them 
 * Note that the objects are destroyed in the reverse order of thier time of creation 
 * Finally when the main block is exited destructors are called
 * corresponding to the remaining 
 * objects present inside the main
 * similar functionality as depicted is program can be attained by using static data member with sonctrictors and
 * destructors 
 * we can ddeclare static integer varaible count inside the class to keep the track of the number of objects instations
 * Being static ,the varaible will be initialized only once
 * ie when the first object instace is created
 * During all subsequent object creations
 * the constructor will increement the count varaible is one
 * Similarly the destructor will decrenemeent the count varaible by one as and wwhen an object gets destroyed to relize this
 * seario the code in the program 6.7 mwill change slightly as shown below
 * the primary use of the destructor is in freeing the memory reserved by the object before its get destroed
 * 
 * 
 * 
 * ***/