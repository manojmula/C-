/**
 * virtual destructors
 * problems can occur when we destroy polymorphism objects
 * if a derived class is destroyed by deleting its storage via the base class pointer and the class
 * is a non virtual destructor
 * then the behavoir is undefined in the c++ standard
 * derived objects must be destroyed in the correct order starting at the correct destrucror
 * 
 * virtual destructors
 * ssolution/rule
 * if a class has virtual funtions
 * always provide a public virtual destructor
 * if base class destructor is virtual then all class destructors are also virtual
 * 
 * class Account 
 * {
 * public:
 *  virtual void withdraw(double amount);
 *  virtual ~Account();
 * }
 * 
 * **/