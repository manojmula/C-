/**
 * Constructor Initialisarion list
 * so far , all data member values have been set in the constructor body
 * constructot initialization lists
 * are more efficient
 * initialization list immediately follows the paraameter list
 * initializes the data memebers as the object is created
 * order of initialization is order of declaration in the class
 * ***/
#include<iostream>
#include<string>

using namespace std;

class Player
{
    private:
        std::string name;
        int health;
        int xp;

    public:
        Player();
        Player(std::string name_val);
        Player(std::string name_val,int health_val,int xp_val);

};

Player :: Player(): name{"None"}, health{0},xp{0}
{

}

Player :: Player(std::string name_val) : name{name_val},health{0},xp{0}
{

}

Player :: Player(std::string name_val,int health_val,int xp_val)
: name{name_val},health{health_val},xp{xp_val}
{

}

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player villan{"Villan",100,55};

    return 0;
}
