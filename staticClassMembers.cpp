/**
 * Static class memebers
 * Class data members can be declared as static
 * a single data memeber that belongs to class, not the objets
 * useful to store class wide information
 * 
 * class functions can be declared as static
 * independent of any obejct
 * can be called using class name
 * **/
#ifdef _PLAYER_H_
#define _PLAYER_H_
#include<string>

class Player
{
    private:
        std::string name;
        int health;
        int xp;
    public:
        std::string get_name(){return name;}
        int get_health(){return health;}
        int get_xp(){return xp;}
        Player(std::string name_val="None",int health_val = 0,int xp_val = 0 );
        //Copy constructor
        Player(const Player &source);
        //destructor
        ~Player();
};

#endif