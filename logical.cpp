/* Logical operator precedence
not has the higher precedence than and
and has higher precedence than or

not is a unary operator
and and or are binary operator

short surcuit evaluation is nothing but when evaluating a logical expression c++ stops as soon as the result is known
*/
#include<iostream>

using namespace std;

int main()
{
    int num{};
    const int lower{10};
    const int upper{20};

    cout<<boolalpha;

    cout<<"Enter an integer - bounds are "<<lower<<" and "<<upper<<":";
    cin>>num;

    bool within_bounds{false};

    within_bounds = (num>lower && num<upper);
    cout<<num<<" is between "<<lower <<" and "<< upper<<" : "<<within_bounds<<endl;

    return 0;
}