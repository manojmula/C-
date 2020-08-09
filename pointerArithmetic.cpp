/**
 * Pointer can be used in 
 * Assignment expressions
 * Arthmetic expressions
 * Compariion expressions
 * C++ allows pointer arthmetic
 * Pointer arthmetic only makes sense with raw arrays
 *  ++ increments a pointer to point to the next array element
 * int_ptr++;
 * -- decrements a pointer to point the previous array element
 * + increment pointer by n sizeof(type)
 * subtractin one pointer from another pointer
 * Determine the number of elements between the pointer
 * Bothe pointers must point to the same data type
 * **/

#include<iostream>

using namespace std;

int main()
{
    int score[]{100,95,89,68,-1};
    int *score_ptr{score};

    // while(*score_ptr !=-1)
    // {
    //     cout<<*score_ptr<<endl;
    //     score_ptr++;
    // }

    // cout<<"\n------------------------------"<<endl;
    // score_ptr =score;
    // while(*score_ptr!=-1)
    // {
    //     cout<<*score_ptr++<<endl;
    // }

    cout<<"\n---------------------------------"<<endl;
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"Frank"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout<<"\n-----------------------------------"<<endl;
    cout<<boolalpha;

    cout<<p1<<"=="<<p2<<":"<<(p1==p2)<<endl;
    cout<<p1<<"=="<<p3<<":"<<(p1==p3)<<endl;
    
    cout<<*p1<<"=="<<*p2<<":"<<(*p1==*p2)<<endl;
    cout<<*p1<<"=="<<*p2<<":"<<(*p1==*p2)<<endl;


}