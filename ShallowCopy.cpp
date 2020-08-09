/**
 * Shallow vs deep copy 
 * Consider a class that contains a pointer as a datat member
 * Constructor allocates storage ddynamicaclly and initilizes the pointer
 * Destrucctor releases the memory allocated by the constructo
 * what happens in the default copy constructor
 * 
 * The default copy constructor
 * memberwise copy
 * Each data member is copied from source object
 * The pointer is copied NOT what it points to(shallow copy)
 * 
 * problem wwhen we release the storage in the destrcutor, the other object still refers to the realesed storage
 * 
 * **/

#include<iostream>

using namespace std;

class Shallow{
    private:
        int *data;
    public:
        void set_data_value(int d){*data = d;}
        int get_data_value(){return *data;}

        //constructor
        Shallow(int d);
        //Copy constructor
        Shallow(const Shallow &source);
        //Destrucctor
        ~Shallow();

};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}
Shallow :: Shallow(const Shallow &source):
data (source.data)
{
cout<<"Shallow constructor - shallow copy"<<endl;
}

Shallow::~Shallow()
{
    delete data;
    cout<<"Destructor freeing space"<<endl;
}
void display_shallow(Shallow s)
{
    cout<<s.get_data_value()<<endl;
}

int main()
{
    Shallow obj1{100};
    display_shallow(obj1);

    Shallow obj2{obj1};
    obj2.set_data_value(1000);

    return 0;
}
