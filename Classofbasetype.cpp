/**
 * 
 * Class of Base type
 * The constructors did a fine job in type conversion from a basic to class type
 * What about the conversion of a class to base typr
 * The constructor functions ddo not support this operation
 * luckly c++ allows us to define an overloaded casting operator that could be used to convert 
 * a class type data to a basic type
 * the gneral form of an overloaded casting operator usually refered as a conversion function
 * is
 * operator typename()
 * {
 * funcction statment
 * }
 * 
 * This function converts a class type data to typename
 * for example the operator double() converts a class objects to type double the 
 * operator int() converts a class type objects to type int and so on
 * consider the following conversion function
 * 
 * vector::operator double()
 * {
 * double sum = 0;
 * for(int i=0;i<size;i++)
 * {
 * sum =sum+v[i]*v[i];
 * return sqrt(sum);
 * }
 * this function converts a vector to the corresponding scalar magnitude
 * recalll that the magnitude of a vector is given by the square oot of sum of the squares 
 * of its components
 * the operator double() can be used as follows
 * double length = double(v1);
 * double length = v1;
 * where v1 is an object of type vector 
 * Both the staments have exactly the same effect
 * when the compiler encounters a statment that requires the conversion of the class type to a basic type
 * it quitely calls tthe casting operator function to do the job
 * the casting operator function to do the job
 * The casting operator function should satisfy the following conditions
 * it must be a class member
 * it must not specify return type
 * it must not have any arguments
 * SInce it is a member function,it iis invoked by object and therefore the values used for conversion
 * inside the function belong to the objects that invoked the function this means that the 
 * function ddose not need an argument
 * In the string example describedd in the previos section we can do the conversion from string 
 * to char as follows
 * string::operator char*()
 * {
 * return (P);
 * }
 * One class to another class typre
 * 
 * We have just seen data conversion techniques from basic to class type and a class to basic type
 * But there are situations where we would like to convert one class to another class type
 * example 
 * objx = objy; //objects of different type
 * objX is an object of class X and objY is an object of class Y
 * the class Y data typr is converted to class X type data and the converted value is assigned
 * to the objX
 * Since the conversion takes place from class Y to class X
 * Y is known as the source class and X is known as the destination class
 * such conversion between objects of different destination classes
 * Such convrsions between objects of different clsses can be carried out by ether a constructor or a
 * conversion function.The compiler treats them the same way 
 * then how do we decide which form to use
 * it depends upon where we want the type conversion function to be located in the source class
 * or in the destination class
 * we know that the casting operator function 
 * operator typename()
 * converts the class objects of which it is a member to typenmae
 * the typename may be built in user defined one another class type
 * in the case of conversion s between objects
 * typename refers to the destination class
 * therefore when a class needs to converted a casting operator function can be used i.e source class
 * the conversion takes plaace in the source class and the result is given to the destination
 * class object
 * Now consider a single argument constructor funtion which serves as an instruction from a class to any other type
 * or any other class, should make use of casting operator in the source class.on the other hand
 * tto perform the conversion from any other type class to class type
 * a constructor should be used in the destination class
 * when a conversion using a constructor is performed in the destination class
 * we must be able to access the data member of the object semt y the source class
 * as an argument
 * Since data members of the source class are private we must use special
access funtion in thhe source class to facitilate its data flow to the destination classs
 
 *
 * A data conversion example
 * let us consider an ezample of an inventory of produnts in store
 * one way of recording the details of the  products is to record thier code number total items 
 * in the stock and the cost of each item
 * Another approach os to just specify the item code and the value of the item in the stock
 * the value of the iteem in the stock.The example shown in the program uses twoo classes and shows how to convert data of one type to another
*/

#include<iostream>

using namespace std;

class invent2;  //destination class declared
class invent1{
    int code;
    int  items;
    float price;

    public:
        invent1(int a,int b,float c)
        {
            code = a;
            items = b;
            price = c;

        }
        void putdata()
        {

            cout<<"Code: "<<code<<"\n";
            cout<<"Items: "<<items<<"\n";
            cout<<"Value: "<<price<<"\n";
        }
        int getdata(){return code;}
        int getitems(){return items;}
        float getprice(){return price;}
        operator float(){return (items*price);}

        
};

class invent2
{
    int code;
    float value;
    public:
        invent2()
        {
            code=0;
            value =0;
        }
        invent2(int x,int y)
        {
            code =x;
            value =y;
        }
        void putdata()
        {
            cout<<"Code: "<<code<<"\n";
            cout<<"Value: "<<value<<"\n";
        }
        invent2(invent1 p)
        {
            code = p.getdata();
            value = p.getitems() * p.getprice();
            }

};
int main()
{
    invent1 s1(100,5,140.0);
    invent2 d1;
    float total_value;

    total_value = s1;
    d1 = s1;

    cout<<"Product details - invent1 type"<<"\n";
    s1.putdata();

    cout<<"\nStock value"<<"\n";
    cout<<"Value = "<<total_value<<"\n\n";

    cout<<"Product details -invent2 type"<<"\n";
    d1.putdata();

    return 0;
}