/**
 * Copy Constructor
 * We briefly mentioned about the copy constructor in other section previously
 * We used copy constructor
 * integer(integer &i);
 * in previous section of the overloaded constructors
 * As stated erlier , a copy constructor is used to declare and inititlaize an object from another object
 * For example the statment
 * integer I2(I2);
 * would define the object I2 and at the same time initilaize it to the value of I1.
 * Another forrm of this statment is
 * integer I2 = I1;
 * the process of initializing through a copy constructor is known as copy constructor
 * Remember the statment
 * I2 =I1
 * will not invoke the copy constructorHowever if I2 and I1 are objects this statment is legal
 * and simply assign the values of I1 to I2 member by member
 * This is the task of the overloaded assignment operator =
 * We shall see more about this later
 * 
 * 
 * A copy constructor takes a reference to an object of the same class as itseld as an argument
 * Let us consider a simple example of constructing using a copy constructor as shown below
 * 
 * **/

#include<iostream>

using namespace std;

class Code{
    private:
        int id;
    public:
        Code(){}
        Code(int a){
            id = a;
        }
        Code(Code &x)
        {
            id = x.id;
        }
        void display(void)
        {
            cout<<id<<endl;
        }

};

int main()
{
    Code A(100);
    Code B(A);
    Code C = A;

    Code D;
    D = A;

    cout<<"\nid of A : ";A.display();
    cout<<"\nid of B : ";B.display();
    cout<<"\nid of C : ";C.display();

    return 0;

}

/***
 * NOTE: A reference varaible has been used as an argument to the copy constructor
 * WE cannot pass the argument by value to a copy constructor
 * 
 * When no copy constructor is defined the compiler supplies its own copy constructor.
 * 
 * 
 * 
 * **/