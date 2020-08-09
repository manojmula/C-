/**
 * Friendly functions
 * we have been aphasizing throughout this chapter that the private members cannot be accessed
 * from outside the class
 * that is a non member functions cannot have an access to the private data of the class
 * However there could be a situation where we would like two classes to share a particular function.
 * For example,consider a case where two classes manager and scientist have been defined 
 * we would like to use a function income_tax() to operate on the objects of both the classes
 * in such situations c++ allows the common use of the function to be made friendly with both the classes
 * Such a function need not be a member of any of these classes
 * 
 * to make an outside function "friendly" to a class,we have to simply declare the function as
 * friend of the class as shown below
 * class ABC
 * {
 * public:
 * friend void xyz(void);//declaration
 * };
 *
 * The function declaration should be preceded by the keyword friend 
 * the function is defined elsewhere in the program like a normal c++ function
 * the function defination dose not use either the keyword friend or the scope operator ::
 * the function that are decalred with the keyword freind are known as friend functions
 * a function can be declared as a friend in any number of classes
 * a friend function although not a member of function has fulll access to the private members of the class
 * a friend possess certain rights to the private members of  the class
 * it is not in the scopr of the class to which it has been declared as a frined
 * since it is not in the scope of the class,it cannot be called using the object of that class
 * it can be invoked like a normal function without the help of the objects
 * unlike member functions.It cannot access the member names directly and has to use an object name 
 * and dot membership operator with each member name
 * it can be dclared either in the public or private part of the class without affecting its meaning
 * usually it has objects as its arguments
 * The friend functions are often used in operator overloading which we will discuss later
 * 
 *  
 * **/
#include<iostream>
using namespace std;

class Sample{
    private:
        int a;
        int b;
    public:
        void setvalue(){a=25;b=40;}
        friend float mean(Sample s);
};

float mean(Sample s)
{
    return float(s.a+s.b)/2.0;

}

int main()
{
    Sample X;
    X.setvalue();
    cout<<"Mean value = "<<mean(X);
    return 0;
}

/**
 * The friend function accesses the class varaibles a and b using the dot operator and the object 
 * passes to it
 * the function call mean(X) passes the object X by value to the friend function
 * 
 * Member functions of one class can be friend of the another class.
 * In such casses they are defined using the scope resolution operator
 * class X{
 * int fun1()
 * };
 * class y{
 * friend int x::fun1();
 * }
 * 
 * the function fun1() is a member of class X and a friend of class Y
 * 
 * we can also declare all the member functions of one class as the friend functions of another class.
 * in such cases , the class is called a friend class
 * 
 * class z{
 * friend class x;
 * }
 * **/