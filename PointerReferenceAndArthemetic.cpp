/**
 * As discussed in chapter 3 there are sunstantial number of arthemetic that can be performed with pointer 
 * c++ allows to perform the following arthemtic using pointer
 * A pointer can be incremented ++ or decremented ++
 * Any integere can be added to orr subtarcted from pointer
 * One pointer can be sunstracted ffrom another
 * int a[6];
 * int *aptr;
 * aptr = &a[0];
 * obvisouly the pointer aptr refers ti the base address of the varable a
 * We can increment the pointer varaibel as shown below
 * aptr++
 * ++aptr
 * This statment moves the pointer to the next memory address
 * Similary we can decrement the pointer varaible as follows
 * aptr-- or --aptr
 * 
 * this statment moves the pointer to the previous memory address alos
 * if two pointer varaibles point to the same array then they can be substarcted from each other
 * We cannot perform pointer arthimetic on the varobles that are not stored in contigues memory location
 * 
 *  
 * 
 * **/
#include<iostream>

int main()
{
    int num[] = {56,75,22,18,90};
    int *ptr;
    int i;
    std::cout<<"The array values are :"<<std::endl;
    for(i = 0;i<5;i++)
    {
        std::cout<<num[i]<<std::endl;
    }
    ptr = num;
    i=0;
   while(i<5)
    {
        std::cout<<"The value of ptr:"<<*ptr<<std::endl;
        ptr++;
        i++;
    } 
    
    
}