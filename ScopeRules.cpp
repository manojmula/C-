/**
 * Scope rules in c++
 * c++ uses scope rules to deteermine where an identifier can be used
 * c++ uses static or laxial scoping
 * local or block scope
 * global scope
 * 
 * Local scope or block scope
 * Identifier declared in a block{}
 * Function parameteers have block scope
 * only viible within the block{} where declared
 * Function local variables are only active while the function is executing
 * local variables are only active while the function calls
 * wit nested blocks inner blocks can see but other blocks cannot see in
 * 
 * Values are preserved between the local function calls
 * Declared static qualifier
 * static int value{10};
 * value is preserved between function calls
 * only initializzed the first time the function is called
 * 
*/
#include<iostream>

using namespace std;

int num{300};
int hello{3};

void global_example()
{
    cout<<"\nGlobal num is : "<<num<<" in global_example - start"<<endl;
    num *=2;
    cout<<"Global num is : "<<num<<" in global_example-end";
}

void local_example(int x)
{
    int num{1000};
    cout<<"\nLocal num is: "<<num<<" in local_example - start"<<endl;
    num = x;
    cout<<"Local num is :"<<num<<" in local_example - end"<<endl;
}

void static_example()
{
    static int num{5000};
    cout<<"\n Local static num is: "<<num<<" is static_local_example - start"<<endl;
    num+=1000;
    cout<<"Local static num: "<<num<<" in staticlocal example-end"<<endl;
}

int main()
{
    //int num{100};
    int num1{500};

    // cout<<"Local num is : "<<num<<" is main"<<endl;

    // {//create a new level of scope
    //     int num{200};
    //     cout<<"Local num is :"<<num<<" in inner block in main"<<endl;
    //     cout<<"Inner block in main can see out - num1 is:"<<num1<<endl;

    // }

    // cout<<"Local num is :"<<num<<" in mian"<<endl;

    // local_example(10);
    // local_example(20);

    //global_example();

    //cout<<num<<endl;

    static_example();
     static_example();
      static_example();

}

