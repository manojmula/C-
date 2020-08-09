/***
 * Passing arrays to function 
 * we can pass an array to a function by providing square brackets in the formal parameter decription
 * void print_array(int numbers[])
 * the array elements are not coppied
 * since the array name evaluates to the location of the array in memory this address is what coppied
 * so the function has no idea how many elemets are in the array since all it knows is the location of the 
 * first element(the name of the array)
 * constant parameters
 * we can tell the compiler that funcion parameters are const readonly
 * this could be useful in the print_array function since it should not be modiefy
 * the array
 * **/

#include<iostream>

using namespace std;

void print_array(const int arr[],size_t size);
void set_array(int arr[], size_t size);

void print_array(const int arr[],size_t size)
{
    for(size_t i {0};i<size;i++)
    {
        cout<<arr[i];
        cout<<"\t";
    }
    cout<<endl;
}

void set_array(int arr[],size_t size,int value[])
{
    for(size_t i{0};i<size;++i)
    {
        arr[i]=value[i];
    }
}

int main()
{
    int my_score[]{100,98,90,86,84};
    int val[]{100,200,300,400,500};

    print_array(my_score,5);
    set_array(my_score,5,val);
    print_array(my_score,5);

    cout<<endl;
    return 0;
}
