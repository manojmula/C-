/**
 * We have just seen how to increase the capability of the existing class wihout moddifying it
 * we have also seen that a private member of the base class cannot be inherited and therefore 
 * it is not available for the derived class directly
 * what do we do if the private data needs to be inherited by the derived class 
 * this can be accomplished by modifying the visibility limit of the private memebers by making it public
 * this would make iy accessible to all the other functions of the program
 * thus takinf away the advantage of data hiding
 * c++ provides a third visibility modifier
 * protected which serves the limited perpouse in inheritance 
 * a member declred as protected is accessible by the meber function within it class and any class
 * immediately derived from it
 * it cannot be accessed by the functions outside these two classes 
 * a class can now use all theree visibility as illistrated below
 * class alpha
 * {
 * private:
 *  //optional
 * //visible to member function
 * //within its class
 * protected:
 *  visible to member function
 *  of its own and derived class
 * public:
 * visible to all functions
 * in the program
 * when a protected member is inherited in public mode 
 * it becomes protected in the derived class to and therefore is accessible by th member functions of the 
 * derived class
 * it s also ready for further inheritance 
 * a protected meber , inherited in the private mode derivation
 * because private in the derived class
 * although it is availaable to the member function of the dericed class
 * it is not availbel for further inheritanve
 * since private members cannot be inherited it so 
it is possible to inherit a base class in protected mode known as protected derivation
in the protected derivation both the public and protected members of the base class become protected
mebers
of the perived class
now let u review the access control to the private and protected members of the class
what are thee various functions that have access to these member class
they could be
a function that is a friend of the class
a member function of the class that is a fiend of the class
a memeber function of the derived class
while the friend functions and the member functions of the friend class can have direct acccess
to both private and protected data 
the meember functions derived class directly access only protecetd daata
however they can access the prrivate data through the member funcyoons of the base class
a simplified view of access control to the member of a class is shown in the below
*Multilevel inheritance 
It is not uncommon that a class is derived from another derived class as shown before
the class A 
serves as a base class of the derived class B which in turn serves as a base class of the derived cass c
the class b is known as intermidiate base class
since it priovides a link for the inheritance between a and c
the chain ABC is known for onheritance path
a derived lass with mulitlevel inheritance is as follow
class A{};
class B{}
class C{}
this process can be exxtended to any number of levels 
let us consider a simple example
assume that the test results of a batch od students are stores in three different classes
class student stores the roll number
class test stores the marks obtained in two subjects 
and class resukt contains the total marks
the class result can inherit the details of the marks obtained in the test and the roll
number of the students through mulitlevel inheritnave 


 * 
 * };
 * 
 * ****/

#include<iostream>



class Student{
    protected:
        int roll_number;
    public:
        void get_rollnumber();
        void put_roll_numer();
};
void Student::get_rollnumber()
{
    std::cout<<"Please eneter a roll number : "<<std::endl;
    std::cin>>roll_number;
}
void Student::put_roll_numer()
{
    std::cout<<"Roll Number : "<<roll_number<<std::endl;
}
class Test:public Student
{
    protected:
        float sub1;
        float sub2;
    public:
        void get_marks();
        void put_marks();
};
void Test::get_marks()
{
    std::cout<<"Enter the marks of subject 1 and subject 2"<<std::endl;
    std::cin>>sub1;
    std::cin>>sub2;
}
void Test::put_marks()
{
    std::cout<<"Marks of Subject1:"<<sub1<<std::endl;
    std::cout<<"Marks of Subject2:"<<sub2<<std::endl;

}
class Result:public Test
{
float toatl;
public:
    void display_total(void);
};

void Result::display_total(void)
{
    float total = sub1+sub2;
    put_roll_numer();
    put_marks();
    std::cout<<"Total marks : "<<total<<std::endl;
}

int main()
{
    Result student1;
    student1.get_rollnumber();
    student1.get_marks();

    student1.display_total();

    return 0;
}