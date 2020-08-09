/**
 * Dereferencing a Pointer
 * Access the data were pointing to dereferencing a pointer
 * If score_ptr is a pointer and has valid address
 * Then you can access the data at the address contained in the score_ptr using the dereferencing operator *
 * **/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    // int score{100};
    // int *score_ptr{&score};

    // cout<<*score_ptr<<endl;

    // *score_ptr = 200;
    // cout<<*score_ptr<<endl;
    // cout<<score<<endl;

    /**
     * Access the data we are pointing to
     */ 
    //  double high_temp{100.7};
    //  double low_temp{37.4};
    //  double *temp_ptr{&high_temp};
     
    //  cout<<*temp_ptr<<endl;
      
    //  temp_ptr = &low_temp;
     
    //  cout<<*temp_ptr<<endl;

    int score{100};
    int *score_ptr{&score};

    cout<<*score_ptr<<endl;

    *score_ptr = 200;

    cout<<*score_ptr<<endl;
    cout<<score<<endl;

    cout<<"\n========================"<<endl;

    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};

    cout<< *temp_ptr<<endl;
    temp_ptr = &low_temp;
    cout<<*temp_ptr<<endl;

    cout<<"\n========================"<<endl;

    string name{"Frank"};
    string *string_ptr{&name};

    cout<<*string_ptr<<endl;
    name = "James";
    cout<<*string_ptr<<endl;

    cout<<"\n========================"<<endl;

    vector <string> stooges {"Larry","Moe","Curly"};
    vector <string> *vector_ptr{nullptr};

    vector_ptr =&stooges;

    cout<<"First stooges: "<<(*vector_ptr).at(0)<<endl;

    cout<<"Stooges: ";
    for(auto stooges:*vector_ptr)
    {
        cout<<stooges<<endl;
    }

    cout<<endl;

    
}