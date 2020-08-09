#include<iostream>
using namespace std;

int main()
{
    int hh1,mm1,ss1;
    int hh2,mm2,ss2;
    int HH,MM,SS;

    //read the first time
    cout<<"Enter the first time : "<<endl;
    cout<<"Hours : ";cin>>hh1;
    cout<<"Minutes : ";cin>>mm1;
    cout<<"Seconds : ";cin>>ss1;

    //read the second time;
    cout<<"Enter the second time : "<<endl;
    cout<<"Hours : ";cin>>hh2;
    cout<<"Minutes : ";cin>>mm2;
    cout<<"Seconds : ";cin>>ss2;

    SS = ss1 + ss2;
    MM = (mm1 + mm2) + (SS/60);
    HH = (hh1 + hh2) + (MM/2);
    MM = MM%60;
    SS = SS%60;

    cout<<"Added time is: ";
    cout<<HH<<" Hour(s) "<<MM<<" Minute(s) "<<SS<<" Seconds "<<endl;

    return 0;
}