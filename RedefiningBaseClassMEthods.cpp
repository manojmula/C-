/***
 * Using and redefining Base class methods
 * Derived class can directly invoke base class methods
 * Derived class can override or redifine base class methods
 * Very powerful in the context of polymorphism
 * 
 * Using and redifing Base class methods
 * class Account {
 * 
 * public : void deposit (double amount)
 *             {
 *              balance +=amount;
 * }
 * };
 * 
 * class Saving_Account : public Account{
 * public:
 *      void deposit(double amount)
 * {
 * amount +=some_intrest;
 * Account::desposit(amount);
 * }
 * }
 * 
 * Static binding of method calls
 * Binding of which method to use is done at compile time
 * Deefault binding for c++ is static
 * Derived class object will use Derived::deposit
 * But,we can explicitly invoke Base::deposit from derived :: deposit
 * Ok,but limited - much more power full approarcg is dynamically binding which we will see in the next session
 * 
 *
 * Introdduction to object oriented programming in c++
 * INTRODUCTION
 * the most important feature in c++ is the class.its significant is highlited by the fact that 
 * Stroustrup initially gave the name c with classes to his new language .A class is an extensive of the ides of the structure used 
 * in c language
 * it is a new way of creating and implementing a user defined data type. we shall discuss in thid chapter the conceept class by first reviewing the tranditional structure found in c and then the ways in which classes can be designed implemented and applied
 * 
 * C STRUCTURES REVISITED
 * We know that one of the uniquw feature of the c language is structures .They provide a method of packing together data of different data types
 * a structure us convineient tool for handling logically related data items
 * It is user defined data type with a template that serves to define  its properties . once the structure 
 * type has been defined , we can create varibale of that type using the declaration that are similar to the built in type
 * decalartion For example
 * sruct student
 * {
 * char name[20];
 * int roll_number;
 * float total_marks;
 * };
 * the keyword struct declares student as a new data type that can hold three fields of the differen data types 
 * these fields are known as structure members or elements.
 * The identifier student which is refered to as structure name or structure tag can be used to create
 * variables of type student
 * Example
 * struct student A; //C declaration
 * A is a variable of type student and has three member varibale as defined by the templare.member variable s
 * can be accessed using the dot or period operator as follows
 * strcpy(A.name,"Jhon");
 * A.roll_number = 999;
 * A.total_marks = 595.5;
 * Final_total = A.total_marks + 5;
 * 
 * Structures can have arrays, pointers or structures as members.
 * 
 * LIMITATIONS OF C STRUCTURES
 * the stanadard c structure not allow the structure data type to be treated as like built in types.
 * for example consider the following structure:
 * struct complex
 * {
 * float x;
 * float y;
 * };
 * 
 * The complexnumber c1,c2,c3 can easily be assigned values using the dot operator , but we cannot add two complex
 * numbers or substrct from each other .for example
 * c3 = c1+c2;
 * is illigal in C.
 * 
 * Another important limitation of c structure is that they do not permit data hiding Structure members 
 * can be directlyy accessed by the structure variable by any function anywhere in their scope
 * in other words the structure members are publicly accessed
 * 
 * EXTENSIONS TO STRUCTURE
 * C++ supports all the features of the structures as defined in c. but c++ has expanded its capability 
 * further to suit its OOp philosophy .It attempts to bring the user-defined types as close as possible to the built in types and 
 * also provide a facility to hide the data which is one of the main principle of OOp.Inheritance a mechanism by whcih one type can inherit characterstics from another types.is also supported by c++
 * in c++ a tsructre can have bothe variable and function as members.It can aslo declare some of its members as private so that they 
 * cannot be acced directly by the external functions
 * in C++ the strcuture names are stand alone and can ve used like any other data tyypes.In other words
 * the keyword struct can be omited in the decalartion of the strductre varibale .For example , we can declare the student A as
 * student A;
 * Remember this as an error in c;
 * C++ incoperates all these extensions in another user defines type known as class.There is very little syntactical differebce beteweeen
 * structures and classes in c++ and therefore they can be used interchangably with minor modificatiobs 
 * Since class is a specially introduced in c++ most of the c++ programmers tend to use the structure for holding
 * only data and classes to hold data and functions.therefore we will not discuss structures any firther
 * NOTE: the only differencee between a structure and class in c++ is that by default the members of a class
 * is private while by default the member of a structure are public.
 * Specifying a class
 * A class is a way to bind the data and its associated functions together.it allows the data and functions to be hidden
 * if necessary from external use
 * when defining a class we are creating specifications has two parts 
 * 1) Class declaration
 * 2)class function definations
 * the class decalartion describes the type and scope of its memebers
 * the class function definations describe how class functions are implemented
 * the general form of the class declaration is
 * class class_name{
 * private:
 *  variable declaration;
 *  function decalaration;
 * public:
 *  variable decalaration ;
 *  function decalaration;
 * The class declaration is similar to struct declaration.The keyword class specifies that what follows
 * class_name;
 * The body of the class is enclosed in the  braces and terminated by a semicolon.The body of the class contaibs the declaration of variables and functions
 * these functions are variables are collectively cakllled class members
 * they are ususllay grouped under two sectiobs namely private and public to denote which of the member is 
 * privat and public
 * the keyword private and public are known as visiblity labels
 * Note that these keywords are followed by a colon
 * The class memebers that have been declared as private can be accessed only from within the class
 * on the other hand public memebers can be accessed from outside the class also
 * the data hif=ding using private declaration is the keyfeature of the object oriented programming
 * the usee of the keyword private is optional by default the member of the class are private
 * if both the labels are missing then by default all the members are private
 * Such class implementation is completely hidden from the outside world and dose not serve any purpose
 * the variable decalred inside the class are known as data members
 * and the fucntions that are declard inside class are called member functions.only the member funcctions can have
 * access to the private data members and private member functions
 * However the public members both functions and data can be accssed from outside the class
 * the binding of data and member functions together into a single class-type variable is refered to as encapsulation
 * 
 * A simple class memeber
 * A typical class declaratiob would look like:
 * class item{
 * int nummber;
 * int cost;
 * public:
 *  void getdata(int a,int b)
 *  void putdata(void);
 * };
 * }; 
 * 
 * we usually give a class some meaningful name such as item.this name now became a new type identifier
 * that can be used to decalare instance of the class type
 * the class item conatins two data members and two function members .the data members are private by default while bothe the functions are public
 * by declaration.The function get(data ) can be used to assign values to the member variable numbers and cost and putdatta for displaying their values
 * these functions aprovide the only access to the data membersfrom outside the class.this means that the data cannot be accessed by any function that is not a member of the class item
 * Note that the functionn are declared not defined Actually defination will appear later in the program
 * the data members are usually as private and the member functions as oublic
 * show two different notations used by oop analysts to represent a class
 * 
 * CREATING OBJECTS
 * remeber that the decalartion of item as shown above dose not define any objects of item but only specify 
 * what they will contain.
 * Once the class has been declared we can create varaibles of that type by using the class name(like any othe built in type variables 
 * )
 * For example
 * item x;
 * creates a variable x of type item
 * in c++ variables are known as objects .Therefore x is called an object of type item
 * we may also declare more than one object in a statment.Example:
 * item x,y,z;
 * the declaration of an object is similar to that of a variable of any basic data type
 * the necessary memeroy spaces is allocated to an object at this stage 
 * Note that class specification like structure provides only a template and dose not create memory spaces 
 * for objects
 * objects can be also be created when a class is defined by placing their names immidietly after the closing braces
 * as we do in structures 
 * this is to say the defination
 * class item{
 * }x,y,z;
 * would create the objects x,y,z of type item .
 * this practice is seldom followed because we would like to declare objects close to where they are used
 * and not at the time of defination
 * 
 * ACCESSING CLASS MEMEBERS
 * As pointed out erlier the private of a class can be accessed only through the member function of that class
 * the main() cannot conatin statment that access number and cost directly .the following is the format for calling 
 * a memebr function:
 * object-name.function-name(actual-argument);
 * for example x.getdata(100,75.5);
 * is valid and assigns the value to number and 75.5 to cost and the object x by implementing the getdata()
 * function.The assignment occur in the actual function
 * similar statment x.putdata();
 * would display the value of data members function can be invoked only by using an object (for same class)the object like
 * getdata(100,75.5);
 * has no meaning,similarly the statment
 * x.number = 100;
 * is also illigal .though x is an object of the type item to which number belongs the number (declared private)
 * can be accessed only through a member function and not object directly
 * it may be recalled that objects communicate by sending and reciciving messages.this is achived through member functions
 * for example
 * x.putdata();
 * sends a message to the object x requesting to display its contects
 * A variable decalred as public can be accessed by the objects direclty
 * 
 * 
 * DEFINING MEMEBER FUNCTION
 * member functions can be in two places
 * outside the class defination
 * inside the class defination
 * it is obvious that irrespective of the place of defination the function should perform some task
 * therefore the code for the function body would be identified in the both cases.However there is subtle difference 
 * in the way the function hedder is defined .
 * Both these approaches are discussed in details in this section
 * outside the class defination:
 * 
 * Member functions that are declared inside a class have to be defined seperately ouside the class
 * theier definations are very much like the normal functions 
 * they should have afunction header and a function body.
 * since c++ dose not support the old version of function defination . The ansi
 * prototype form must be followed fo defining the function header
 * An important difference between a member function and a normal function is that member function incoperates
 * a memberhip identity lable in the header
 * This label tells the compiler which class the function belongs to 
 * general form of a member function defination:
 * return-type class-name::function-name(argument decalaration)
 * {
 * function body
 * }
 * the membership label class-name :: tells the compiler that the function function-name belongs to the 
 * class class-name.That is the scope of the function is restricted to the class specifiedin the heaee line
 * this symbol:: is called the scope resolution operator
 * for instance, consider the member functions getdata() and putdata() as discssed above
 * they may be called as follows
 * void item::getdata(int a , float b){
 * number = a;
 * cost = b
 * }
 * void item::putdata()
 * {
 * cout<<"Number : "<<number;
 * cout<<"Cost : "<<cost;
 * }
 * 
 * 
 * Since these functions do not return any vaalue thier return type is void . function arguments are declared usibg ANSCI 
 * standard prototype
 * the memebr functions have some special characterstics that are often used in program development these characterstics are
 * -> severak different classes can use same function name.the membership label will resolve their scope
 * ->member functions can access the private data of the class.A non member function cannot do so(However exception is friend function discussed later
 * )
 * ->A member function can calll another member function directly without using a dot operator
 * 
 * INSIDE CLASS DEFINATION
 * Another method of defining a memeber function is to replace the function declaration bt the catual 
 * function defination
 * inside the class
 * For example
 * we could define the item class as follows
 * class Item{
 * int number
 * float cost;
 * public:
 *  void getdata(int a,float b)
 * {
 * number = a;
 * cost = b
 * }
 * void putdata(void)
 * {
 * cout<<number<<"\n";
 * cout<<cost<<"\n";
 * }
 * };
 * 
 * when a function is defined inside a class,it is treated as inline function.Therefore all the restrictions 
 * and limitations that apply to an inline function are also applicable here.Normally only smalll
 * dfunctions are defnes inside the class defination
 * 
 *  ***/
#include<iostream>

using namespace std;

class Item{

    private:
        int number;
        int cost;
    public:
        void getdata(int a,float b);
        void putdata()
        {
            cout<<"Number : "<<number<<endl;
            cout<<"Cost : "<<cost;
        }

};
void Item::getdata(int a , float b)
{
    number = a;
    cost = b;
}

int main()
{
    Item x;
    cout<<"\n object x "<<endl;
    x.getdata(100,299.5);
    x.putdata();

    Item y;
    cout<<"\n object y "<<endl;
    y.getdata(200,175.50);
    y.putdata();

    return 0;

}

/**
 * this program features the class item.this class contains two private variables and two public functions 
 * the member functions getdata() which has been defined outside the class supplies value to the both the variables
 * Note: the use of statments such as 
 * number = a;
 * in the function defination of getdata()this show that the member function have the direct access to private data items
 * the member function putdata() has been defined inside the class and therefore behaves like an inline function this
 * function displays the values of the private varaibles number and cost
 * the progra creates two objects x and y int two different statments this can be combined in one statnebt as 
 * item x,y;
 * 
 * **/