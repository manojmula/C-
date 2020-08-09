/**
 * Returning pointer from a function
 * Function can aslo return pointers
 * type *funciton();
 * should return pointers to
 * memory dynamically allocated in the function
 * to datat that was passed in
 * Never return a pointer to local function variable
 * ***/
#include<iostream>

using namespace std;

int *creat_arrya(size_t size,int int_value=0){
    int *new_storage{nullptr};
    new_storage = new int[size];

    for(size_t i{0};i<size;i++)
    {
        *(new_storage+i) = int_value;

    }
    return new_storage;
}

void display(const int *const array,size_t size)
{
    for(size_t i{0};i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    int *my_array{nullptr};
    size_t size;
    int init_value{0};

    cout<<"\nHow many integers would you like to allocate?";
    cin>>size;
    cout<<"What value would you like them to initialize to?";
    cin>>init_value;

    my_array = creat_arrya(size,init_value);
    cout<<"\n-------------------------------------------"<<endl;

    display(my_array,size);
    delete[] my_array;
    return 0;
}