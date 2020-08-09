/****
 * the write fnction displays an entire line andd has following form
 * cout.wite(line,size)
 * 
 * the first argument line is the name of the string to be displayed and the seconnd arumnet is 
 * the size indicates number of characters are displayed
 * note that is ddose not stop displaying  the characters automaitvcally when the null 
 * character is eencouneterd 
 * if the size is greater than the length of line
 * theit displays beyond the bound of line 
 * 
 * 
 * **/

#include<iostream>
#include<cstring>

int main()
{
    char *string1 = "C++";
    char *string2 = "Programming";
    int m = strlen(string1);
    int n = strlen(string2);

    for(int i = 1;i<n;i++)
    {
        std::cout.write(string2,i);
        std::cout<<std::endl;
    }

    for(int i = n;i>0;i--)
    {
        std::cout.write(string2,i);
        std::cout<<std::endl;
    }
    //concating strings
    std::cout.write(string1,m).write(string2,n);

    std::cout<<std::endl;

    //crossing the coundary
    std::cout.write(string1,10);

    return 0;

}