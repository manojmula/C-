#include<iostream>

using namespace std;

class test{
    private:
        int code;
        static int count;
    public:
        void setCode(void)
        {
            count += count;
        }
        void showCode(void)
        {
            cout<<"objectNumber : "<<code<<"\n";

        }
        static void showCount(void)
        {
            cout<<"count : "<<count<<endl;
        }
};

int test :: count ;

int main()
{
    test t1,t2;

    t1.setCode();
    t2.setCode();

    test:: showCount();

    test t3;
    t3.setCode();

    test::showCount();

    t1.showCount();
    t2.showCode();
    t3.setCode();

    return 0;


}