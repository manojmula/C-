#include<iostream>

using namespace std;

class employee
{
    private:
        char name[30];
        float age;
    public:
        void getData(void);
        void putData(void);
};

void employee :: getData (void)
{
    cout<<"Enter your name :";
    cin>>name;
    cout<<"Enter your age :";
    cin>>age;
}
void employee :: putData(void)
{
    cout<<"Your name is :"<<name<<endl;
    cout<<"Your age is :"<<age<<endl;


}

const int size = 3;

int main()
{
    employee manager[size];
    for(int i = 0;i<size;i++)
    {
        cout<<"\nDetails of manager "<<i+1<<endl;
        manager[i].getData();
    }
    cout<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<"\nManager"<<++i<<endl;
        manager[i].putData();
    }

    return 0;
}