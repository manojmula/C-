#include<iostream>

using namespace std;

int main()
{
    // int number{};

    // cout<<"Please enter a number:";
    // cin>>number;
    
    // while(number>0)
    // {
    //     cout<<number<<endl;
    //     --number;

    // }
    // cout<<"Blastoff!"<<endl;

    // int num{};
    // cout<<"Please enter positive integer to count up to:";
    // cin>>num;

    // int i{0} ;
    // while(i<num)
    // {
    //     i++;
    //     cout<<i<<endl;
    // }

    // int number{};

    // cout<<"Enter an integer less than 100:";
    // cin>>number;

    // while(number>=100)
    // {
    //     cout<<"Enter an integer less than 100: ";
    //     cin>>number;


    // }

    // cout<<"Thanks"<<endl;

    bool done(false);
    int number{0};

    while(!done)
    {
        cout<<"Enter an integer between 1 and 5: ";
        cin>>number;

        if(number>=1 && number<=5)
        {
            cout<<"Thank you"<<endl;
            done = true;
        }
        else {
            cout<<"Please enter number in range 1 and 5"<<endl;
        }
    }

}