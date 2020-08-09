/**
 * Memory allocation for objects
 * we have stated that the memory space for object is allocated when they are decaled and not when 
 * class is specified 
 * that statment is partially true
 * Actually 
 * the member functions are created and placed in the memory only once when they are defined as part of a calss specification
 * Since all of the objects belonging to that class use the same member functions , no separate space is allocated
 * for member functions when the objects are created
 * Only space for member varaibles is allocated sepearately for each object
 * Sepearte memory allocations for the objects are essentail , because the memeber varaibles will hold
 * different data for different objects
 * 
 * STATIC DATA MEMBERS
 * A data member of the class that can be qualifed as static. the properties of static member variable are similar to that of 
 * c static varaible.
 * A static variable has certain special characterstics these are
 * It is initialization to zero when the first object o the class is created
 * No other initialization is permited
 * Only one copy of that member is created for the entire class and is shared by all objects for that
 * class
 * no matter how many objects are created
 * it is visible only within the class, but its lifetime is entire program
 * Static varaibles are normally used to maintain values common to the entire class
 * For example a static data member can be used as a counter that records the occurances of all the objects
 * 
 * 
 * ***/

#include<iostream>

using namespace std;
class item{
    private:
    static int count;
    int number;

    public:
        void getdata(int a)
        {
            number = a;
            count++;
        }
        void getcount(void)
        {
            cout<<"count: ";
            cout<<count<<"\n";
        }

};

int item::  count;

int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout<<"After reading data"<<"\n";

    a.getcount();
    b.getcount();
    c.getcount();

    return 0;

}

/**
 * Note that the type and scope of each static member variable must be defined outside class defination
 * this is necessary because static data member are stored seperately rather than a part of an object
 * Since they are associated with the class itself rather than any class object .they are known as class variables
 * 
 * the static varaibles count is initialized to zero when the objects are created.
 * The count is incremented whenever the data is read into an object
 * Since the data is read into object three times the variable count is increamente three tioimes 
 *Because rgere is only one copy of the count shared by all the three objects all the three output statments cause the value 3 to be displayed
 static variables are like non-inline member functions as they are declared in a class declaration and defined 
 outside in the source file
 for instace the following defination gives count te initial value 10
 int item :: count = 10;

 
 *
 * 
 *  
 * **/