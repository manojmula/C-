/****
 * we have already seen how to use pointers to access the class membes
 rs
 as stated earlier a pointer can point to an object created by a class
 Consider the following statment
 item x;
 where item is a class and x is an object defined to be an type item
 Similarly we can define a pointer it_ptr of ttpe iten as follow
 item *ptr;
 object pointers are useful in creating objects at run time
 we can also use an object pointer to acces the public member of an object
 * 
 * 
 * class item
 * {
 * int code;
 * float price;
 * public:
 *  
 * void get_data(int a,int b)
 * {
 * code = a;
 * price = b;
 * }
 * void show(void)
 * {
 * cout<<"Code : "<code<<"\n";
 * }
 * };
 * 
 * 
 * Let us declare an item varaible x and a pointer ptr to x as follows
 * 
 * the pointer ptr is initilized with the address of x
 * we can refer to the member functions of item in two ways
 * one by using the dot operator and the object
 * and nother by using arrow opperator and the object pointer the statments
 * 
 * x.getdata();
 * x.showdata();
 * 
 * since *ptr is an alias of x we can use this method
 * (*ptr).show();
 * the pranthesis are nessasary because the dot operator has higher precedence than the indirection operator
 * *
 * item *ptr = new item;
 * this stament allocates enough memory ffor the data members in the object structure and
 * asssingn the address of the memoy space to ptr
 * then ptr can be used to reference to the member as shon
 * ptr->show()
 * if a class has a constrctor with arguments and dose not include empty constructor then we 
 * must supply the arguments when the object is created
 * 
 * we can also create an created array of objects using pointers for example, the statment 
 * item *ptr = new item[10];
 * creates memory space for an array of 10 objects of items Remenber in such cases if the class 
 * contains constructor it must also contain empty constructor;
 * **/

#include<iostream>

class Item{
    int code;
    float price;
    public:
    void getdata(int a,float b)
    {
        code = a;
        price = b;
    }
    void show(void)
    {
        std::cout<<"Code = "<<code<<std::endl;
        std::cout<<"Price = "<<price<<std::endl;

    }

};

const int size = 2;

int main()
{
    Item *p = new Item[size];
    Item *d = p;
    int x,i;
    float y;

    for(i = 0;i<size;i++)
    {
        std::cout<<"Input code and price for the item"<<i+1;
        std::cin>>x>>y;
        p->getdata(x,y);
        p++;
    }

    for(i = 0;i<size;i++)
    {
        std::cout<<"Item : "<<i+1<<std::endl;
        d->show();
        d++;
    }
}