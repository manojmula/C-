#include<iostream>
#include<cstring> //For c-style string function
#include<cctype>    //for character-based function

using namespace std;

int main()
{
    char FirstName[20]{};
    char LastName[20]{};
    char FullName[50]{};
    char temp[50]{};

    // //cout<<FirstName;

    // cout<<"Please enter your First Name: ";
    // cin>>FirstName;

    // cout<<"Please enter your Last Name: ";
    // cin>>LastName;
    // cout<<"===================================="<<endl;

    // cout<<"Hello "<<FirstName<<" your first name has "<<strlen(FirstName)<<" characters"<<endl;
    // cout<<" and you last name has "<<strlen(LastName)<<" characters"<<endl;

    // strcpy(FullName,FirstName);
    // strcat(FullName," ");
    // strcat(FullName,LastName);
    // cout<<"Your FullName is : "<<FullName<<" and its length is "<<strlen(FullName)<<endl;

    cout<<"Enter the full Name baaby: ";
    cin.getline(FullName,50);
    cout<<"Your Full name is : "<<FullName<<endl;

    cout<<"=============================="<<endl;

    strcpy(temp,FullName);
    if(strcmp(FullName,temp)==0)
    {
        cout<<temp<<" and "<<FullName<<" are the same"<<endl;

    }
    else if(strcmp(FullName,temp)!=0)
    {
        cout<<temp<<" and "<<FullName<<" are the different"<<endl;
    }

    cout<<"===============================================";

    for(size_t i{0};i<strlen(FullName);++i)
    {
        if(isalpha(FullName[i]))
        {
            FullName[i] = toupper(FullName[i]);
        }
    }
    cout<<"Your Full Name is "<<FullName<<endl;

     if(strcmp(FullName,temp)==0)
    {
        cout<<temp<<" and "<<FullName<<" are the same"<<endl;

    }
    else if(strcmp(FullName,temp)!=0)
    {
        cout<<temp<<" and "<<FullName<<" are the different"<<endl;
    }

}