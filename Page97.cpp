/**
 * MAKING AN OUTSIDE FUNCTION INLINE
 * one of the obectives of oops is to sepearte the details of implememntation from the class defination.its is 
 * therefore good practice to define the member functions outside the class
 * we can define a member function outside the class defination adn still make it inline by just using the 
 * qualifier inline in the header liine of function defination
 * 
 * class Item{
 * };
 * inline void item::getdata(int a,float b)
 * {
 * }
 * 
 * NESTING OF MEMBER FUNCTIONS
 * we just discussed that a memebr functions of a class can be called only by object of that class
 * using a dot operator .However there is a exception to this. a member function can be called by using its name
 * inside another member function of the same class
 * This is called  as nesting of member functions
 * >
 * 
 * ***/
#include<iostream>

#include<string>
using namespace std;

class Binary{
    string s;

    public:
        void read(void)
        {
            cout<<"Enter a binary number : ";
            cin>>s;
        }

        void chk_bin(void)
        {
            for(int i = 0;i<s.length();i++)
            {
                if(s.at(i)!='0' && s.at(i)!='1')
                {
                    cout<<"\nIncorrect Binary format...the program will terminate";
                    
                    exit (0);
                }
            }
        }

        void ones(void)
        {
            chk_bin();
            for(int i = 0;i<s.length();i++)
            {
                if(s.at(i)=='0')
                {
                    s.at(i)='1';
                }
                else
                {
                    s.at(i)= '0';
                }
                
            }
        }
        void displayones(void)
        {
            ones();
            cout<<"\nThe 1's complement of the above binaray number is:"<<s;
        }
};

int main()
{
    Binary b;
    b.read();
    b.displayones();
    return 0;
}