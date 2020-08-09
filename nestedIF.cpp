#include<iostream>

using namespace std;

int main()
{
    int score{};
    cout<<"Enter your score on exam (0-100) : ";
    cin>>score;
    char letterGrade{};

    if(score>=0 && score<=100)
    {
        if(score>90)
            letterGrade = 'A';

        else if(score>80)
            letterGrade = 'B';

        else if(score>70)
            letterGrade = 'C';

        else 
            letterGrade = 'F';

            cout<<"Your grade is  : "<<letterGrade<<endl;

        if(score=='F')
            cout<<"Sorry you must repeat the class"<<endl;

        else
            cout<<"Congrats!"<<endl;
    }

    else{
        cout<<"Sorry, The number you entered is not in range";
    }


}