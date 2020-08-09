/**
 * CONSTRUCTORS WITH DEFAULT ARGUMENTS
 * 
 * it is possible to define a constructor with default arguments
 * for example the comstructr complex() can be declared as follows
 * Complex(float real,float imag= 0);
 * 
 * The default value of the argument imag is zero 
 * then the statment 
 * complex c(5.0);
 * assigns the value 5.0 to the real varaible and 0.0 to imag
 * by default
 * However the statment 
 * Complex C(2.0,3.0);
 * assigns the valuw 2.0 to reak abd 3.0 to imag The actual parameter when specified overrides
 * the default parameter
 * AS pointed out erlier
 * the missing arguments must be the trailing ones
 * 
 * It is important to distinguish between the default constructor A::A() and the default argument
 * constructor A::A(0) 
 * the default argument constructorcan be called with either one argument constructor A::A(int = 0)
 * When called with arguments it becomes default constructor 
 * and whn both these foms are used its causes ambiguity for a stament such as 
 * A s;
 * the ambiguity is whenevr to callA::A() or A::A(int = 0)
 * 
 * ***/

/**
 * DYNAMIC INITIALIZATION OF OBJECTS
 * Class objects can be initialized dynamically too
 * that is to say ,the initial value of an object may be provided dduring the run time
 * One advantage of dynamic alocation is that we can provide various initilization formts using overloaded constructors 
 * this provides the flexibility of using different formats of data at run time dependding upon the situation
 * 
 * consider the long term deposit schemes working in the commercial banks
 * The banks provide different intrest rates ffor different chemes as well as different period of investment
 * Program below illistartes how to use class variables for holding account details and how to construct these
 * variables at run time using dynamic initialization
 * 
 * 
 * 
 * 
 * ***/

/***
 * Long-term fixed deposit system
 * 
 * **/
#include<iostream>

using namespace std;

class Fixed_Deposit
{
    private:
        long int P_amount;
        int years;
        float Rate;
        float R_Value;
    
    public:
        Fixed_Deposit(){}
        Fixed_Deposit(long int p,int y,float r = 0.12);
        Fixed_Deposit(long int p,int y,int r);
        void display(void);
};

Fixed_Deposit :: Fixed_Deposit (long int p,int y,float r)
{
    P_amount = p;
    years = y;
    Rate = r;
    R_Value = P_amount;
    for(int i = 1;i<=y;i++)
    {
        R_Value =R_Value *(1.0 +r);
    }
}

Fixed_Deposit::Fixed_Deposit(long int p,int y,int r)
{
    P_amount = p;
    years = y;
    Rate = r;
    R_Value = P_amount;

    for(int i = 1;i<=y;i++)
    {
        R_Value = R_Value *(1.0+float(r)/100);
    }
}

void Fixed_Deposit::display(void)
{
    cout<<"\n"
        <<"Principle Amount = "<<P_amount<<"\n"
        <<"Return Value = "<<R_Value<<endl;
}

int main()
{
    Fixed_Deposit FD1,FD2,FD3;
    long int p;
    int y;
    float r;
    int R;

    cout<<"Enter amount period,intrest rate(in percent)"<<"\n";
    cin>>p>>y>>R;
    FD1 = Fixed_Deposit(p,y,R)

}
