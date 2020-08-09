/**
 * We have just seen how to overload unary operator
 * the same mechanism can be used for binary operator
 * In the chapetr 6 we illistrated how to add two complex numbers using a friend function 
 * C = sum(S,B); //function notation
 * 
 * was used the function notation can be replaced by a natural looking expression
 * C = A+B;// Arthimetic notation
 * by overloading the + operator using an operator+() function
 * The program below illistartes
 * how
 * 
 * 
 * ***/
#include<iostream>

using namespace std;

class Complex{
    private:
        float x;
        float y;
    public:
        Complex();
        Complex(float real,float img)
        {
            x = real;
            y = img;
        }
        Complex operator+(Complex);
        void display(void);
};

Complex Complex::operator+(Complex c)
{
    Complex temp;
    temp.x = c.x + x;
    temp.y = c.y + y;
    return temp;
}

void Complex::display(void)
{
    cout<<x<<" + j"<<y<<endl;

}

int main()
{
    Complex C1,C2,C3;
    C1 = Complex(2.5,3.5);
    C2 = Complex(1.6,3.5);
    C3 = C1 + C2;

    cout<<"C1 = ";C1.display();
    cout<<"C2 = ";C2.display();
    cout<<"C3 = ";C2.display();

    return 0;
}