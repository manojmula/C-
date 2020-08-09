/**
 *Friends of a class

 *A function or class that has access to prrivate class member
 and that function of or class is not a member of the class it is accessing
 Function 
 
 *can be regular non member functions
 can be member methods
 class 
 another class can have access to priate class members

 * 
 *   Friends of a class
 * Friendship must be granted not taken
 * Declared explicitly in the class that is granting friendship
 * Declared in the function protoype with keyword friendship
 * 
 * Friendship is not symentruiic
 * Must be explicitly granted
 * if A is a frind of b
 * b is not friend of A
 * 
 * Friendship is not tranitive
 * must be explicitly granted
 * if a is friend of b and b is friend of c
 * then a is not friend of c
 * class Player{
 * friend void display_player(Player &P);
 * std::string name;
 * int health;
 * int xp;
 * public:
 * 
 * };
 * 
 * 
 *  **/