/***
 * We should note the following features of the function
 * 1) it recives only one complex type argument explicitly
 * 2)It returns a complex type value
 * It is a memebr function of complex
 * The function is expected to add two complex values and return a complex value as the result but recive only one
 * value of an argument where dose other value come from?
 * Now let us look at the statment that invokes the function
 * C3 = C1 + C2 // invokes operator+() function
 * we know that a member function can be invoked only by an object of the same class
 * Here the object C1 takes the responsibility of invoking the function and
 * C2 plays the role of an argument that is passed to the function
 * The above invocation statment is equivalent to 
 * C3 =  c1.operator+(c2); //usual function call syntax
 * Therefore in the operator+() function the data memebrs of c1 are accessed directly and the data
 * members of c2(that is passed as an argument ) are accessed using the dot operato
 * Thus both the objects are available for the function 
 * For example temp.x = x + c.x;
 * c.x refers to the object c2 and x refers to as object c1
 * temp.x is real part of temp that has been created specially to hold the
 * results of addition C1 and C2
 * The function returns the complex temp to be assigned to C3
 * AS a rule in overloading of binary operators the left hand operand is used to invoke the
 * operator function and the right hand operand is passed as an argument
 * We can avoid the creation of the temp object by replacing the entire function body by the following statments
 * what dose it mean when we use a class name with an argument list
 * return Complex((x.c+x),(c.y+y));
 * when the compiler comes accross a statment like this it invokes an appropriate constructor initializes an object
 * with no name and returns the contents of copying into object
 * such an object is called temperary object and goes out of scope as soon as the contents are 
 * assigned to another object
 * Using temporary objects can make the code shorter more efficient and better to read
 * 
 * 
 * overloading binary operators using friends
 * ================================================
 * As stated erlier 
 * friend functions may be used in the place of memebr functions for overloading a binary operator
 * the only difference is that afriend operator requires two arguments to be explicitly passed to it
 * While a member function requires only one
 * the complex number program discussed in the previous section can be modified using a friend operator function
 * as follows
 * 1) Replace the member function decalaration by the friend function
 * friend Complex operatior+(Complex,Complex);
 * redefine the operator function as follows
 * Complex operator+(Complex a,Complex b)
 * {
 * return Complex((a.x+b.x),(a.y+b.y));
 * }
 * 
 * in this case the statment
 * C3 = C1 + C2;is equivalent
 * C3 = operator+(C1,C2);
 * 
 * In most cases we will get the same reults by use of either friend function or a membeer function why
 * then an alternative is made availbele
 * there are certain situations where we would like to use a friend function rather than member funtion
 * for instance consider the situation where we need to use two different types of operands for a
 * binary operator ,say one an object and another built in type data as shown below
 * A = B+2
 *  where A and B are objects of the same type means class
 * This will work for a member function but the statment 
 * A = 2 + B will not work
 * this is because the left hand operand whcih is responsible for invoking the fmember function should be
 * an object of the same class
 * however friend function allows both approachs how
 * it may be recalled that an object need not be used to invoke friend function but can be used 
 * to be passedd as an argument
 * thus we can use a friend function with a built in type data as a left hand operand and an object 
 * as the righ hand opearand
 * the below program illustrates tis using scalar multiplication of vector 
 * it aslo shows how to overload the input and output operatirs << and >>
 * 
 * 
 * **/

#include<iostream>
#include<istream>
#include <streambuf>
#include <cstdlib>

const int size = 3;

class Vector
{
    private:
        int v[size];
    public:
        Vector();
        Vector(int *x);
        friend Vector operator*(int a,Vector b);
        friend istream & operator >>(istream &, Vector &);
        friend ostream & operator <<(ostream &, Vector &);

};

Vector::Vector()
{
    for(int i = 0;i<size;i++)
    {
        v[i]=0;
    }
}

Vector::Vector(int *x)
{
    for(int i = 0;i<size;i++)
    {
        v[i] = x[i];
    }
}

Vector operator*(int a,int b)
{
    Vector c;

    for(int i = 0;i<size;i++)
    {
        c.v[i] = a*b.v[i];
    }
    retuen c;
}

Vector operator*(Vector b, int a)
{
    Vector c;

    for(int i = 0;i<size;i++)
    {
        c.v[i] = b.v[i] *a;
    }
}

istream & operator >>(istream &din,Vector &b)
{
    for (int i = 0;i<size;i++)
    {
        din>>b.v[i];
    }
    return din;
}

ostream & operator <<(ostream &dout,Vector &b)
{
    for(int i = 0;i<size;i++)
    {
        dout<<b.v[i];
    }

    return dout;
}
int x[size]={2,4,6};

int main()
{
    Vector m;           //Invokes constructor 1
    Vector n = x;       //Invokes constructor 2

    cout<<"Enter the elements of vector m "<<endl;
    cin>>m;
    cout<<endl;
    cout<<"m = "<<m<<endl;

    Vector p,q;

    p = 2*m;
    q = n*2;

    cout<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"q = "<<q<<endl;

    return 0;
}
/***
 * ith eprogram overloads the operator *two times 
 * thus overloading the operator funcionn operator*() itself
 * in both the cases the functions are explicitly passed two arguments and they are invoked like
 * any other function based on the type of argument
 * this enables us to use both the forms of scalar multiplication as 
 * p = 2 * m; 
 * q = n * 2;
 * 
 * the program and its output are largely self explinatery 
 * the first constrcutor vector();
 * constructs whos all elements are zero
 * vector m 
 * creates a vector m and initializes all the elemets to zero
 * vvector (int &x);
 *  creates a vector and copies all the elements pointed by the argument x into iy therefore
 * the statments
 * int x[3] = {2,4,6};
 * vector n = x;
 * 
 * creates n as a vector with componenets 2,4,6
 * 
 * ***/