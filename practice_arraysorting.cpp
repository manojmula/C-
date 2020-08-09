#include<iostream>
using namespace std;

#define MAX_VALUE 100

int main()
{
    int arr[MAX_VALUE];
    int n,i,j;
    int temp;

    //read total number of elements to read
    cout<<"Enter the number of elements : ";
    cin>>n;

    //check bound
    if(n<0 || n>MAX_VALUE)
    {
        cout<<"Input invalid range"<<endl;
        return -1;
    }

    //read n elements
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element ["<<i+1<<"]";
        cin>>arr[i];
    }

    //print input elements
    cout<<"Unsorted Array elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    //sorting elements-ASCENDING ORDER
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //print sorted elements

    cout<<"Sorted (Ascending order) Array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
        
    }
    cout<<endl;
    return 0;
}