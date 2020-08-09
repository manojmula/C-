/**
 * Default Constructor Parameter
 * can often simplify our code and reduce the number of overloaded cconsstructors
 * same rules apply we learned with non memebrr functions
 * 
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
};
Player::Player(std::string name_val,int health_val,int xp_val)
:name{name_val},health{health_val},xp{xp_val}{
    cout<<"Three-args constructor"<<endl;
}

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player villan{"villan",100,50};

    return 0;

}
