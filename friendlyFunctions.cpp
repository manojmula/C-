/****
 * we have been emplasizing throughout this chapter that the private membeers cannot be accessed
 * fromm outsidee the class
 * that is a non member function cannot have access to the private data member of the class
 * However there could be a situations wwhere we would like two classes too share a particulra function
 * for example consoideer a classes manager and scientist
 * have been defined
 * we would like to use a function income_tax() to operate on both the objects of these
 * classes
 * in such situations c++ allows use to use the common function to be made friendly 
 * with both the classes
 * thereby allowing the function to have access to private data of these classes 
 * such function need not be a member of any of these classes
 * to make an outside function friendly to a class
 * we have to simply declre this function as a friend function as a friend of the class as shown below
 * class ABC
 * {
 * public:
 * friend void xyz(void)
 * }
 * the function declaration should be preceded by the keyword friend
 * the function is defined elsewhere in the program like a normal c++ function 
 * the function defination dose not use either the keyword friend or scope 
 * operator ::
 * the functionns that are delared as a friend are known as friend functions
 * a function can be declared as the friend function in any number of classes.a friend function 
 * although not a member function has full access rights to the prrivate members of the class
 * a frined possess certain special characterstics:
 * It is not in the scope of the class to which it has been declared as friend
 * Science it is not in scope of the class it cannot be callined using the object of the class
 * it can be invoked like a normal function without any help of obhct
 * unlike member functions it cannot acces the memebrs directly by names ad has to use object name
 * and dot membership operator with each member name
 * it can be declared either in the public or the private parts of the class without affecting its meaninf
 * usually it has the objects as arguments
 * The friend functions are usually used in operator overloading
 * 
 * 
 * 
 * ****/

#include<iostream>

class sample{
    int a;
    int b;
    public:
        void setvalue(){a=25;b=40;}
        friend float mean(sample s);
};

float mean(sample s)
{
    return float(s.a+s.b)/2.0;
}

int main()
{
    sample X;
    X.setvalue();
    std::cout<<"Mean value = "<<mean(X)<<std::endl;

    return 0;
}

/*****
 * The friend function accesses the class varaibles a and b using the dot operator and the object passed
 * to it
 * the function call mean(x) passess the object x by value to the frriend function
 * member fucntions of one class can be friend functions of another class
 * in such casses
 * 
 * member functions of one class can be friend functions of another class
 * in such cases they are defined using the cope resolution operator as shown below
 * 
 * class X
 * {
 * 
 * };
 * class Y
 * {
 * frriend int X::fun1();
 * 
 * };
 * The function fun1() is a member of class X and a frind of class Y
 * we can also declare all the member functions of one class as the friend functions of another class
 * in such cases the class is refered as friend class
 * This can be specified as follows
 * class Z
 * {
 * friend class X
 * 
 * }
 * 
 * 
 * 
 * ****/
#include<iostream>

class ABC;  //Forward declaration

class XYZ
{
    int data;
    public:
        void setvalue(int value)
        {
            data = value;
        }
        friend void add(XYZ,ABC);//friend function declaration
};

class ABC
{
    int data;
    public:
        void setvalue(int value)
        {
            data = value;
        }
        friend void add(XYZ,ABC);
};
void add(XYZ obj1,ABC obj2)
{
    std::cout<<"Sum of data values of XYZ and ABC objects using friend functions = "
            <<obj1.data+obj2.data;
}
int main()
{
    XYZ X;
    ABC A;
    X.setvalue(5);
    A.setvalue(15);
    add(X,A);
    return 0;
}

/**
 * 
 * 
 * 
 * ***/