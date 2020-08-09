/**
 * Constructors
 * Special member method
 * invoked during object creation
 * usful for initializaztion
 * same name ass the class
 * No return type is specified
 * can be overloaded
 * Player constructor
 * class Player
 * {
 *  private:
 *         std::string name;
 *          int health;
 *             int xp;
 * public:
 *      Player();
 *      Player(std::string name);
 *      Player(std::string name, int health,int xp);
 * };
 * Destructors
 * 
 * Special member method
 * same as the name of the class proceeded with a tilde(~)
 * invoked automatically when an object is destroyed
 * No return type or parameters
 * only 1 destructor is allowed per class
 * cannot be overloaded
 * useful to release memory and other resourses
 * 
*/
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
        void set_name(std::string name_val){
            name = name_val;
        }
        //Overload Constructors

        Player()
        {
            cout<<"No args constructors are called"<<endl;
        }

        Player(std::string name)
        {
            cout<<"String args constructor called"<<endl;
        }

        Player(std::string name,int health,int xp)
        {
            cout<<"Three args constructor called"<<endl;
        }
        
        ~Player()
        {
            cout<<"Destructor called for "<<name<<endl;
        }
};
int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villan("Villan",100,12);
        villan.set_name("Villan");

    }

    Player *enemy = new Player;
    enemy -> set_name("Enemey");

    Player *level_boss = new Player("Level Boss",1000,300);
    level_boss->set_name("Level Boss");


    cout<<endl;
    return 0;
}