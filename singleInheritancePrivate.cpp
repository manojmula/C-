#include<iostream>



class B
{
    int a;
    public:
        int b;
        void get_ab();
        int get_a();
        void show_a();
};
class D:public B
{
    int c;
    public:
        void mul(void);
        void display(void);

};
void B::get_ab(void)
{
    std::cout<<"Enter the values of a and b: ";
    std::cin>>a>>b;

}
int B::get_a()
{
    return a;
}
void B::show_a()
{
    std::cout<<"a = "<<a<<std::endl;
}

void D::mul()
{
    get_ab();
    c = b*get_a();
}
void D::display()
{
    show_a();
    std::cout<<"b = "<<b<<std::endl;
    std::cout<<"c = "<<c<<std::endl;
}

int main()
{
    D d;
    //d.get_ab();wont work

}

/*
Suppose a base class and a derived class defined a function of the same name
what will happen when a derived class object invokes the function ?
in such cases the derived class fucntion superseeds the base class function 
Howevere if the derived class dose not redefine the function then the base class fucntion is to be 
called


***/