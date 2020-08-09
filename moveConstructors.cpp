/***
 * Move Constructors
 * Sometimes when we execute code the compiler creates unnamed teemperary vaalues
 * int toata{0};
 * total = 100+200;
 * 
 * 100+200 is evaluates and 300 stored in an unnamed temp value;
 * the 300 is then stored in the variable total
 * then the temp value is discarded
 * 
 * the same happens with objects as well
 * when is move constructor is usefful
 * when is it useful?
 * Sometimes copy constructors are called many times automatically due to copy simantics in c++
 * copy constructors ddoing ddeep copying can be significant performance bottel neck
 * c++11 introduced move simantics and the move constructor 
 * move constructor moves an object rather than copy
 * optional but rcomended when you have raw pointer
 * copy elision c++ may optimize copying away completely (return value optimization)
 * 
 * r value refrences
 * Used in moving semantics and perfect following
 * move semantics is all about r-value references
 * used by move constructor and move assignment operator to efficiently move an object rather than copy it
 * R-value refrence operator(&&)
 * **/