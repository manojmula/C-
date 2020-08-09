/**
 * Accesing class memebers
 * we can access class attributes 
 * class methods
 * some class members will not be accessable(more on that later)
 * we need an object to access instace variable
 * Accesing with dot operator
 * using the dot operator
 * account frank_account;
 * 
 * frank_account.balance;
 * frank_account.deposit(1000.00);
 * Accessing Class Members
 * If we have a pointer to an object (member of pointer operator)
 * Dereferenc
*/

#include<iostream>
#include<string>

using namespace std;

class Player{
    public:
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string text_to_say){cout<<name<<" says "<<text_to_say<<endl;};
    bool is_dead();
};

class Account{
    public:
    //attributes
    string name;
    double balance;

    //method;
    bool deposite(double bal){balance+=balance;cout<<" In deposite"<<endl;};
    bool withdraw(double bal){balance-=balance;cout<<" In withdraw"<<endl;};
};

int main()
{
    Account frank_account;
    frank_account.name = "Franks Account";
    frank_account.balance = 5000.0;

    frank_account.deposite(1000.00);
    frank_account.withdraw(500);


    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will destroy you");

    return 0;

}