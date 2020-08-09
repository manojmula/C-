/***
 * We have just discussed a situation which would require the use of both multivelel inheritance
 * consider a situation where all the three kinds of inheritance , nmaly,multilevel,multiple and hirarichal
 * inheritance are involved
 * This is illistartated in fig 8.12
 * the child has two direct base class parent 1
 * and parent 2 which themeselves have a common base class grandparent
 * the child inherits the traits of grandparents and traits of 
 * grandparents via paranets 
 * it can also inhert directly as shown by the broken like the granparents is sometimes reffered to ondirect base
 * classInheritance by the child as shown in figure might pose some problems all the public and protected ,
 * member of the grandparents are inherited into child twice first via parent1 and again via parent 2
 * this means child would have duplicate set of members from grandparents thos introduces ambiguity
 * and shpuld be avoided
 * the duplication of inherited members due to these multiple paths can be avoided by making the common
 * base class ansestor as virtual  class that declaring the direct intermidiate classes as shown below
 * 
 * class A
 * {
 * 
 * };
 * class B1 : virtual public A
 * {
 * };
 * class B2 : public vitual A
 * {
 * };
 * class C : public B1,public B2
 * {
 * };
 * 
 * when a class is made virtual base class C++ takes necessary care to see that only one copy of that 
 * class is inherited
 * regardless of how many inherited paths exist between the virtual base class and a derived class 
 * 
 * The keywords virtual and public can be used in either order
 * 
 * For example consider again the student results processing system
 * 
 * ***/

#include<iostream>

class Student
{
    protected:
        int roll_number;
    public:
        void get_roll_number(int a)
        {
            roll_number = a;
        }
        void put_roll_number(void)
        {
            std::cout<<"Roll Number: "<<roll_number<<std::endl;
        }
};
class Test
{
    protected:
        float part1,part2;
    public:
        void get_marks(float a,float b)
        {
            part1 = a;
            part2 = b;

        }
        void put_marks(void)
        {
            std::cout<<"Marks obtained:"<<std::endl;
            std::cout<<"Part 1:"<<part1<<std::endl;
            std::cout<<"Part 2:"<<part2<<std::endl;
        }
};

class Sports:public virtual Student
{
    protected:
        float score;
    public:
        void get_score(float s)
        {
            score = s;
        }
        void put_score(void)
        {
            std::cout<<"Score : "<<score<<std::endl;
        }


};
class Result:public Test,public Sports
{
    float total;
    public:
        void display(void);

};

void Result::display()
{
    total = part1+part2+score;

    put_roll_number();
    put_marks();
    put_score();

    std::cout<<"Total Score : "<<total<<std::endl;
}

int main()
{
    Result student1;
    student1.get_roll_number(678);
    student1.get_marks(30.5,25.5);
    student1.get_score(7.0);
    student1.display();

    return 0;
}

//The above exmple only one copy of roll number is inherited by the result class from the student
//class thus any changes made to roll_number of any of the derived classes are made to the singlee
//instamce this ensures data integerity
