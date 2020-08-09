/***
 * Copy assignment operator
 * c++ provides a default assignment operator used for asigning one object tp another
 * Mystring s1{"frank"};
 * Mystring s2 =s1; //Not assignment
 * same as Mystring s2{s1};
 * ss2 =s1; assignment
 * Default is memberwise assignment(shallow copy)
 * if we have raw pointer data memeber we must deep copy
 * 
 * overloading copy assignment operator
 * 
 * Type &Type :: operator = (const Type &rhs);
 * 
 * Mystring &Mystring :: operator =(const Mystring &rhs);
 * 
 * s2 =s1;      /we write this
 * s2.opeartor =(s1)    //Opertor = method is called
 * ****/