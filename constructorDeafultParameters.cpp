/**
 * Default constructor Parameters
 * Can often simplify our code and reduce the number of overloaded constructors
 * same rules apply as we learned with non-member function
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
       
        Player(std::string name_val="None",int health_val=0,int xp_val=0);
        Player(){}


};

// Player::Player():Player{"None",0,0}
// {
//     cout<<"No-args constructor"<<endl;
// }
// Player::Player(std::string name_val):Player{name_val,0,0}
// {
//     cout<<"string arg constructor"<<endl;
// }
Player::Player(std::string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}
{
    cout<<"All three arguments are present"<<endl;
}

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player Hero{"Hero",100};
    Player villan{"Villan",100,55};

    cout<<endl;
    return 0;
}