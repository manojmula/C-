#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{

    int num{10};

    cout<<"Value of num is: "<<num<<endl;
    cout<<"Size of num is: "<<sizeof num<<endl;
    cout<<"Address of num is: "<<&num<<endl;

    int *p;

    cout<<"\nValue of p is: "<<p<<endl;
    cout<<"Address of p is: "<<&p<<endl;
    cout<<"Size of p is: "<<sizeof p<<endl;

    p = nullptr;

    cout<<"\nThe value of p after nullpointerfied: "<<p<<endl;

    p = &num;

    cout<<"\nThe value of p after assigning the num address:"<<p<<endl;
    cout<<"The size of p after intializing the p is: "<<sizeof p<<endl;

cout<<"\n\n\n\n"<<endl;

        int *p1{nullptr};
        double *p2{nullptr};
        unsigned long long *p3{nullptr};
        float *p4{nullptr};
        string *p5{nullptr};
        vector <string> *p6{nullptr};

        cout<<"size of p1(int) is: "<<sizeof p1<<endl;
         cout<<"size of p2(double) is: "<<sizeof p2<<endl;
          cout<<"size of p3(unsigned long long) is: "<<sizeof p3<<endl;
           cout<<"size of p4(float) is: "<<sizeof p4<<endl;
            cout<<"size of p5(string) is: "<<sizeof p5<<endl;
             cout<<"size of p6(vector stringg) is: "<<sizeof p6<<endl;

cout<<"\n\n\n\n"<<endl;


int score{10};
double high_temp{100.7};

int *score_ptr{nullptr};

score_ptr = & score;

cout<<"Value of score is: "<<score<<endl;
cout<<"Address of score is: "<<&score<<endl;
cout<<"Value of score pointer is: "<<score_ptr<<endl;

cout<<"\n\n\n\n"<<endl;

return 0;
}