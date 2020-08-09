/**
 * INTRODUCTION
 * We have seen so far a few examples of classes being implemented 
 * in all casses we have used memmber functions such as putdata() and setvalue() to provide initial
 * values to the parameters private members variable
 * for example the following statment
 * A.input();
 * invokes the member function input() which assignes the initial values to the data items of object A.
 * Similarly 
 * the statment 
 * x.getdata(100,299.95);
 * passes intiial values as arguments to the function getdata() where these values are assigned to the
 * prrivate varaibles of object x
 * all these function call statments are used with appropriate objects that have already
 * been created
 * these functions cannot be used to initialize the member varaibles at the time of creation of 
 * objects
 * Providing the initial values as described above dose not conform with phylosophy oof c++
 * language 
 * we stated earlier that one of the aims of c++ is to create user-defined data tpyes such as class
 * that behaves very similar to that of in-built type
 * This means that we should be able to initilaize the class type varaible when it is declared much the 
 * same wat as initialization of an ordinary varaible.
 * For example 
 * varaible(object)
 * int m =20;
 * float x = 5.75;
 * are valid initialization statmenets of base=ic data types
 * similary when a varaible of built in type goes out of the scope the compiler automatically destroyed
 * the variable
 * But it has not happned with objects we have so far studied
 * It is therefor clear that some more features of classes need to be explored that would enable us 
 * to initialize the objects when they are cretaed
 * and destroyed wjen their precense is no longer necessary
 * C++ provides a specail member function called the constructer which enables an object to initialize itself
 * when it is created
 * this is known as automatic initialization of objects
 * it also provides another member function the destructor that destroyes the object when they are no
 * longer required
 * 
 * CONSTRUCTORS
 * A Constructor is a special member functions whose task is to initialize theobjects of its class
 * it is special because its name is the same as the class name
 * the constructor is invoked whenever the object of its assicated class is created
 * it is called constructor because it constructs thhe value of data members of the class
 * A constructor is declared and defined as follows
 * Class integer
 * {
 * integer(void);
 * }
 * 
 * When a class contains a constructor like the one defined above it is guaranteed that an object created
 * by the class will be initialized automatcally for example
 * the declaration 
 * integer int1;
 * not only creates object int1 of type integer but also initilaizes its data members m and n
 * to zero there is no need to write any statments to invoke the constructor function
 * as we do with the normal member function
 * if a normal member function is defined for zero initialization we would need o invoke this funtion
 * for each of the objects seperately.
 * This would be very inconviniet 
 * if there are a large number of objects
 * 
 * A constructor that accepts no parameters is called the default constructor
 * The deafulat constructor for class A is A::A() 
 * if no such constructor is defined then the compiler supplies default constructor
 * there fore a  statment such as
 * A a;
 * invokes the default constructor of the compiler the object a
 * The constructor function has some special characterstics
 * these are
 * They should be declared in the public section
 * they are invoked automatically when the objects are created
 * they do ot have return types not even void therefore and they cannot return values
 * They cannot be inherited though a derived class can call the base class constructor
 * Like other c++ functions they can have default arguments
 * Constructor cannot be vertiual
 * they are discusse din chapter 9
 * we cannot refer to thier address
 * An object with a constrcutoe or destructor cannot be used as  member of a unionthey make
 * implecit calls to the operators new and delete when memory allocation is required
 * Remember when a constructir us declared for a class,initilixation of the class objects becomes
 * mandatory
 * 
 * ***/