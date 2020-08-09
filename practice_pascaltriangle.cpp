#include<iostream>
using namespace std;

int main()
{
    int h,digit;

    cout<<"Enter height: ";
    cin>>h;

    cout<<endl;

    if(h<1)
    {
        cout<<"PASCAL TRIANGLE IS NOT POSSIBLE!!";
    }
    else
    {
        for(int i =0;i<h;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(i==0 || j==0)
                {
                    digit = 1;
                }
                else
                {
                    digit = digit * (i-j+1)/j;

                }
                cout<<digit<<" ";
                
            }
            cout<<"\n";
        }
    }
 return 0;   
}