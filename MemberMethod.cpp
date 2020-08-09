/**
 * Implementing member methods
 * Very similar to shoe how we implement functions
 * member methods have access to member attributes
 * so you dont need to pass them the arguments
 * can be implemented inside the class declaration
 * implicitly inline
 * can be implemented outside the class declaration
 * need to use
 * Class_name ::method_name
 * can seperate specification from implementation
 * .h file for class declaration
 * .cpp file for class implementation
 * 
*/
#include<iostream>
#include<string>

using namespace std;

class Account{
    private:
        //Attrubutes
        string name;
        double balance;

    public:
        //methofd
        //declared inline
        void set_balance(double bal){balance = bal;}
        double get_balance(){return balance;}

        //metods will be declared outside the class declaration
        void set_name(string n);
        string get_name();

        bool deposit(double amount);
        bool withdraw(double amount);

};

void Account :: set_name(string n)
{
    name = n ;
}

string Account :: get_name()
{
    return name;
}

bool Account :: deposit(double amount)
{
    balance += amount;
    return true; 
}

bool Account :: withdraw(double amount)
{
    if(balance-amount>0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);

    if(frank_account.deposit(200.0))
        cout<<"Deposite OK"<<endl;
    else
        cout<<"Deposite not allowed"<<endl;

    if(frank_account.withdraw(500))
        cout<<"Withdraw OK"<<endl;
    else
        cout<<"Not sufficient funds"<<endl;

    if(frank_account.withdraw(1500))
        cout<<"Withdraw OK"<<endl;
    else
        cout<<"Not sufficient funds"<<endl;

        return 0;
}