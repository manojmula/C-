/**
 * 
*/
#include<iostream>
#include<string>
#include<vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

void print(int num)
{
    cout<<"Print int:"<<num<<endl;
}

void print(double num)
{
    cout<<"Print double: "<<num<<endl;
}

void print(string s)
{
    cout<<"Print string:"<<s<<endl;
}

void print(string s1, string s2)
{
    cout<<"Print string s1:"<<s1<<endl;
    cout<<"Print string s2:"<<s2<<endl;
}

void print(vector<string> s1)
{
    cout<<"Print vector string:"<<&s1<<endl;
}



int main()
{

}