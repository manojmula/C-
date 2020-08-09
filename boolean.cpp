#include<iostream>

using namespace std;

int main()
{
    bool wear_coat{false};
    double temperature{};
    int wind_speed{};

    cout<<boolalpha;

    const int wind_speed_coat{25};
    const double temperature_for_coat{45};

    cout<<"\nEnter the current temperature(F): ";
    cin>>temperature;

    cout<<"Enter windspeed in (mph): ";
    cin>>wind_speed;

    wear_coat = (temperature<temperature_for_coat || wind_speed>wind_speed_coat);
    cout<<"Do you need to wear a coat using OR? "<<wear_coat<<endl;

     wear_coat = (temperature<temperature_for_coat && wind_speed>wind_speed_coat);
    cout<<"Do you need to wear a coat using AND? "<<wear_coat<<endl;

}