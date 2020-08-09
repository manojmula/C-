/**
 * Dynamic memory allocation 
 * We often dont knoe how much storage we need until we need it
 * we can allocate storage for a variable at run time
 * Recall C++ arrays
 * we need to explicitly provide the size and it was fixed
 * but vectors grow and strink dynamically
 * we can use pointers to access newly allocated heap storage
 * **/
#include<iostream>

using namespace std;

int main()
{
    int *int_ptr{nullptr};

    int_ptr = new int;

    cout<<int_ptr<<endl;
    delete int_ptr;

    size_t size{0};
    double *temp_ptr{nullptr};

    cout<<"How many temps?";
    cin>>size;


    temp_ptr = new double[size];

    cout<<temp_ptr<<endl;
    delete [] temp_ptr;

    cout<<endl;
    return 0;
}

