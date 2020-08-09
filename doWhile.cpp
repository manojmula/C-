#include<iostream>

using namespace std;

int main()
{
    char selection{};
    do{
        cout<<"\n---------------------------"<<endl;
        cout<<"1.Do this"<<endl;
        cout<<"2.Do that"<<endl;
        cout<<"1.Do something else"<<endl;
        cout<<"Q.to quit"<<endl;
        cout<<"Please do one selection:"<<endl;
        cin>>selection;

        cout<<"=========================================="<<endl;

    if(selection == '1')
    {
        cout<<"You code 1- doing this"<<endl;

    }
    else if(selection == '2')
    {
        cout<<"Your code 2- doing that"<<endl;
    }
    else if(selection == '3')
    {
        cout<<"Your code 3 - doing something else"<<endl;
    }
    else if(selection=='q' || selection=='Q')
    {
        cout<<"Good Bye"<<endl;
    }
    else
    {
        cout<<"You have entered an illigal number please try again"<<endl;
    }
    cout<<"========================================================="<<endl;

    }while(selection!='q' && selection !='Q');

}