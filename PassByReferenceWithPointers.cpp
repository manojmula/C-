/**
 * Passing pointers to a function
 * Pass by reference with pointer parameters
 * we can use pointers and dereference operator to achive pass by reference
 * the function parameter is pointer
 * the actual parameter can be a pointer or address of a pointer
 * **/
#include<iostream>

using namespace std;

int double_data(int *value)
{
    *value =(*value) *  2;
}

int main()
{
    int value{10};
    int *int_ptr{nullptr};

    cout<<"Value: "<<value<<endl;
    double_data(&value);
    cout<<"Value: "<<value<<endl;

    cout<<"\n-------------------------------"<<endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout<<"Value: "<<value<<endl;
}