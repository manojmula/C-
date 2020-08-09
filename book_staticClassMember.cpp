#include<iostream>

using namespace std;

class ITEM{
    private:
        static int count;
        int number;
    public:
        void getData(int a)
        {
            number = a;
            count++;
        }
        void getCount(void)
        {
            cout<<"count : ";
            cout<<count<<endl;
        }
};

int ITEM :: count;

int main()
{
    ITEM a,b,c;

    a.getCount();       //count is initialized to zero
    b.getCount();       //display count
    c.getCount();

    a.getData(100);     //getting data into object a
    b.getData(200);
    c.getData(300);

    cout<<"After reading data"<<endl;

    a.getCount();
    b.getCount();
    c.getCount();

    return 0;
}