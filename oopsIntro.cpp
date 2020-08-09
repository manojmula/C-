/**
 * Object oriented Programming classes and objects
 * what is object oriented programming
 * what are classes and objects ?
 * Declaring classes and creating objects
 * Dot and pointer operations
 * Methods ,contructors and destructors
 * class methods
 * default and overloaded construcctors
 * copy and move constructor
 * shallow and deep copying
 * this pointer
 * static class members
 * struct vs class
 * friend of a class
 * 
 * what is object oriented programming
 * Procedural Programming
 * Procedural programming limitations
 * OO programming concepts and thier advantages
 * OO programming limitations
 * Procedural programming :
 * Focus is on process or actions that a program takes
 * programs are typically a collection of functions
 * Data is declared seperately
 * Data is passed as arguments int functions
 * Fairly easy to learn
 * Limitations of procedural programming
 * Functions need to know the structure of the data
 * if the structure off the data changes many functions must be changed
 * As program gets larger they become more:
 * deficult to understand
 * difficult to maintain
 * difficult to extend
 * difficult to debug
 * difficult to reuse the code
 * fragile and easier to break
 * what is object oriented programming
 * classes and objects
 * focus is on classes that model real world domain entities
 * allows ddevelopers to think at higher level of abstartcion
 * used successfully in very large programs
 * Encapsualtion
 * objects contain data and operations that work on that data
 * Abstaract data type(ADT)
 * 
 * information hiding
 * implementation -specific logic can be hidden
 * users of the class code to the interface since they dont need to know the implementation
 * more abstartion
 * easier to test debig and maintain
 * Reusability 
 * easier to reuse classes in other applications
 * faster development
 * higher quality
 * inheritence
 * can create new classes in term of existing classes
 * reusability 
 * polymorphism
 * Lomitations of object oriented programming
 * Not a panacea
 * OO Programming wont make bad code better
 * not sustainable for all types of problems
 * not everything decomposes to class
 * learning curve
 * ususally steeper learning curve ezpeciallty of c++
 * many oo languages,many variations of oo concepts
 * design 
 * usually more up-front is necessary to create good models and hierachies
 * programs can be large in size
 * slower
 * more complex
 * classes
 * Blueprint from which objects are created
 * user defined data type
 * has attributes(data)
 * has methods(functions)
 * can hide data and methods
 * provides a public interface
 * object
 * created from class
 * represents a specific instance of a class
 * can create many many objects
 * each has its own identity 
 * each can use defined class method
 * 
 * class class_name
 * {
 *  //declarations;
 * };
 * 
 * class player
 * {
 *  //attributes
 *  std::string name;
 *  int health;
 *  int xp;
 * 
 * //methods
 * void talk(std::string text_to_say);
 * bool is_dead();
 * 
 * };
 * player frank
 * player hero;
 * player *enemy= new player()
 * 
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string);
    bool is_dead();
};

class Account{
    //attributes
    string name{"Account"};
    double balance{0.0};

    //methods;
    bool deposite(double);
    bool withdraw(double);


};

int main()
{
    Account frank_account,jim_account;

    Player frank;
    Player hero;

    Player *enemy{nullptr};
    enemy = new Player;

    Player players[] {frank,hero};

    vector <Player> player_vect {frank};
    player_vect.push_back(hero);

    delete enemy;

    return 0;
}