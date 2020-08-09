/**
 * MANUPLATION OF STRINGS USING OPERATOR
 * ANSI C implements strings using charactr arrys,pointers and string functions
 * There are no operators for manuplating the strings
 * one of the main drawbacks of string manuplation in c is that whenever a string is to be copied
 * the programmer must first determine its length and allocate the requires amount of memory
 * 
 * Although these limitations exist in c++ as well
 * it pemits us to create our own definations of operators that can be used to minuplate the strings very much similar to the decimal 
 * numbers
 * recently ANCI C+= committe has added a new class called string c++ class libarary that 
 * support all kinds of string manipulations
 * String manipulations using the string class are deiscussed in chapter 15
 * 
 * 
 * For example,we shall be able to use statments like
 * string3 = string1+string2;
 * if(string1>=string2) string = string1;
 * Strings can be defined as class objects which can be then manipulated like a built in types
 * Since the strings vary greatly in size
 * we must create new to allocate memory for each string and a pointer varaible to point to the string
 * array
 * Thus we cmust create a string objects that can hold these two places of information namely
 * length and location which are necessary for the string manipulation
 * A typical string class will look as follows
 * 
 * class String
 * {
 * char *p
 * int len
 * pub
 * };
 * ***/
#include<iostream>
#include<string.h>

using namespace std;

class String
{
    private:
        char *p;
        int len;
    public:
        String(){len=0;p=0;}        //create null string
        String(const char *s);      //create string from array
        String(const String &s);    //copy constructor
        ~String(){delete p;}        //Destructor

        //+operator
        friend String operator+(const String &s,const String &t);
        
        //<=
        friend int operator<=(const string &s,const string &t);
        friend void show(const String s);

};

String::String(const char *s)
{
    len = strlen(s);
    p = new char[len+1];
    strcpy(p,s);
}

String::String(const String &s)
{
    len = s.len;
    p = new char[len+1];
    strcpy(p,s.p);

}