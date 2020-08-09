/*********
 * VIRTUAL FUNCTIONS
 * as mentioned earlier 
 * polymorphism referes to the property by which objects belong to different classes 
 * are able to respond to the same message
 * But in different forms
 * an essential requirement of polymorphism is therefore the ability to rfer to objects 
 * withought any regarding to the classes
 * This is necessitates the use of a single pointer varaible to refer to the objeects of different
 * classes
 * Here we use the ponter to base class to refer to all the derived class 
 * Always exeecutes the function in base class
 * The compiler simply ignores the address of the erived class
 * The compiler imply ignore contents of the pointe and choose the member function that matches the 
 * typr of pointer
 * How do we then achive polymorphism 
 * it is achived using what is known as virtual functions
 * 
 * when we use the same function name in both the base and the derived classes
 * the function in the base class is declare das virtual using the keyword virtual preceding 
 * its normal declaration
 * when a function is made virtual
 * c++ determines which function to use at run time based on the type of obejct pointed to the base pointer 
 * rather than the type of pointer 
 * Thus by making the base pointer to pint different objects can extend different versions
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * *********/

#include<iostream>

class Base{
    public:
        void display()
        {
            std::cout<<"\nDisplay Base class"<<std::endl;
        }
        virtual void show()
        {
            std::cout<<"Show base"<<std::endl;
        }

};

class Derived : public Base
{
    void display()
        {
            std::cout<<"\nDisplay Derived class"<<std::endl;
        }
        void show()
        {
            std::cout<<"Show Derived"<<std::endl;
        }
};
int main()
{
     Base B;
    Derived D;
    Base *bptr;

    std::cout<<std::endl<<"Pointer to base"<<std::endl;
    bptr = &B;
    bptr->display();
    bptr->show();
    std::cout<<std::endl<<"bptr points to derived"<<std::endl;
    bptr = &D;
    bptr->display();
    bptr->show();

    return 0;
}
/**
 * one importnatt point to remember is that we must access virtual functions through the use of pointers
 * declared as a pointer to the base class
 * why cant we use the object name (dot) operator the same way we achived as any other member function to 
 * call the virtual function
 * we can but remember run time polymorphism is achived only when a virtual function is accesses
 * through a pointer to the base class
 * 
 * Let us take an example wghere virtuall functions are implemented in practice
 * Consider a book shop whicjh sells both books and video tapes
 * we can cretate a class known as media that stores the title and price of publication
 * we can then create derived classes one for storing the number of pages in a book
 * and nother storing the playing game time of a tape
 * The classes are implemented in 
 * a function display() is used in all the classes to display the class contents
 * Notice that the function display() has been ddeclared virtiuel in media the base class
 * In the main program we cretate heterogenous list of pointers to type media as shown below
 * media *list[2] = {&book1,&take1};
 * the base pointers list[0] ad list[1] are initialized with address of objects 
 * book1 and tape1 respectively
 *  
 * 
 * ***/
#include<iostream>
#include<cstring>

class media
{
    protected:
        char title[50];
        float price;
    public:
        media(char *s,float p)
        {
            strcpy(title,s);
            price = p;
        }
        virtual void display(){}//empty virtual function
};

class book:public media
{
    int pages;
    public:
        book(char *s,float a,int p):media(s,a)
        {
            pages = p;
        }
        void display();
};
class tape:public media
{
    float time;
    public:
        tape(char *s,float a,int t):media(s,a)
        {
            time = t;
        }
        void display();
};
void book::display()
{
    std::cout<<std::endl<<"Title : "<<title<<std::endl;
    std::cout<<"Price : "<<price<<std::endl;
    std::cout<<"Pages : "<<pages<<std::endl;
}

void tape::display()
{
    std::cout<<std::endl<<"Title : "<<title<<std::endl;
    std::cout<<"Price : "<<price<<std::endl;
    std::cout<<"Time : "<<time<<std::endl;
}

int main()
{
    char *title = new char[30];
    float price,time;
    int pages;

    //Book detailes
    std::cout<<std::endl<<"ENTER BOOK DETAILS"<<std::endl;
    std::cout<<"Title : ";std::cin>>title;
    std::cout<<"Price : ";std::cin>>price;
    std::cout<<"Pages : ";std::cin>>pages;

    book book1(title,price,pages);

    //Tape details
    std::cout<<std::endl<<std::endl;
    std::cout<<"ENTER TAPE DETAILS"<<std::endl;
    std::cout<<"Title : ";std::cin>>title;
    std::cout<<"Price : ";std::cin>>price;
    std::cout<<"Time : ";std::cin>>time;
    
    tape tape1(title,price,time);

    media *list[2] = {&book1,&tape1};

    std::cout<<std::endl<<"MEDIA DETAILS";

    std::cout<<std::endl<<"=========BOOK=============";
    list[0]->display();//displays book details

    std::cout<<std::endl<<"==========TAPE DETAILS=========";
    list[1]->display();//displays tape details

    return 0;
}
