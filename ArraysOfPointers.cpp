/***
 * Similar to other varaibles we can createan array of pointers in c++
 * The arry of pointers represent a collection of address
 * by declaring array of pointers we can save sunstantial amount of memory space
 * An array of pointers point to an array of data items 
 * Each element of the pointer array points to an item the data type of the array
 * Data items can be access wither directly or indirectly or by dereferencing elements of the pointer array
 * we can reorganize the pointer element withot affecting the data items
 * we can declare array pointer using 
 * int 8inarray[10];
 * 
 * this statment declares an arrya of pointer each of 
 * which is an integer
 * the address of the first pointer in an array is array[0
 * 
 * Before initilizing they point to some unknown values in the memory space 
 * we can use the pointer varaible to refer to some specific values
 * 
 * 
 * ***/

#include<iostream>
#include<string>

int main()
{
    int i = 0;
    char *ptr[10]={"books","television","computer","sports"};
    char str[25];

    std::cout<<std::endl<<"Enter the fav lesuire persuite"<<std::endl;
    std::cin>>str;
    for(i=0;i<4;i++)
    {
        if(*ptr[i]==str)
        std::cout<<"Your fav persuite: "<<str<<"is available here"<<s
    }

}