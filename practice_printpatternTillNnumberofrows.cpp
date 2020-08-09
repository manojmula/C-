/**
 * C++ program to print pattern of stars till N number of rows
 * while c++ program will read total number of rows from the user and print the star pattern till N rows
 * while pattern programs are just based on a copule of logical statments ,with repeeating pattern on every iteration
 * they are quite tricky to code
 * you must have heard about the triangluar piramid patternwhich prints charater in piramid fashion
 * 
 * generally these patterns are represented with "*" sysmbol
 * however you can always use character of your choice
 * 
 * ***/
#include<iostream>
using namespace std;

int main()
{
    int i, space,row , k=0;
    
    cout<<"Enter the number of rows: ";
    cin>>row;

    for(i = 1;i<=row;i++)
    {
        for(space=1;space<=row-i;space++)
        {
            cout<<" ";
        }
        while(k!=(2*i-1))
        {
            cout<<"*";
            k++;
        }
        k=0;
        cout<<"\n";
    }
    return 0;
}