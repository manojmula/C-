/**
 * LOCAL CLASSES
 * Classes can be defined and used inside a function or a block ,such classes are called local classes
 * void test(int a )
 * {
 * class stdeny{
 * }}
Local classes can be use global varaibles(declared avove the function) and static varaibles declared inside the function but cannot use automatic
local varaibles the global varaibles should be used with the scope operator * 
there are some restrictions in considering local classes
they cannot have a static data members and and member functions must be defined inside the local classes
Encloing function cannot access the privates members of a local class
However we can achive this declaring enclosing function as a friend
 * **/