/**
 * We have discussed so far how inheritance can be used tto modify the class when it did not
 * satisfy the requirements of a particular problem in hand
 * Addition members are added through inheritnace to extend the capabalities
 * of a class
 * Another intresting application of inheritance is to use it as a support to the hierarchical design 
 * of a program
 * many programming prroblems can be cast into a hierarchal where certain ffeatured of one level are shared
 * by many others blow
 * as an example below shows that student is university another example could be classification of accounts in a 
 * commercial bank as shown in figgure below
 * all the students have certain things in common and similarly all the accounts have certain features 
 * in common
 * 
 * 
 *                  student
 * 
 * Medical                Arts          Engineering
 *                                  Mech    Elec    Civil
 * 
 * Account
 * savings  current account
 * fixed deposit
 * short term long term and medium ter,
 * 
 * 
 * In c++ such problem can be easily converted into class Hierarchies
 * the base class will include all the features that are common to the subclasses
 * A subclass can be constructed by inheriting the properties of the base class
 * A subclass can serve as a base class for the lower level classes and so on
 * 
 * 
 * Hybrid Inheritance
 * there could be situation where we need to apply two or more types of ingeritance to design a program
 * for instance consider a case of processing the student resukts discussed on sec 8.7
 * Assume taht we gave to give weightage for sports before finalizing the results
 * The weightage fo sport is stores in seperate class called sports
 * the new inhertivae realtionship between various classes would be as shown below
 * student test 
 * result and sport
 * ***/
#include<iostream>

class Student{
    protected:
        int roll_number;
    public:
        void get_roll_number(int roll)
        {
            roll_number = roll;
        }
        void put_roll_number(void)
        {
            std::cout<<"Roll Number: "<<roll_number<<std::endl;
        }


};
class Test:public Student
{
    protected:
        float part1,part2;
    public:
        void get_marks(float one,float two)
        {
            part1 = one;
            part2 = two;
        }

        void put_marks(void)
        {
            std::cout<<"Marks obtained: "<<std::endl;
            std::cout<<"Part 1 = "<<part1<<std::endl;
            std::cout<<"Part 2 = "<<part2<<std::endl;

        }

};
class Sports
{
    protected:
        float score;
    public:
        void get_score(float sc)
        {
            score = sc;
        }
        void put_score(void)
        {
            std::cout<<"Sports wt: "<<score<<std::endl;
        }
};
class Result:public Test,public Sports
{
    float total;
    public:
        void display(void);
} ;

void Result::display()
{
    total = part1+part2+score;
    put_roll_number();
    put_marks();
    put_score();

    std::cout<<"Total Score:"<<total<<std::endl;
}
int main()
{
    Result student1;
    student1.get_roll_number(1234);
    student1.get_marks(27.5,33.0);
    student1.get_score(6.0);

    student1.display();

    return 0;
}
/*
In inheritace the base class and inherited classes are tightly coupled so their independed is
difficult

**/