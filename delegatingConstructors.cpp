/**
 * Delegating constructors
 * Often the code for constructors is very similar 
 * Duplicated code can lead to error
 * c++ allows delegating constructors
 * code for one constructor can call another in the initialization list
 * avoids duplicating code
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
        Player();
        Player(std::string name_val);
        Player(std::string name_val,int health_val,int xp_val);
};

Player::Player(std::string name_val,int health_val,int xp_val)
: name{name_val},health{health_val},xp{xp_val}
{
    cout<<"Three args constructor"<<endl;
}

Player::Player():Player{"None",0,0}
{
    cout<<"No-args constructor"<<endl;
}

Player::Player(std::string name_val):Player{name_val,0,0}
{
    cout<<"One args constructor"<<endl;
}
int main()
{
    Player empty;
    Player frank{"Frank"};
    Player villan{"Villan",100,55};

    return 0;
}
