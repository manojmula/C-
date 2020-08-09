/**
 * Multiple inheritance
 * a class can be inherit the attributes of two or more classes as shown in the below figure
 * this is known as multiple inheritnave multiple inheritance allows us to combine the features of several existing classes 
 * as a starting point for defining new class
 * it is like a child inheriting the physical features of one parant and the intelligence of another
 * 
 * 
 * ***/
#include<iostream>

class M
{
    protected:
        int m;
    public:
        void get_m(int);
};

class N
{
    protected:
        int n;
    public:
        void get_n(int);
};
class P:public M,public N
{
    public:
        void display(void);
};

void M::get_m(int x)
{
    m = x;
}

void N::get_n(int y)
{
    n = y;
}

void P::display(void)
{
    std::cout<<"m = "<<m<<std::endl;
    std::cout<<"n = "<<n<<std::endl;
    std::cout<<"m * n = "<<m*n<<std::endl;
}

int main()
{
    P p;
    p.get_m(5);
    p.get_n(6);
    p.display();

    return 0;
}

