/**
 * ARRAY OF OBJECTS
 * we know that an array can be of any data type including struct 
 * similarly we can also have array of variables that are of type class.such varaibles are called array of objects
 * consider the following class defination
 * class employee{
 * char name[10];
 * float age;
 * public:
 *  void getdata(void);
 * void putdata(void);
 * 
 * };
 * The identifier employee is a user-defined data type and can be used to create objects that relate to different category of the employee
 * 
 * employee manager[3];
 * employee forman[15];
 * employee worker[75];
 * the array manager contains three objects(manager),namely manager[0],manager[1] and manager[2]
 * of type employee class
 * Similarly the foreman array contains 15 objects of foremen and the worker array contains 75 objects
 * since an array of objects behaves like anyother array, we can use the ususal array-accessing methods to access
 * individual elelments and then the dot operator to access memember function
 * for example
 * the statment
 * manager[1].putdata();
 * will display the data of the ith element of the array manager 
 * that is statment requests the object manager[i] to invoke the member function putdata()
 * An array of objects is stored inside ths same way as multidimentionsla array.The array
 * mananger is represented in fig1 Note that only the space for data items of the objects is created
 * memmber functions are stored seperately and will be used by all the objects
 * 
 * **/
#include<iostream>

using namespace std;

class employee
{
    private:
        char name[30];
        float age;
    public:
        void get_data(void);
        void put_data(void);
};

void employee::get_data(void)
{
    cout<<"Enter the name :";
    cin>>name;
    cout<<"\nEnter the age : ";
    cin>>age;
}
void employee::put_data(void)
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl; 
}

const int size = 3;

int main()
{
    employee manager[size];
    for(int i = 0;i<size;i++)
    {
        cout<<"\nDetails of manager"<<i+1<<endl;
        manager[i].get_data();
    }
    cout<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<"\nManager"<<i+1<<"\n";
        manager[i].put_data();
    }
    return 0;
}