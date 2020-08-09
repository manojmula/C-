#include<iostream>

int power(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return power(m,n-1)*m;
    }
}
int main()
{
    int r = power(3,4);
    std::cout<<r<<std::endl;

    return 0;
}