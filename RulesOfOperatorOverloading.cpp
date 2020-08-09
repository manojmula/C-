/***
 * Rules for overloading opertaor
 * Although it looks simple to redefine the opertaor these are certian restrictions and limitations
 * in overloading them.some of them are listed below
 * 1)Only existing opertaors can be overloaded.New operators cannot be created
 * 2)The overloaded operator must have atleast one operand that is of user defined type
 * Overloaded operators follow syntaxrules of original operators.They cannot be overriden
 * there are some operators that cannot be overrided
 * we cannot use friend functions to overload certian operators
 * however member functions can be used to overload them
 * unary operators overloaded by means of a member functions take no explicit arguments and return no
 * explicit values
 * but those oveerloaded by means of a friend functions
 * take one reference argument the object of the relevent class
 * Binary operators overloaded through membe function take one explicit argumen and those which are 
 * overloaded through a frieend functions take two explicit arguments
 * when using binary operators oerloaded through member function the left hand operand must be an object of the relevant class
 * binary arthmetic operators such as +,-,* and / must explicitly return a value
 * they must not attempt to chnage thier own arguments
 * Limitations:
 *  Some of the operators like :: => and size of cannot be overloaded
 * By operator overloading , you cannot change the precendece associative and number of arguments of an opertaor
 * 
 * siize of size of operator
 * . Membership operator
 * .*pointer to memeber operator
 * ::Scope resolutoion operator
 * ?:conditional operator
 * where friend functions cannot be used
 * = Assignment operator
 * () Function call operator
 * [] sunscript operator
 * ->Class memeber access operator
 * Type conversions
 * We know that when constants and variables of different types are mix in an expression
 * C applies automatic type conversion to operands as per certain rules
 * Similarly an assignment operations also causes automatic type conversion
 * the type off data on the right of an asignment operator is automatically converted to the typ of the variable
 * on the left for example the statments
 * 
 * int m;
 * float x = 3.14159;
 * m = x;
 * 
 * convert x to an integer before its value is assigned to m
 * Thus the factorial part is truncated the type
 * conversions are automatic as long as the datatyped involved are built in types
 * 
 * what happens when they are user defined datatypes
 * consider the following that adds two objects and then assigns the result to a third object
 * v3=v1+v2;
 * when the objects are of the same class type the operations of addition and assignment are carried out smoothly
 * and the compiler dose bot make any complaints.we have seen in the case of class what happens when
 * they are of different class
 * since the user defined data types are designed by us to suit our reuirementsthe compiler dose not
 * support automatic type conversion for such data types
 * we must therefore design the conversion routimes
 * by ourseleve if such operations are required
 * Three types of situations might arise in the datat conversion between uncompatable types
 * Conversion from basic type to class type
 * conversion from class type to basic type
 * conversion from one class type to another class type
 * we shall discuss all three cases in details
 * Basic to class type
 * The conversion from basic type to class type is easy to acomplish
 * 
 * it may be recalled that the use of constructors was illustriated in a number of examples to initialize objects
 * for example
 * a constructor was used to build a vector objectsfor example a constructor was used to build vector object
 * from an int type arraysimilarly we used another constructor to build a string type object char* type variable
 * these are all examples where constructors perform a defacto type conversion from the arguments type to the constructor class type
 * consider the following
 * string::string(char *a)
 * {
 * length = strlen(a);
 * p = new char[length+1];
 * strcpy(p,a);
 * }
 * the constructor builds a string type object from a char* type variable a .
 * The varaible length and p are data members of the class string once the construcor has been defined
 * in the string class.it can be used for conversion from char type to string type
 * Example:
 * string a1,s2;
 * char* name1, = "IBM PC";
 * char* name2 = "Apple computers";
 * s1 = string(name1);
 * s2 = name2;
 * the statment
 * s1 = string(name1);
 * first converts name1 from char8 to type string type and then assigns the string typpe values
 * to the object s1
 * the statment
 * s2 = name2;
 * also does the same job by invoking the constructor implivitly
 * let us consider another example of converting an int type to a class type
 * class time{
 * int hrs;
 * int mins;
 * public:
 *  time(int t)
 * {
 * hrs = t/60;
 * mins = t*60;
 * }
 * the following conversion statments can be used in the sytem
 * time T1;
 * int duration = 85;
 * T1 = duration;
 * After this conversion the hrs member to T1 will contain the value of 1 and mins member a vluw of 20
 * and hours denoting 1 and 25 mins
 * Note:
 * The constructors used for the type conversions take a single argument whose type is to be converted
 * in bith the examples the left hand operand of= operator is always a class object.therefore 
 * we can accomplish this conversion using a overloaded =operator
 * 
 * Class Basic typr
 * The constructor did a fine job in type conversion from a basic to class type
 * What aout the conversion from a class type to basic type
 * the constructor functions do not support this operatio luckily c++ allows us to define ann overloaded
 * casting operator that could be used to convert a class type to basic data type 
 * the general form of an overloaded casting operator usually reffered as a conversion funtcion
 * operator typename()
 * {
 * function statment
 * }
 * this function converts a class type data to type names
 * for example the operator double() converts a class objects to type double,the operator int()
 * converts a class type object to type int and so on
 * vector::operator double()
 * {
 * double sum = 0;
 * for(int i = 0;i<size;i++)
 * {
 * sum +=v[i]*v[i];
 * 
 * }
 * return sqrt(sum);
 * }
 * this function converts a vector to a corresponding scalar magnitude
 * Recall that the magnitude of a vector is given by the sqrt of the sum of the squares of its components
 * the operator double() van be called used as following
 * double length = double(v1);
 * double length = v1;
 * 
 * where v1 is an obejct of type vector.both the statments have exactly the same effect
 * when the compiler encounters a statment that requires the conversion of a clas type to a basic type
 * it quitely calls the casting operator function to do that job
 * the casting operator function should satisfy the following functioms
 * it must be a class memeber
 * it must not specify a return type
 * it must not have arguments
 * since it is a memeber function it is invoked by the object and therefore the values for conversion
 * inside the function belong to the obejct that invoked the function
 * this means that the function dose not need the arguments
 * in the string example described in the previous section we can do the conversion from the string to char* as follows
 * string::operator char*()
 * {
 * return(P);
 * }
 * one class to another class
 * we have just seen data conversion technique ffroma basic to class type and a class type to basic type
 * but there are situations where we would like to convert one class to another class
 * example
 * obj1 = obj2//objects are of different types
 * objx is an object class of x
 *  and objy is of object class of y
 * this class y data is converted to class x
 * type data and the converted value is assigned to the objx since the conversion takes place from class Y to class X
 * Y is known as source class and X is known as destination class
 * Such conversions between objects of different classes can be carried out by either a constructor or a conversion function
 * The compieler treats them the same way
 * then how do we decide which form too use
 * it depends upon where we want the typr conversion function to be located in the source class or the 
 * destination class
 * we know that the casting operator function
 * operator typrname()
 * 
 * 
 * };
 * 
 * **/