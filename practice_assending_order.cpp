#include<iostream>
using namespace std;

#define MAX 100

int main()
{
    int arr[MAX];
    int n,i,j;
    int temp;

    //read total number of elements read
    cout<<"Enter total number of elements to read:";
    cin>>n;

    //check bound
    if(n<0 || n>MAX)
    {
        cout<<"Invalid input range"<<endl;
    }

    //read n elements
    for(i=0;i<n;i++)
    {
        cout<<"Enter elements ["<<i+1<<"]";
        cin>>arr[i];
    }

    //print input elements
    cout<<"Unsorted Array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    //sorting - Descending ORDER
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;i++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //print sorted array 
    cout<<"Sorted (Descendng order) Array elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";

    }
    cout<<endl;
    return 0;
}