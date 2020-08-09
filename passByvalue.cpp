#include<iostream>
#include<string>
#include<vector>

using namespace std;

void pass_by_value1(int);
void pass_by_value2(string);
void pass_by_value3(vector<string>);
void print_vector(vector<string>);

int main()
{
    int num{10};
    int another_num{20};

    cout<<"num before calling pass_by_value1: "<<num<<endl;
    pass_by_value1(num);
    cout<<"num after calling pass by value1:"<<num<<endl;

    cout<<"Name before the ";

}

void pass_by_value1(int num)
{
   num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value2(vector<string> v)
{
    for(auto s:v)
    {
        cout<<s<<" ";
    }
    cout<<endl;

}