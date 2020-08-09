/**
 * As we know the constructors play a important role in initilaization of objects 
 * we did not use them earlier in the derived classes for the sake of simplicity 
 * one important thing to note here is tat as long as no base class constructor takes an arguments
 * the derived class need not have constructor functionsHowever i
 * if any base class contains contructor with one or more arguments 
 * then it is mandatory for the derived clas to have a constructor and pass the arguments with one 
 * or more arguments
 * to the base class constructors 
 * remember that while applying inheritance we usually create objects using the derived class 
 * thus it makes sense for the derived class to pass the argukments to the base class constrcuctor 
 * when bboth derived and base classes contain constructors and base constructor is executed first and then 
 * the constructor in derived class is executed
 * 
 * In case of multiple inheritance the base classes are constructed in the order they appear in the
 * declaration of the derived class
 * similarly in a multilevel inheritance the constructors will be executed in the order of inheritance
 * since the derived class takes the responsibility of supplying intital values to its base classes
 * we supply the initial values that are requred by all the classes together
 * when a derived class object is declared
 * how are they [assed ]
 * to the base class constructors so that they can do thier job
 * c++ supports a special argument passing mechanism for such situations
 * the constrcutor of the derived class receives the entire list of values as its arguments and passes them 
 * on to the base class constructor in the order in which they are declared in the derived class
 * the base constructor are called and executed before executing the statments in the body of the derived class
 * The general form of defininf a derived constructor is
 * derived constructor
 * base1(arg1);
 * base2(arg2);
 * 
 * the header line of the derived constructor function contains two parts sepearted by the colon
 * the first provides the declaration of the arguments that are passe to the derived constructoe and the second 
 * part lists the function class to the base constructor
 * 
 * base1(arglist1)
 * base2(arglist2)
 * are function ccalls to base constructors base1()
 * base2()
 *  and therefore arglist1 and arglist3 etc represents 
 * the constructors for virtual classes are invoked before any non virtual base classes
 * if there are multiple virtual base classes they are invoked in the order in which they are declared
 * Any non-virtual bases are then constructed before the derived class constructor is executed
 * 
 * 
 * ****/

#include<iostream>

class Alpha
{
    int x;
    public:
        Alpha(int i)
        {
            x = i;
            std::cout<<"Alpha Initialized"<<std::endl;
        }
        void show_x(void)
        {
            std::cout<<"x = "<<x<<std::endl;
        }


};

class Beta
{
    float y;
    public:
        Beta(float j)
        {
            y=j;
            std::cout<<"Beta Initialized"<<std::endl;
        }
        void show_y(void)
        {
            std::cout<<"y = "<<y<<std::endl;
        }
};
class Gama:public Beta,public Alpha
{
    int m,n;
    public:
        Gama(int a,float b,int c,int d):
        Alpha(a),Beta(b)
        {
            m = c;
            n = d;
            std::cout<<"Gama Initialized"<<std::endl;
        }
        void show_m_and_n(void)
        {
            std::cout<<"m = "<<std::endl;
            std::cout<<"n = "<<std::endl;
        }

};

int main()
{
    Gama g(5,10.75,20,30);
    std::cout<<std::endl;
    g.show_x();
    g.show_y();
    g.show_m_and_n();
}

/**
 * Beta is initialized first 
 * although it appears second in the derivded constructor
 * this is because it has been declared first on the derived headder line
 * also note that alpha(a) and beta(b) are function calls
 * Therefore the parameters should not include types
 * C++ supports another method of initialization of the class objects
 * this method uses what is known as intitialization list in the constructor function
 * this takes the following farm
 * constrcutor(arglist):intialization-section
 * {
 * assignment-section
 * 
 * }
 * 
 * the assignment section is nothing but the body of the constructor function and is used to assign initial values
 * the part immediately following the colon is known as intialization section 
 * we can use this section to provide intitial values to the base constructors and also to initialize its own
 * class
 * members
 * This means that we can eather the section inititlaization tthe data memebrs of the constructor class
 * the initilixation sction basically contains a list of initilization seperated by commas 
 * the list is known as initilization list 
 * class XYZ
 * {
 * int a;
 * int b;
 * public:
 * XYZ(int i,int j)
 * :
 *
a(i),b(j) * }

This program will initializre a to 2 and b to 6
Note how the data members are initialized just by using the variable name followed by the initilization value
in the paranthesis like a function call
any of the parameters of the argumnets list may be used as initilization values and the items in the list may be
in any order 

 * **/

#include<iostream>

class Alpha
{
    int x;
    public:
    Alpha(int i)
    {
        x = i;
        std::cout<<"Alpha constructor"<<std::endl;
    }
    void show_alpha(void)
    {
        cout<<"x = "<<x<<std::endl;
    }
};

class Beta
{
    float p,q;
    public:
    Beta(float a,float b):p(a),q(b)
    {
        std::cout<<"Beta constructor initialized"<<std::endl;
    }
    void show_beta(void)
    {
        std::cout<<"p = "<<p<<std::endl;
        std::cout<<"q = "<<q<<std::endl;
    }

};
class Gama:public Beta,public Alpha
{
    int u,v;
    public:
        Gama(int a,float b,float c):Alpha(a),Beta(b,c),u(a),v(b)
        {
            std::cout<<"Gama constructor Initialized"<<std::endl;
        }
        void show_gama(void)
        {
            std::cout<<"u = "<<u<<std::endl;
            std::cour<<"v = "<<v<<std::endl;
        }
};

int main()
{
    Gama g(2,4,2.5);

    std::cout<<"Display number values = "<<std::endl;

    g.show_alpha();
    g.show_beta();
    g.show_gama();

    return 0;
}

//The argument of the derived constructor gamma contains only three parameters a,b,c which are used to 
//initialize the live data contained in three classes
