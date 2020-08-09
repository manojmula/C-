#include<iostream>

using namespace std;

class person
{
    private:
        char name[30];
        int age;

    public:
        void get_data(void);
        void display(void);

};

void person :: get_data(void)
{
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;

}

void person :: display(void)
{
    cout<<"Your name is "<<name<<endl;
    cout<<"Your age is "<<age<<endl;
}

int main()
{
    person p;
    p.get_data();
    p.display();

    return 0;
}