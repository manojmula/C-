/**
 * CONSTATNT MEMBER FUNCTION
 * if a member function dose not alter any data in the class
 * then we may declare it as a constant memberfunction
 * as follows
 * 
 * void mul(int,int) const;
 * double get_balance() const;
 * the qualifier const is appended to the function prototypes  in both declaration and defination the compiler 
 * will generate an error message if such functions try to alter the data values
 * Pointer too members
 * it is possible to take the address of a member of a class and assign it to a pointer.The address
 * of a member can be obtained by applying the operator & to a fully qualified class member name
 * a class member pointer can be decalred using the operator ::* with the class name
 * for exampple given the class
 * class A{
 * private:
 *  int m;
 * public:
 *  void show();
 * 
 * };
 * we can define a pointer to the member m as follows
 * int A::*ip = &A::m;
 * the ip pointer created thus acts like a class member in that it must be invoked woth a class object
 * in the statment abve phrase A::* means pointer to member of class A
 * the phrase &A::m means the address of the m member of A class
 * Remeber the following statement is not valid
 * int *p = &m;
 * this is because m is not simply an int type data
 * it has meaning only when it is associated with the class to which it belongs 
 * the scopr operator must be applied to both the pointer and member
 * the pointer ip can now be used to access the member m inside member functions(or friend functions)
 * Let us assume that a is an abject of A declared in a member functionwe can access m using the pointer 
 * ip
 * as follows
 * cout<<a.*ip;
 * cout<<a.m;
 * 
 * now look at the following code
 * ap = &a;
 * cout<<ap->*ip; //display m
 * cout<<ap->m;
 * 
 * the derefeerencing operator ->* is used to access member when we use pointers for bothe object and the member
 * the dereferencing operator * is used when the object itseld is used with memeber pointer
 * Note that *ip is used like a member name
 * we can also design pointers to a member function which then can be invoked using the derefrencing 
 * operator in the main as below
 * (object-name.*pointer-to-member function)(10);
 * (pointer-to-object->*pointer-to-member function)(10)
 * the precedence of() is higher than that of .* and->* so the paranthesis are necssary
 * 
 * **/
#include<iostream>

using namespace std;
class M{
    int x;
    int y;

    public:
        void set_xy(int a,int b)
        {
            x=a;
            y=b;
        }
        friend int sum(M m);

};

int sum(M m)
{
    int M::*px = &M::x;
    int M::*py = &M::y;
    M *pm = &m;
    int S = m.*px + pm->*py;
}

int main()
{
    M n;
    void(M::*pf)(int,int)=&M::set_xy;
    (n.*pf)(10,20);
    cout<<"Sum = "<<sum(n)<<endl;
}