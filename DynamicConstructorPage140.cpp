/****
 * Dynamic Constructors
 * The construcrs can be used to allocate memory while creating objects
 * this will enable the systemto allocate the right amount of memory ffor each object when the objects are not of the same size
 * thus resulting in the saving memory
 * Allocation of memory to objects at the time of theier construction is  called dynamic construction of objects
 * the memory is allocated with help of new operator
 * Program below shows the use of new in constructors that are used to construct strings in objects
 * 
 * 
 * ****/
#include<iostream>
#include<string.h>

using namespace std;


class String
{
    char *name;
    int length;
    
    public:
        String()
        {
            length = 0;
            name = new char[length+1];
        }
        String(char *s)
        {
            length = strlen(s);
            name = new char[length+1];

            strcpy(name,s);
        }
        void display(void)
        {
            cout<<name<<endl;
        }
        void join(String &a,String &b);
};

void String::join(String &a,String &b)
{
    length = a.length + b.length;
    delete name;
    name = new char[length+1];

    strcpy(name,a.name);
    strcpy(name,b.name);
}

int main()
{
    char *first = "Joseph";
    String name1(first),name2("Louis"),name3("Lagrange"),s1,s2;

    s1.join(name1,name2);
    s2.join(s1,name3);

    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    return 0;
}

/**
 * The member function join() concatenates two strings
 * it eleminates the comined length of the strings to be join
 * allocates memory for the combined string and then creates the same using tring functions strcpy()
 * and stecat(()
 * Note that inthe cuntion join lenghth and name are members of the object that calls the function )
 * while a.length and a.name are mumbers of the argumeny object a
 * the main() function program concatenates three strings into one tsring the output is shown below
 * 
 * 
 * **/