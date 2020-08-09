/*the ==  and != operators 
compare the value of the 2 expressions

Evaluate to a Boolean (True or False. 1 or 0)
commoly used in control flow statments

expr1 == expr2
expr1 != expr2
100 == 200 
num1 != num2
*/
#include<iostream>

using namespace std;

int main()
{
    // bool equal_result{false};
    // bool not_equal_result{false};

    // int num1{},num2{};

    // cout<<boolalpha;

    // cout<<"Enter two integeers separated by a space:"<<endl;
    // cin>>num1>>num2;
    // equal_result=(num1==num2);
    // not_equal_result!=(num1==num2);
    // cout<<"Comparision results (equal):"<<equal_result<<endl;
    // cout<<"Comparision results (not equal):"<<not_equal_result<<endl;
    
    // char char1{},char2{};
    // cout<<boolalpha;
    // cout<<"Enter two characters seperated bt space:";
    // cin>>char1>>char2;
    // bool equal_result = (char1==char2);
    
    // bool not_equal_result = (char1!=char2);
    // cout<<"Comparision results (equals):"<<equal_result<<endl;
    // cout<<"Comparision result(not Equals):"<<not_equal_result<<endl;

    double double1{},double2{};
    cout<<"Enter two doubles seperated by a space:";
    cin>>double1>>double2;
    
    cout<<boolalpha;

    bool equal = (double1==double2);
    bool notEqual = (double1!=double2);

    cout<<"The result of (equal):"<<equal<<endl;
    cout<<"The result of (Not equal):"<<notEqual<<endl;

    return 0;


}