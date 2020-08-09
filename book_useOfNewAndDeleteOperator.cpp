#include<iostream>

using namespace std;

int main()
{
    int *arr;
    int size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"creating an array size of "<<size<<endl;
    arr = new int[size];

    cout<<"Dynamic allocation of memory is successfful:"<<endl;

    delete arr;
    
return 0;
  
}
