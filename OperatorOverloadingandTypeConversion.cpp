/**
 * OPERATOR OVERLOADING AND TYPE CONVERSIONS
 * 
 * Introduction
 * Operator overloading is one of the many exciting features of c++ language
 * It is an important techniquw that has enhanced the power of extensibility of c++ 
 * We have stated more than once that c++ tries to make the user-defined data types behave in much the same
 * way as the built in data types
 * For instanv=ce C++ permits us to add two veriables of user-defined types with the same synatx that is
 * applies to the basic data types
 * this means that c++ has the ability to provide the operators with the special meaning
 * for the data type
 * the mechanism of giving such special meanings to an operator is known as operator overloading
 * 
 * Operator overloading provides flexibility option for the creation of new defination for most of the 
 * C++ operators
 * We can overload give addditional meaning to all the c++ operators except the following
 * Class memeber access operator
 * .*
 * Scope opeartor::
 * Soze of operator
 * conditional operator
 * ?:
 * The reason why we cannot overload these operators may be attributed to the fact that 
 * these operators take name example class name as thier operand insted of values as is the case with other normal operators
 * 
 * Although the semantics of an operator can be extended , we cannot change the syntax, the grametical rules
 * that govern its use such as the number of operands precedence and associtivity
 * for example
 * the multiplication operator governs will enjoy higher precedence than that of the addirional opeator
 * Remeber that when an operator is overloaded
 * its original meaning is not lost
 * For instance the operator + which has been overloaded to add two vectors can still be used to add integere
 * 
 * DEFINING OPERATOR OVERLOADING
 * 
 * To define an additional task to an operator we must specify what it means in relation
 * to the class which the operato is applied
 * This is done with the help of a special function called operator function
 * which describes
 * the task.The general form of operator function
 * return type classname::operator op(arglist)
 * {
 * function body//task defined
 * }
 * 
 * where return type is the type of value returned by the specified operation and op is the oper
 * ator being overloaded
 * operator op is the dunction name where operator is the keyword
 * 
 * Operator function must be either member function (non static) or friend function
 * A basic difference between them is that a friend function will have only one argument that is
 * unary and two for binary operators
 * while a memeber function has no arguments for unary operators and only one for binary operator
 * this is because the object used to invoke the member functions is passed implicitly and therefre is available 
 * for the member function
 * This is not the case with friend functions 
 * Arguments may be passed either by value or by reference
 * Operator functions are declared in the class using prototypes as follows
 * vector operator+(vector);
 * vector operator-();
 * friend vector operator+(vector,vctor);
 * friend vector operator-(vector)//unary minus
 * vector operator--(vector &a)
 * int operator==(vector)
 * friend int operator==(vector,vector);
 * vector is a data type of class and may represent both magnitude and directions as in physic and
 * engineering
 * or is a series of points called elements in mathematics
 * the process of overloading involves following steeps
 * 1) create a class that defines the data type that is to be used in the overloading operation
 * Declare the operator function operator op() in the public part of the class
 * It may be either a member function or friend function
 * Define the operator function to implement the required operations
 * 
 * Overloaded operator function can be invoked by expression such as
 * op x or x op
 * for unary operators
 * and x op y
 * for binary operators
 * op c or c op is interpreted as
 * operator op(x) for friend function
 * similarly the expression x op y would be interpreted as x.opertaor op(y)
 * in the cae of memeber function 
 * or 
 * operator op(x,y)
 * in case of friend function 
 * when both the forms are declared standard argument matching is applied to resolve the ambiguity
 * 
 * 
 * OVERLOADING UNARY OPERATOR
 * 
 * let us considr the unary minus operator
 * A minus operator when used as unary takes just one operand
 * We know that this operator changes the sign of an operand when applied to a basic data item
 * we will see here how to overload operator so that it can be applied to an obejc in muchthe same way 
 * is applied *
 * to an int and float varibale
 * the unary operator minus when applied to an object should change the sign of the each of its data 
 * item
 *  
*/

#include<iostream>

using namespace std;

class Space{
    int x;
    int y;
    int z;
    public:
        void getdata(int a,int b,int c);
        void display(void);
        void operator-();

};

void Space::getdata(int a,int b,int c)
{
    x = a;
    y = b;
    z = c;
}

void Space :: display(void)
{
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    cout<<"Z = "<<z<<endl;
}

void Space:: operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    Space s;
    s.getdata(10,-20,30);
    cout<<"S : ";
    s.display();

    -s;
    cout<<"-S:";
    s.display();
}

/**
 * Note: The function operator-() takes no argumeny 
 * then what dose this operator function ddo?
 * it changes the sign of data members of the object s
 * since this function is a memeber function of the same class
 * it can diresctly access the members of the object which activated it
 * 
 * Remember a statment like
 * S2 = -S1;
 * will not woek because operator -() dose not return any value
 * it can work iif the function is modified to return an object
 * friend void operator-(Space &s)
 * void operator-(Space &s)
 * {
 * s.x = -s.x
 * }
 * Note: That the argument passed by reference.It will not work if we pass argument by value becuase
 * a copy of the object is activated the call is passed to opertor-()
 * therefore the changes made inside the operator function will not reflect in the called object
 * 
 * 
 * 
*/
