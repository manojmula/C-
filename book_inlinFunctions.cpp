#include<iostream>

using namespace std;

inline float mul(float x,float y){
   
    return x*y;

}

inline double divide(double x, double y)
{
    return x/y;
}

int main()
{
    float a = 12.34;
    float b = 9.82;

    cout<<mul(a,b)<<endl;
    cout<<divide(a,b)<<endl;

    return 0;
}