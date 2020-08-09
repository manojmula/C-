/***
 * 
 * **/
#include<iostream>

int fact(int n)
{
    if(n==0 && n>-1)
    {
        return 1;
    }
    else if(n>0) 
    {
        return (fact(n-1)*n);
    }
    
}
int main()
{
    int n;
    n = 5;
    std::cout<<fact(n)<<std::endl;
    return 0;
}