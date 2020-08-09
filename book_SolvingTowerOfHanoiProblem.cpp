#include<iostream>

using namespace std;

void TOH(int d,char tower1, char tower2, char tower3)
{
    if(d==1)
    {
        cout<<"\nShift top disk from tower "<<tower1<<" to tower "<<tower2;
        return;
    }
    TOH(d-1,tower1,tower2,tower3);
    cout<<"\nShift top disk from tower "<<tower1<<" to  tower "<<tower2;
    
}


int main()
{

}