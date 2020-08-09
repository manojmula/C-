/***
 * Inheritance is the mechanism of driving certain properties of one class into another
 * we have seen in detail how this implemnted using the concept of derived classes 
 * c++ supports yet another way of inheritance properties of one class to another 
 * this approachtakes a view that an object can be controlled of many other objects
 * that is a class can contain objects of another classes as its member as shown below
 * class alpha
 * class beta
 * class gama{
 * alpha a;
 * alpha b;
 * }
 * All objects of gama class will contain objects a and b
 * this kind of relationship is called containership or nesting
 * creation of an object that contains another object is very difficult than the creation of an 
 * independent object
 * An object is created by its constructor when its declared
 * with arguments
 * on the otherhand, a nested object is created in two stages
 * First, the memberr objects are created using their respective constructors and then the 
 * other member is created
 * this means constructors os all the memmber objects should be valled before own constructor bosy 
 * is executed
 * This is accomplishes using an initilizattion list in the constructor of the nested class
 * class Gama
 * P
 * arglist is the list of arguments that is to be supplied when a gama object is defined
 * these parameters are used for initilization the memebrs of gama
 * arglistq is argument list for the constructor if a and arglist 2 is list othey are simply varaibles and constarnts
 * we cant use as many member objects as are required in a class
 * For each member objects we add a constrctor call is initilaized
 * the constructors of the member objects are called in the order in which they are declared in the nested class
 * 
 * ***/