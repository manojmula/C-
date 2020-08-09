/**
 * Name: The name of the function 
 * same rules as of the variables
 * should be meaningful
 * usually a verb or a verb phrase
 * PARAMETER LIST
 * the variables passed into the function
 * thei types must be specified
 * return type
 * the type of the data that is returened from the function
 * BODY
 * the statments that are executed when the function is called
 * in curly braces{}
*/
#include<iostream>

using namespace std;

const double pi{3.14159};

double cal_area_circle(double radius)
{
    return pi* radius * radius;
}

void area_circle()
{
    double radius;
    cout<<"Please enter the radius of the circle:";
    cin>>radius;

    cout<<"The area of the circle with radius "<<radius<<" is "<<cal_area_circle(radius)<<endl;
}
double cal_vol_cylinder(double radius,double height)
{
    return (pi * (radius*radius) * height);
}

void volume_cylinder()
{
    double radius{0};
    double hieght{0};

    cout<<"\nEnter the radius of the cyliner:";
    cin>>radius;
    cout<<"\nEnter the height of the cylinder:";
    cin>>hieght;

    cout<<"The volume of the cylinder with "<<hieght<<" height and "<<" radius is "<<cal_vol_cylinder(radius,hieght)<<endl;
}

int main()
{
    area_circle();
    volume_cylinder();
}