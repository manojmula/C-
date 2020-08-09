/***
 * PARAMETERIZED CONSTRUCTORS
 * 
 * the constructor integer() defined above initilazes the data members of all the objects to zero 
 * however in practice it may be necessary to initialize the varous data elements to different objects with 
 * different values
 * when they are created in c++
 * permits us to achive this objective by passing arguments to the constrcutors function when the objects are created
 * the constructor that can take arguments are called parameterized constructors
 * 
 * The cconstructor integer() may be modified to take arguments as shown below
 * class Integer{
 * 
 * int m,n;
 * public:
 *  integer(int x,int y)
 * {
 *  m =x;
 *  n = y;
 * }};
 * 
 * when a constructor has been parameterized the object declaration statment such as 
 * integer int1;
 * may not work 
 * we must pass the initial values as arguments to the constructor function when an object is declared
 * this can be ddone in two ways
 * ->By calling the constructor explicitly
 * ->by calling the constructor implicitly
 * The following declaration illistartes the first method
 * integer int1 = integer(0,100); //Explicit call
 * this stamnet created an integer object int1 and passes the values 0 and 100 to it 
 * the second one folllows implecit 
 * integer int1(0,100) //implecit call
 * this method is called short hand method is used very often as it is shorter looks better and
 * is easy to implement
 * Remember when the constrcutor is parameterized we must provide appropriate arguments for the constructor
 * the program comming next demonstrates the passing of argument of the constructor functions
 * 
 * the constructor dunction can also be defined as inline functions 
 * the parameterized contructor can be of any type except that of the class to which it belongs 
 * for example
 * class A
 * {
 * public:
 *  A(A)
 * }is illegal
 * However a constructor can accept a reference to its own class as a parameter thus the statment
 * class A
 * {
 * public:
 * A(A&);
 * };
 * is valid in such cases the constructor is called copy constructoe
 * 
 * 
 * 
 * **/

/**
 * This program defines a class called point that stores the value x and y co-ordinates of the point
 * the class uses parameterizd constructors for
 * initializing the class objects
 * 
*/
#include<iostream>

using namespace std;

class Point
{
    private:
        int x;
        int y;
    public:
        Point(int m,int n)
        {
            x = m;
            y = n;
        }
        void display(void)
        {
            cout<<"\nX: "<<x<<"\n and \n Y : "<<y<<endl;
        }
};
int main()
{
    Point p1(1,1);
    Point p2(5,10);
    cout<<"Point p1 = ";
    p1.display();
    cout<<"Point p2 = ";
    p2.display();

    return 0;
}
