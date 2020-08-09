#include<iostream>
#include<string>

using namespace std;

class binary
{
    private:
        string s;

    public:
        void read(void)
        {
            cout<<"Enter a binary number:";
            cin>>s;
        }
        void chk_bin(void)
        {
            for(int i =0;i<s.length();i++)
            {
                if(s.at(i)!='0' && s.at(i)!=1)
                {
                    cout<<"\nIncorrect Number the program will quit"<<endl;
                    exit(0);
                }
            }
        }
        void ones(void)
        {
            chk_bin(); //calling member functions
            for(int i =0;i<s.length();i++)
            {
                if(s.at(i)=='0')
                {
                    s.at(i)='1';
                }
                else
                {
                    s.at(i)='0';
                }
                
            }
        }
        void displayones(void)
        {
            ones();
            cout<<"\nThe 1's compliment of the above binary number is: "<<s;
        }

};

int main()
{
    binary b;
    b.read();
    b.displayones();
    
    return 0;
}