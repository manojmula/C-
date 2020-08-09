#include<iostream>
#include<string>
#include<vector>

using namespace std;

void display(vector <string> *stooges)
{
    for(auto str:*stooges)
    {
        cout<<str<<endl;

    }
}
void display(int *array,int sentinel)
{
    while(*array!=sentinel)
    {
        cout<<*array++<<" ";
    }
}

int main()
{
    vector <string> stooges{"Larry","Moe","Curly"};
    display(&stooges);

    cout<<"\n========================="<<endl;
    int scores[]{100,98,97,79,85,-1};
    display(scores,-1);
}