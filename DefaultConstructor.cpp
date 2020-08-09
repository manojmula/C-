/**
 * The default Constructor
 * Does not expect any arguments
 * also called the non-args constructor
 * If you write no constructors at all for a class
 * c++ will generate a default constructor that dose nothing
 * Called when when you intantiate a new object with no arguments
 * 
 * Player frank;
 * Player *enemy = new Player;
 * 
 * class Account
 * {
 *  private:
 *      std::string name;
 *      double balance;
 *  public:
 *      bool withdraw(double amount);
 *      bool deposit(double amount);
 * };
 * 
 * using default constructor
 * Account frank_acccount;
 * Account jim_account;
 * 
 * Account *marry_account= new Account;
 * delete marry_account
 * **/
#include<iostream>
#include<string>

using namespace std;

class Player{

    private:
        std::string name;
        int health;
        int xp;
    public:
        void set_name(std::string name_val)
        {
            name = name_val;
        }
        std::string get_name()
        {
            return name;
        }

    Player(std::string name_val,int health_val,int xp_val)
    {
        name = name_val;
        health =health_val;
        xp = xp_val;

    }

    Player()
    {
       name = "None";
       health = 100;
       xp =3; 
    }


};

int main()
{
    Player hero;
    Player frank{"Frank",100,13};
    frank.set_name("Frank");
    cout<<frank.get_name()<<endl;
    return 0;
}