#include<iostream>
#include "Account.h"

using namespace std;


int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000);

    if(frank_account.deposit(200.0))
    {
        cout<<"Ok deposit"<<endl;
    }
    else{
        cout<<"Deposite not allowed"<<endl;
    }

    if(frank_account.withdraw(500.0))
    {
        cout<<"Ok withdrwan"<<endl;
    }
    else
    {
        cout<<"Not sufficient funds"<<endl;
        
    }
    if(frank_account.withdraw(1500))
    {
        cout<<"Withdraw ok"<<endl;
    }
    else
    {
        cout<<"Not sufficient balance"<<endl;
    }
    
    return 0;
}