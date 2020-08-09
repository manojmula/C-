/**
 * Deafult argument values
 * when a function is called all arguments must be supplied
 * sometimes some of the arguments have the same valyes most of the time
 * we can tell the compiler to use the default values if the arguments are not supplied
 * default values can be in the prototype or defination not both
 * best practice can be in prototype or defination, not both 
 * best practice -in the protottype
 * must appear at thetail end of the parameter list
 * can have multtiple dfault values
 * must appear consecutively at the tail end of the parameter list
 * **/
#include<iostream>
#include<iomanip>

using namespace std;

double calc_cost(double base_cost,double tax_rate = 0.06,double shipping = 3.50);

double calc_cost(double base_cost,double tax_rate,double shipping)
{
    return base_cost+=(base_cost*tax_rate) + shipping;
}

int main()
{
    double cost{0};
    cost = calc_cost(100.0,0.08,4.25);

    cout<<fixed<<setprecision(2);
    cout<<"Cost is: "<<cost<<endl;

    cout<<"==============================="<<endl;

    cost = calc_cost(100.00,0.08);
    cout<<"Cost is: "<<cost<<endl;

    cout<<"==============================="<<endl;

    cost = calc_cost(100.0);
    cout<<"Cost is : "<<cost<<endl;

    cout<<"==============================="<<endl;

}