/**
 * Copy constructor
 * When objects are copied c++ must create a new object from existing object
 * when is a copy of object is made?
 * passing object by value as a parameter
 * returning object from a function by value
 * constructing one object based on another of the same class
 * 
 * c++ must have a way of accomplishing this so it provides a compiler defined constructor 
 * if you dont
 * Player hero{"Hero",100,20};
 * 
 * void display(Player p)
 * {
 * p is a copy of hero in this example
 * use p
 * destructor for p will be called
 * }
 * display_player(hero);
 * 
 * return object by value
 * 
 * Player enemy;
 * 
 * Player create_super_enemy()
 * {
 * Player an_enemy{"Super enemy",1000,1000};
 * return an_enemy;
 * }
 * 
 * enemy = create_super_enemy();
 * 
 * Copy constructor
 * If you donr provide your own way of copying objects by value then the compiler provides
 * default way of copying objects
 * 
 * copies the values of each data member to the new object
 * default member wise copy
 * perfectly fine in many cases
 * 
 * Beaware if you have a pointer data member 
 * pointer will be copied 
 * not what it is pointing to
 * shallows and deep copy in next video
 * 
 * best practices with copy constructers are
 * Provide a copy constructor when your class has raw pointer members
 * provide the class constructor with a const reference parameter
 * use STL classes as they already provide copy constructors
 * avoid using raw pointer data memebers if possible
 * 
 * Declaring copy constructors
 * 
 * Type::Type(const Type &soutce);
 * 
 * Player::Player(const Player &source);

 *Account :: Accout(const Account &source);
 *  **/

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

        Player(std::string name_val ="None",int health_val = 0,int xp_val=0);

        //Copy constructor
        Player(const Player &source);
        //
        ~Player()
        {
            cout<<"The distructor is bieng called"<<endl;
        }
};

Player::Player(std::string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{
    cout<<"three arg constructor for "+name<<endl;
}

Player::Player(const Player &source) : name(source.name),health(source.health),xp(source.xp)
{
    cout<<"Copy constructor-made"<<endl;

}

void display_player(Player p)
{
    cout<<"Name:"<<p.get_name()<<endl;
    cout<<"Health:"<<p.get_health()<<endl;
    cout<<"XP: "<<p.get_xp()<<endl;
}

int main()
{
    Player empty{"XXXX",100,50};

    Player my_new_object{empty};
    display_player(empty);
    Player frank("Frank");
    Player hero("Hero",100);
    Player villan("Villan",100,50);

    display_player(empty);

    return 0;
}

