/**
 * STATIC MEMBER FUNCTIONS
 * Like static member varaible, we can also have static member funcions a member function that is declared
 * static has the following properties
 * A static fnction can have access to only other static members(functions or variable) decalred in the same class
 * A static member fnction can be called using the class name(instead of its objects) as follows
 * 
 * class-name::function-name;
 * 
 * the upcoming program illistaretd these characterstics.The static function showcount() display the number of objects created till that time
 * A count of number of objects created is maintained
 * by the staic varaible count
 * 
 * the function showcode() displays the code number of each obejct
 * 
 * 
 * 
 * ***/
#include<iostream>

using namespace std;

class test{
    int code;
    static int count;

    public:
        void setcode(void)
        {
            code = ++count;
        }
        void showcode(void)
        {
            cout<<"object number: "<<code<<"\n";
        }
        static void showcount(void)
        {
            cout<<"count: "<<count<<"\n";
        }
};

int test::count;
int main()
{
    test t1,t2;

    t1.showcode();
    t2.setcode();

    test::showcount();

    test t3;
    t3.setcode();

    test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}
/**
 * Note that statment 
 * code = ++ count;
 * is executed whenever setcode() function is invoked and the current value of count is assigned to code
 * since each object has its own copy of code the value contained in code represents a uniquw number of its objects
 *
 * Remember the following function defination will not woek
 * static void showcount 
*/