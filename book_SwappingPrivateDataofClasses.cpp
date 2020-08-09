#include<iostream>

using namespace std;

class class_2;

class class_1
{
    int value1;

    public:
        void intdata(int a)
        {
            value1 = a;
        }
        void display(void)
        {
            cout<<"value1 = "<<value1<<endl;
        }
        friend void exchange(class_1 &,class_2 &);
};

class class_2
{
    int value2;
    void indata(int a){value2=a;};
    void display(void){cout<<"value2"<<value2;}
    friend void exchange(class_1 &,class_2 &);
};

void exchange(class_1 & x,class_2 & y)
{
    int temp = x.value1;
    x.value1;
} 