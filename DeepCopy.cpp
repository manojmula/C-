/***
 * User-provided copy contructor
 * Create a copy of the pointed-data
 * Each copy will have a pointer to unique storage in the heap
 * Deep copy when you have raw pointer as a class daataa meember
 * 
 * **/

#include<iostream>

class Deep{
    private:
        int *data;
    public:
        void set_data_value(int d){*data=d;}
        int get_data_value(){return *data;}

        //Constructor
        Deep(int d);
        //Copy constructor
        Deep(const Deep &source);
        //Destrcutor
        ~Deep();

};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep :: Deep(const Deep &source)
:Deep{*source.data}
{
    cout<<"Copy Constructor - deep copy"<<endl;
}
Deep::~Deep(){
    delete data;
    cout<<"Destruct freeing space"<<endl;
}

void disply_deep(Deep s)
{
    cout<<s.get_data_value<<endl;
}

int main()
{
    Deep obj1{100};
    disply_deep(obj1);

    Deep obj2{obj1};

    obj2.set_data_value(1000);

    return 0;

}