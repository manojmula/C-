#include<iostream>

int power(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (power(m,n-1)*m);
    }
    
}

int main()
{
    std::cout<<power(1000,100)<<std::endl;
    return 0;
}