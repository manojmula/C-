/**
 * An abstract class is one that is not used to create objects
 * An abstract class is designrf only to act as a base class delibrately to be inherited by other classes
 * it is desiged concept in program development and provides a base upon which other class may be built
 * 
 * in real programming scerios the concepy of abstarct classes holds a great significance
 * they are delibrately used in programming for creating derived classes and are not meant for creating
 * objects
 * as demonstrated for student class program earlier
 * This concept can be further explained through examples of an absract base class vehicle which may be declared in a
 * program for deriving LMV light motor vehicle
 * HMV heavy motor vehile and tw which is two wheeler
 * derived class
 * A pure virtial function spec() may set the specifications of the lmv as per its four wheel and smaller
 * engine and that of HMV as per its lighter engine or more wheel and relatively larger engine
 * 
 * while using the abstarct class vehicle may look to be optional here it holds significant as par 
 * as logical programming design is concerned
 * Also we may include some of the common characterstic of all the derived class
 * in the abstarct base classitself
 * For example speed , milagen rpm etx
 * are some of the charctersiocs of common accross all derived class of the vehicles base class
 * However one must never forget the fact that by defination a class can be considered as an absract class
 * if it has atleast one pure virtual function
 * 
 * 
 * the general form of using abstarct class as shown
 * class vehicle
 * {
 * private:
 * data-tpe d1;
 * data-type d2;
 * public:
 * virtual void spec()=0;//pure virtual function
 * };
 * class LVM:public vehicle
 * {
 * void spec()
 * }
 * 
 * ***/