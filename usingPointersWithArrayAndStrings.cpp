/**
 * Pointers is one of the efficient tools to access elements of an array
 * Pointers are usefu to allocate arrays dynamically 
 * ie we can decide the array size at the runtime
 * To achive this we use the functions and namely malloc() and callloc()
 *  which are already discussed in chapter 3
 * Accessing an array the pointers is similar than accessing the array index
 * 
 * In general there are some difference between pointers and arrays
 * arrays refer back to a block of memort space wwhere as pointers do not refer to any section of memory
 * The memory addreess of arrays cannot be changed
 * whereas the content of the pointer variables such as memory address that is referes to as to be changed
 * Even though there are subtle deffernce btween pointers and arrays 
 * they have strong relationship between them
 * there is error chcking of array bounds in c++ suppose an array is of size 25v 
 * the compiler issues a warning if we attemp to access 26th location 
 * it is thhe programmers task to check array limits
 * we can declate the pointers to array as follows
 * 
 * 
 * 
 * ***/

#include<iostream>

int main()
{
    int arr[10] = {1,99,4,37,88,3,19,45,62,87};
    int i , num , *ptr;

    ptr = arr;

    std::cout<<"Enter the element to be searched"<<std::endl;
    std::cin>>num;

    for(i = 0;i<10;i++)
    {
        if(*ptr==num){
        std::cout<<std::endl<<num<<" is present in the array "<<std::endl;
        break;
        }
        else if(i == 9)
    {
        std::cout<<std::endl<<num<<"is not present in the array"<<std::endl;
    }
    ptr++;

    }

    return 0;
    
}