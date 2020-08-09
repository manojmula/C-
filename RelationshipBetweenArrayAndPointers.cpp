/**
 * Relationship between array and pointers
 * The value of an array name is the address of the first element in the array
 * The value of the pointer variable is an address
 * If the pointer points to the same data type as the array element then the pointer and array name can be 
 * used interchangably (almost)
 * **/

#include<iostream>

using namespace std;

int main()
{
//     int score[]{100,95,89};

//     cout<<score<<endl;
//     cout<<*score<<endl;

//     int *score_ptr{score};

//     cout<<score_ptr[1]<<endl;
//     cout<<score_ptr[2]<<endl;
//     cout<<score_ptr[3]<<endl;
//     cout<<(score_ptr+1)<<endl;
//     cout<<(score_ptr+2)<<endl;
//     cout<<(score_ptr+3)<<endl;
    
    int score[]{100,95,89};

    cout<<"Value of scores: "<<score<<endl;

    int *score_ptr{score};
    cout<<"The value of score Ptr: "<<score_ptr<<endl;

    cout<<"\nArray SUBSCRIPT notation-------------------------"<<endl;
    cout<<score[0]<<endl;
    cout<<score[1]<<endl;
    cout<<score[12]<<endl;

    cout<<"\nPointer SUBSCRIPT notation-------------------------"<<endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

    cout<<"\nPointer OFFSET notation----------------------------------"<<endl;
    cout<<*score_ptr<<endl;
    cout<<*(score_ptr+1)<<endl;
    cout<<*(score_ptr+2)<<endl;

    cout<<"\nArray offset notation-----------------------------------"<<endl;
    cout<<*score<<endl;
    cout<<*(score+1)<<endl;
    cout<<*(score+2)<<endl;

    cout<<endl;
    return 0;


}