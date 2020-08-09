/**
 * OBJECTS AS FUNCTION ARGUMENT
 * like any other data type, an object may be used as function argument.This can be donr in two ways
 * a copy of the entire object is passed to the function
 * Only the address of the objec is transfered to the function
 * the first methood is called pass by reference since  acopy of the object is passed to the function
 * any changes made to the object inside the function do not affect the object that is used to call the function
 * the second one is called pass by reference and when an object is passed the function called works directly on the actual 
 * object used in the call
 * this means that any changes made to the object inside the function is reflected to the object 
 * the pass by reference method is more efficient since it requires to pass only the address of the 
 * object and not the entire object
 * Program below illistarates the use of objects as function arguments
 * it performce the addition of time in the hour and minute format
 * 
 * 
 * **/
#include<iostream>
using namespace std;

class Time{
    private:
    int hours;
    int minutes;
    public:
    void getTime(int h,int m);
    void putTime(void);
    void sumTime(Time t1,Time t2);
};

void Time::getTime(int h,int m)
{
    hours = h;
    minutes = m;
}

void Time :: putTime(void)
{
    cout<<"Hours : "<<hours<<endl;
    cout<<"Minutes : "<<minutes<<endl;
}

void Time::sumTime(Time t1,Time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes%60;
    hours = hours + t1.hours + t2.hours;
}

int main()
{
    Time T1,T2,T3;

    T1.getTime(2,45);
    T2.getTime(3,30);

    T3.sumTime(T1,T2);

    cout<<"T1 = ";T1.putTime();
    cout<<"T2 = ";T2.putTime();
    cout<<"T3 = ";T3.putTime();

    return 0;

}
/***
 * An object can be passed as an argument to a function 
 * However such functions can have access to the public member functions only through the objects passed 
 * as argument to it
 * These functions cannot have access to the private data members
 * 
 * **/