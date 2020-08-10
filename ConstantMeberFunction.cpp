/****
 * If a member function dose not alter any data in the class then we may declare it as 
 * a constsnt member function as follows
 * void mul(int,int) const;
 * double geet_balance() const;
 * 
 * the qualifier const is appended to the function prototypes in both declaration and 
 * defination 
 * The compiler will generate an error messahge if such functions try to alter the data
 * values
 * 
 * Pointer to members;
 * It is possible to take advantage of a member of a class and assign it to pointer
 * The address os a member can be obtained by applying the operator & to a fully 
 * qualified class member
 * name
 * A class member pointer can be declared using the operator ::* with the class name
 * for example
 * 
 * class A
 * {
 * private:
 * int m;
 * public:
 * void show
 * 
 * }
 * 
 * int A::*ptr = &A::m;
 * 
 * the ip pointer created this acts like a class member in that it must be invokes with 
 * a class object in the statment 
 * the phrase A::* means poiunter to member of a class
 * the phrase &A::m means the address of the m member of class A
 * remember the following statment is not valis
 * int *p = & ,m
 * this is becuase m is not simply an int type data 
 * it has menaing only when it is associated wth the class to which it belongs 
 * the scope operator must be applied to both pointer and member
 * The pointer ip can also be used to access the member m inside member function 
 * or friend function 
 * let us assume that a is an object of A declared in a member function
 * we can access m using the pointer ip as follows
 * cout<<a.*ptr;
 * cout<<a.m;
 * 
 * now look at the following code
 * ap = &a    // ap is an pointer to object a
 * cout<<ap->*ip;
 * coutMMap->m;
 * 
 * the dereferencing operator ->* is used to access a member when we use pointers to both objects and the member
 * the dereferncing operator* is used when the object itslf us ysed with the poinyermeber
 * note that *ip is used like member name
 * 
 * we can also design pointes to member functions which can be invoked using the dereferencing 
 * operators in the main as shown below
 * 
 * object-name.*ptrmemberfunction
 * 
 * *******/