//Function area is overloaded three times
#include<iostream>

using namespace std;
//DeclarationOffunctionPrototypes

int area(int);
int area(int,int);
double area(double);

int main()
{
    cout<<"Calling the area() function for computing the area of a square (side=5) - "<<area(5)<<endl;
    cout<<"Calling the area() function for computing the area of a rectange (length = 5,bredth = 10) - "<<area(5,10)<<endl;
    cout<<"Calling the area() function for computing the area of a circle (radius=5.5) - "<<area(5.50)<<endl;
}

int area(int side)
{
    return side * side;
}
int area(int length,int bredth)
{
    return length*bredth;
}
double area(double raduis)
{
    return (3.14*raduis*raduis);
}