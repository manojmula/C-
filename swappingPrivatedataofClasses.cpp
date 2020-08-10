/***
 * the function add has arguments from both XYZ and ABC
 * When the function add() is declared as a friend2
 *class ABC;
 this is known as farward declaration 
 * 
 * as pointed out earlier a friend function can be called by reference
 * in this case local copies of the objects are not made
 * instead a pointer to address of object is passed and the called function directly 
 * works on the actual object used to call
 * this method can be used to alter the values of the private members of the class
 * Remeber altering the values of private members is against the basic principle of 
 * data hiding
 * it should be used only when absolutely necessary
 * 
 * program below shows the common use of friend function to exchange the private values of 
 * two classes
 * the function is called by reference
 * **/
#include<iostream>

class class_2;

class class_1{
        int value_1;
    public:
        void intdata(int a){value_1=2;}
        void display(void){std::cout<<value_1<<std::endl;}
        friend void exchange(class_1&,class_2&);
};
class class_2{
        int value_2;
    public:
        void intdata(int a){value_2=a;}
        void display(void){std::cout<<value_2<<std::endl;}
        friend void exchange(class_1 &,class_2&);
};

void exchange(class_1 &c1,class_2 &c2)
{
    int temp;
    temp = c1.value_1;
    c1.value_1 = c2.value_2;
    c2.value_2 = temp;
    
}

int main()
{
    class_1 C1;
    class_2 C2;

    C1.intdata(100);
    C2.intdata(200);

    std::cout<<"Values before exchange : "<<std::endl;
    C1.display();
    C2.display();
    exchange(C1,C2);

    std::cout<<"Values after exchange : "<<std::endl;
    C1.display();
    C2.display();

    return 0;
}