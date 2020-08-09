#include<iostream>
using namespace std;



int main()
{
    char ch;

    cout<<"Please enter a vali character()Alphabet : ";
    cin>>ch;

    if((ch>='A' && ch<= 'Z') || (ch>='a' && ch<='z'))
    {
        if(ch>='A' && ch<= 'Z')
        {
            ch +=32;
        }
        else if (ch>='a' && ch<='z')
        {
            ch -=32;
        }

        cout<<"Converted character is : "<<ch<<endl;
    } 

    else 
    {
        cout<<"entered character is invalid alphabet"<<endl;
    }

    return 0;

}