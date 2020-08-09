/**
 * 
 * Copy constructor
 * 
 * when objects are copied c++ must create a new object from an existing object
 * 
 * when is a copy of an object made?
 * Passing objects by value as a parameter
 * returning an object from a function by value
 * constructing one object based on another of the same class
 * 
 * C++ must have a way of accomplishing this so it provides a compiler defined copy constructor if you dont 
 *
 * use case --Pass object by value
 * Player hero{"Hero",100,20};
 * 
 * void display_player(Player p)
 * {
 * p is a compy of hero in this example
 * use p
 * destructor for p will be called
 * 
 * }
 * 
 * display_player(hero);
 * 
 * use case 2 - Player enemy;
 * 
 * Player create_super_enemy()
 * {
 * Player an_enemy{"Super enemy",1000,1000};
 * return an_enemy;//copy of enemy is returned
 * }
 * 
 * enemy = craeete_super_enemy();
 * 
 * use case 3-
 * constructor one oject based on another
 * 
 * Player hero{"Hero",100,100};
 * 
 * Player another_hero{hero}; //copy of hero is made
 * 
 * copy constructors
 * 
 * if you dont providee your own way of copying objects by value then the complier will provide the default way of copying objects
 * 
 * copies the value of each data memeber to the new object ddefault memeber wise copy
 * 
 * perfectly fine in many copies
 * Beaware if you have a pointe data member
 * Pointer will be copied 
 * Not what it is pointing to
 * shallow vs deep copy 
 * 
 * best practice with copy constructors
 * provide a copy constructor when your class has raw pointer meembers
 * provide the copy constructor with a const reference parameter
 * use STL classes as they already provide copy constructors
 * Avoid using raw pointer data meembers if possible
 *  
 * Declaring copy constructors
 * Type::Type(const Type &source);
 * 
 * Player::Player(const Player &source);
 * 
 * Account ::Account(const Account &source)
 * 
 * implementing copy constructor
 * 
 * Player::Player(const Player &source)
 * :name{source.name},
 * health{source.health},
 * xp{source.xp}
 * {}
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
        std::string get_name(){return name;}
        int get_health(){return health;}
        int get_xp(){return xp;}
        Player(std::string name_val = "None",int health_val = 0,int xp_val = 0);

        //copy constructor
        Player(const Player &source);
        //Destructor
        ~Player(){
            cout<<"The destrcutor is birng called "+name<<endl;
        }
};

Player::Player(std::string name_val,int health_val,int xp_val)
:name{name_val},health{health_val},xp{xp_val}
{
    cout<<"Three-args constructor for "+name<<endl;
}

Player::Player(const Player &source)
:name{source.name},health{source.health},xp{source.xp}
{
        cout<<"copy constrcutor-made of "<<source.name<<endl;

}

void display_player(Player p){
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"xp: "<<p.get_xp()<<endl;
}

int main()
{
    Player empty;

    display_player(empty);
    Player frank{"frank"};
    Player hero{"Hero",100};
    Player villan{"Villan",100,100};

    return 0;
}
