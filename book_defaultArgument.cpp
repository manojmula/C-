
#include<iostream>

using namespace std;

int main()
{
    float amount;
    float value(float p,int n,float r =0.15);   //Prototype
    void print(char ch = '*',int len = 40);     //Prototype

    print();

    amount = value(500.00,5);
    cout<<"Final value = "<<amount<<endl;

    amount = value(1000.00,5,0.30);
    cout<<"Final value = "<<amount<<endl;
    print('=');

    return 0;
    }

    float value(float p, int n, float r)
    {
        int year = 1;
        float sum = p;

        while(year<=n)
        {
            sum *= (1+r);
            year +=year;
        }
    }

    void print(char ch,int len)
    {
        for(int i =1;i<=len;i++)
        {
            cout<<ch<<endl;
        }
    }