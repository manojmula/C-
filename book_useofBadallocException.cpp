#include<iostream>

using namespace std;

class sample
{
    private:
        int data1;
        char data2;
    public:
        void set(int i,char c)
        {
            data1 = i;
            data2 = c;
        }

        void display(void)
        {
            cout<<"Data1 = "<<data1<<endl;
            cout<<"Data2 = "<<data2<<endl;
        }


};

int main()
{
    sample *s_ptr;

    try{
        s_ptr = new sample;
    }

    catch(bad_alloc ba)
    {
        cout<<"bad alloc accourd .....the program will terminate now";
        return 1;
    }
    s_ptr->set(25,'a');
    s_ptr->display();

    return 0;
}