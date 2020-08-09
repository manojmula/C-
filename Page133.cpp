/**
 * MULTIPLE CONSTRUCTORS IN A CLASS
 * so far we have used two kinds of constructor .They are
 * integer(); //No args constructor
 * integer(int,int); //Two args constructor
 * In the first case, the constructor itself supplies the data values and no values are passeed bby the program.
 * In the second case,the function call passes the appropriate values from the main() . 
 * C++ permits us to use both these onstructors in the same class.
 * For example we could define the class as following
 * 
 * class Integer
 * {
 *  private:
 *      int m,n;
 *  public:
 *      integer(){m=0;n=0;}
 *      integer(int a,int b){m=a;n=b;}
 *      integer(integer &i)
 * {
 * m = i.m;
 * n = i.n;
 * }
 * };
 * this declares three constructors for an integer object 
 * the first constructor recives no arguments 
 * the second revives two arguments
 * and the third recives one integer object as an argument 
 * for example integer i1;
 * would automatically invoke the first constructor and set both m and n I1 to zero
 * the statment 
 * integer i2(20,40);
 * would call the second constructor hich will initilaze the data membeers m and n
 * I2  to 20 and 40  respectively finally statment
 * integer I3(I2);
 * would invoke the third constructor which copies the values of I2  to I3.In other words it sets the 
 * value of every data elements of I3 to value of corresponding data elements of I2.as mentioned erlier such a constructor is 
 * called copy constructor
 * we learned in chapter 4 that the process o sharing the same name by two or more functions is called
 * function overloading
 * Similarly when more than one constructor is defined in a class
 * we say that the constructor is overloaded
 *  
 * **/
#include<iostream>

using namespace std;

class Complex{

    private:
        float x,y;
    
    public:
        Complex(){}
        Complex(float a)
        {
            x = a;
            y = 0;
        }
        Complex(float a,float b){x=a;y=b;}
        Complex(Complex &i)
        {
            x = i.x;
            y = i.y;
        }

        friend Complex sum(Complex,Complex);
        friend void show(Complex);

};

Complex sum(Complex C1,Complex C2)
{
    Complex C3;
    C3.x = C1.x + C2.x;
    C3.y = C1.y + C2.y;
    return(C3);
}

void show(Complex C)
{
    cout<<C.x<<" + j"<<C.y<<"\n";
}

int main()
{
    Complex A(2.7,3.5);
    Complex B(1.6);
    Complex C;

    C = sum(A,B);
    cout<<"A = ";show(A);
    cout<<"B = ";show(B);
    cout<<"C = ";show(C);

    //Another way to initialize values(second method)
    Complex P,Q,R;
    P = Complex(2.5,3.9);
    Q = Complex(1.6,2.5);
    R = sum(P,Q);

    cout<<endl;
    cout<<"P = ";show(P);
    cout<<"Q = ";show(Q);
    cout<<"R = ";show(R);

    return 0;
}

/**
 * Let us look at the first constructor again
 * Complex()
 * it contains the empty bosy and dose not do anything
 * We must just stated that is used to create objects without any initial values
 * Remember we have defined objectts in the erlier examples without using such constructor
 * Why do we need this constructor noe
 * As pointed out erlier c++ complier has a implicit constructor which creats objects even though it
 * was not defined in the class
 * 
 * this works fine as long as we do not use any other constructor in the class
 * Howevet once we define a constructor 
 * we must also define do nothing constructor
 * this constructor will not do anything and is deffined to satisfy the compiler
 * 
 * 
*/