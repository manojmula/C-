#include<iostream>

int main()
{
    int A[10];
    int *p;

    p = new int[5];
    p[0] = 3;
    p[1] = 5;
    std::cout<<p[0];
    return 0;
}