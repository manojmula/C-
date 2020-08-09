/**
 * Delegating constructors
 * often the code for constructors is very similar
 * duplicated coe can lead to errors
 * c++ allows ddelegating constructors
 * code for one constructor can cal another in the initialization lists to avoid duplicate coding
 * 
 * ***/
#include<iostream>

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

Player::Player() :Player{"None",0,0}
{
cout<<"No args constructor"<<endl;
}
Player ::Player(std::string name_val)
:Player{name_val,0,0}
{
    cout<<"one arg constructor"<<endl;
}

Player::Player(std::string name_val,int health_val,int xp_val)
:name{name_val},health{health_val},xp{xp_val}
{
    cout<<"Three args constructor"<<endl;
}

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player villan{"villan",100,50};

    return 0;
}