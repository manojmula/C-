/***
 * Pure virtual functions and abstract classes
 * 
 * Abstract class
 * Cannot initiate objects
 * These classes are used as base classes in inheritance hierarchies
 * Often reeffered to as Abstract Base classes
 * 
 * Concrete class
 * Used to instantiate objects from
 * All their member functions are defined
 * checking account,savings account
 * Faculty,staff
 * Enemy,level boss
 * 
 * Pure virtual functions and abstract classes
 * Abstract base class
 * Too generic to create objects from
 * SHape,Employee,Account,Player
 * serves as parent to derived classes that may have objects
 * Contains atleast one pure virtual functions
 * 
 * A pure virtual function
 * used to make a class abstract
 * specified with "=0 in its declaration"
 * 
 * virtual void function() = 0;//pure virtual function
 * typically do not provide implimentation
 * Pure virtual functions and abstarct classes
 * Pure virtual function derived classes must override the base classe
 * if the derived class dose not override then the derived class is laso abstract
 * used when it dosent make sense for base class to have implementation
 * but conceret classs must implement it
 * 
 * virtual void draw() = 0;//shape
 * virtual void defend() = 0;//player
 * 
 * Remember
 * Abstract base class
 * Cannot instantiated
 * Shape shape; //Error
 * Shape *ptr = new shape(); //error
 * 
 * we can use pointers and reference to dynamically refer to concrete class derived from theem
 * 
 * Shape *ptr = new Circle();
 * ptr->draw();
 * ptr->rotate();
 * **/
#include<iostream>
#include<vector>

using namespace std;

class Shape{
    private:
        //attributes common to all shapes
    public:
        virtual void draw()=0;  //pure virtual function
        virtual void rotate()=0;    //pure virtual function
        virtual ~Shape(){}
};

class Open_Shape:public Shape
{
    public:
        virtual ~Open_Shape(){}
};

class Closed_Shape:public Shape
{
    public:
        virtual ~Closed_Shape(){}
};

class Line:public Open_Shape
{
    public:
        virtual void draw() override{
            cout<<"Drawing a Line"<<endl;
        }

        virtual void rotate() override{
            cout<<"Rotating a Line"<<endl;
        }
        virtual ~Line(){}
};

class Circle:public Closed_Shape
{
    public:
        virtual void draw() override
        {
            cout<<"Drawing circle"<<endl;
        }
        virtual void rotate() override
        {
            cout<<"Rotating circle"<<endl;
        }
        virtual ~Circle(){}
};

class Square:public Closed_Shape
{
    public:
        virtual void draw() override
        {
            cout<<"Drawing Square"<<endl;
        }
        virtual void rotate() override
        {
            cout<<"Rotating s Square"<<endl;
        }
        virtual ~Square(){}
};

void screen_refresh(const vector<Shape*> &shapes)
{
    std::cout<<"Refreshing"<<std::endl;
    for(const auto p:shapes)
    {
        p->draw();
    }
}

int main()
{   
    // Shape *ptr = new Circle();
    // ptr->draw();
    // ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    vector<Shape*> shapes{s1,s2,s3};
    for(const auto p:shapes)
    {
        p->draw();
    }
    screen_refresh(shapes);

    return 0;
}

