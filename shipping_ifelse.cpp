#include<iostream>

using namespace std;

int main()
{
    const int limit{10};
    const double baseCost = 2.50;
    int length{0},width{0},height{0};

    cout<<"Please enter the dimensions below as asked and then press enter: "<<endl;
    cout<<"Length : ";
    cin>>length;
    cout<<"\nWidth : ";
    cin>>width;
    cout<<"\nHeight : ";
    cin>>height;

    int volume = length * width * height;
    int cost;
    if(width <= 10 && height <= 10 && length <= 10)
    {

        if(volume<=100)
        {
             cost = baseCost * volume;
        }

        else if(volume>100 && volume < 500)
        {
            cost = (volume*baseCost) + ((volume*baseCost)*0.1);
        }
        else if(volume>=500)
        {
            cost = (volume*baseCost) + ((volume*baseCost)*0.25);
        }
    }
    else 
    {
        cout<<"This Shipmen cannot be accepted,becasue one of the dimension is more than 10inces which is mot acceptabel"<<endl;
    }

    cout<<"Cost = "<<cost<<endl;
}