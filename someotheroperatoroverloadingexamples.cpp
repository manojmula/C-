/**
 * Overloadinf the subscript operator[]
 * The subscript operator is normally used to access and modify a specific element in an array
 * Program 75 demostrates the overloading of the subscript operator tto customize its behaviour
 * 
 * **/
#include<iostream>

using namespace std;

class arr
{
    int a[5];

    public:
        arr(int *s)
        {
            int i;
            for(i=0;i<5;i++)
            {
                a[i]=s[i];
            }
            
        }
        int operator[](int k)//overloading the subscript operator
        {
            return (a[k]);
        }
};

int main()
{
    int x[5] = {1,2,3,4,5};
    arr A(x);
    int i;
    for(i=0;i<5;i++)
    {
        cout<<x[i]<<"\t";//using subscript operator to access the private array elements
    }

    return 0;
}
/**
 * 
 * 
 * **/