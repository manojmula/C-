/*******
 * A simple and very old method of sending secret text messages in the substitution cipher.
 * you might have used this sipher with your friends when you were kids
 * Basically each letter of the alphabet gets replaced by another letter of the alphabet
 * for example eevery 'a' get replaced wuth 'X' and every 'b' get replaced with a 'Z' etc
 * 
 * write a program that asks user to enter a secret message
 * 
 * Encrypt this message using the substitution cipher and display the encrypted message
 * then decrypt and encrypt back the substitution to orginal message
 * 
 * You may use the 2 strings below to your substitution 
 * for example to enc
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * ******/


#include<iostream>
#include<string>

using namespace std;

int main()
{
    string message{};
    cout<<"Please enter your secret message below:"<<endl;
    cout<<"===================================="<<endl;
    getline(cin,message);

    string shipher{};

    for(char c: message)
    {
        shipher += c + 3;
    }

    cout<<"============================"<<endl;
    cout<<"Cipher text: "<<shipher<<endl;
    cout<<"============================="<<endl;

    string deshipher{};

    for(char c : shipher)
    {
        deshipher += c -3;
    }
    cout<<"Deciphered text : "<<deshipher<<endl;
}