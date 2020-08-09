#include<iostream>
using namespace std;

class Numbers{
    private:
        int a;
        int b;
    public:
        void readNumbers(void);
        void printNumbers(void);
        int calAddition(void);
};

void Numbers::readNumbers(void)
{
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

}

void Numbers::printNumbers(void)
{
    cout<<"First Number:"<<a<<endl;
    cout<<"Second Number:"<<b<<endl;
}

int Numbers::calAddition(void)
{
    return a+b;
}

int main()
{
    Numbers num;

    num.readNumbers();
    num.printNumbers();
   cout<<"The addition of two numbers = "<<num.calAddition();

    return 0;
}