/**
 * Potential pointer pitfalls
 * utilializing pointers
 * dangling pointers
 * Pointers that is pointing to released memory
 * for example 2 pointers point to the same data
 * 1 pointer realeses the data with deleete
 * the other pointer releases the data with delete
 * Pinter that points to memory that is invalid
 * we saw this when we returned a pointer to a function local varibale
 * not checking if new failed to allocate memory
 * Leaking memory
 * Not checking if new failed
 * if new fails an exception is thrown
 * we can use exception handling to catch excpeion
 *Dereferencing null pointer will cause your program to crash
 memory leaking
 Forgeting to realese allocated memory with delete
 if you lose your pointer to stogarge allocate on the heap you have not way to get to that storage again
 the memory is orphaned or leaked
 one of the most common pointer problems


 *What is a reference
 An alias for a variable
 must be initializes to a variable when declared
 cannot be null
 once initialized cannot be made to refer to a different variable
 very useful as a fumction parameter
 Might be helpful to think of reference as a constant pointer that is automatically derefered
 * 
 * 
 * 
 * **/
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int num{100};
    int &ref{num};

    std::cout<<num<<std::endl;
    std::cout<<ref<<std::endl;

    num =200;
    std::cout<<"\n========================="<<std::endl;
    std::cout<<num<<std::endl;
    std::cout<<ref<<std::endl;

    ref=300;
    std::cout<<"\n========================="<<std::endl;
    std::cout<<num<<std::endl;
    std::cout<<ref<<std::endl;

    std::cout<<"\n====================="<<std::endl;
    std::vector <string> stooges{"Larry","Moe","Curly"};

    for(auto str:stooges)
    str = "Funny";

    for(auto str:stooges)
    cout<<str<<endl;

    cout<<"\n======================="<<endl;
    for(auto &str:stooges)
    str = "Funny";

    for(auto const &str:stooges)
    cout<<str<<endl;

    cout<<endl;
    return 0;



}