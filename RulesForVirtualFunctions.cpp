/***
 * Rules for virtual functions
 * when virtual functions are creted for implmemeting late binding we should abserve some basic
 * rules that satisfy compiler requirements
 * 1) Virtual functions must be member of some class
 * 2)Virtual functions cannot be static members
 * 3)They are accessed using object pointers
 * 4)A virtual function can be friend of another class
 * 5)A virtual function in the base class must be defined even though it might not be
 * used
 * 6)The prototype of the base class version of virtual function and all the derived class
 * version must be identical.If two functions with the same name have different prototypes
 * c++ considers them as overloaded functions and the virtual function mechanism is ignored
 * 7)We cannot have virtual constructors but we can have virtual distructors
 * 8)While a base pointer can point to any type of derived object,the reverse is not true
 * That is to say,we cannot use a pointer to derived class to access base class
 * 9)When a base pointer points to a derived class, incrementing or decrementing it will not make it
 * to point to the next object of the derived class
 * It is incremented or decremented only relative to its base class type
 * Therefore we should not use this method to move the pointer to the next object
 * If avirtual function is defined in the base class it need not be necessarly redefined in the 
 * derived class, In such cases calls will invoke the base function
 * 
 * 
 * PURE VIRTUAL FUNCTION
 * 
 * It is normal practice to declare a function virtual inside the base class and redefine it in the
 * derived class
 * The function inside the base class is seldom used for performing any task
 * It only serves as a placeholder
 * For exampe we have not defined any object of class media and therefore the function display() in the base class
 * has been defined as empty
 * such functions are called do nothing functions
 * A do nothing function may be defined as following
 * virtual void display()=0;
 * Such functions are called pure virtual functions 
 * A pure virtual function is a function declared in a base class that has no defination 
 * relative to the base class
 * In such cases the compiler requires each derived class to either define the function or
 * redeclare it as a pure virtual function
 * Remember that a class containing pure virtuak functions cannot be used to declare any objects of it own
 * as stated earlier such classes are called abstract classes
 * The main objective of an abstarct class is to provide some trails to the derivedclasses and to 
 * creat a base pointer required for achiving run time polymorphism
 * 
 * 
 * ***/
#include<iostream>

class Balguruswamy
{
    public:
        virtual void example()=0;

};
class C:public Balguruswamy
{
    public:
    void example()
    {
        std::cout<<"C Text book written by balguru swamy"<<std::endl;
    }
};

class oops:public Balguruswamy
{
    public:
        void example()
        {
            std::cout<<"C++ text book written by balguruswamy"<<std::endl;
        }
};

int main()
{
    Balguruswamy* arr[2];
    C e1;
    oops e2;
    arr[0] = &e1;
    arr[1] = &e2;

    arr[0]->example();
    arr[1]->example();

    return 0;
}