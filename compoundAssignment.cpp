/*Section 8 challenge

For this program i will be using US dollars and cents
write a program that asks the user to enter the following:
An integer repressenting the number of cents

you may assume that the number of centes entered is greater than or equal to zero 

the program should then display how to provide that change to the user.

In the US:

    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nikel is 5 cents
    1 penny is 1 cent.
    */

   #include<iostream>

   using namespace std;

int main()
{
    int cents{};

    cout<<"Please provide the Number of cents: ";
    cin>>cents;

    int dollars{0},quarter{0},dimes{0},nickels{0},pennies{0};

    dollars = cents/100;
    quarter = (100-cents)/25;
    dimes = (100-cents)/10;
    nickels = (100-cents)/5;
    pennies = (100-cents);

    cout<<"You can provide this change as follows:"<<endl;
    cout<<"Dollars : "<<dollars<<endl;
    cout<<"Quarters : "<<quarter<<endl;
    cout<<"Dimes : "<<dimes<<endl;
    cout<<"Nickels : "<<nickels<<endl;
    cout<<"Pennies : "<<pennies<<endl;

}