/***
 * Polymorphism
 * The override specifier
 * we can override base class virtual function
 * the functio signature and return must be exactly same
 * if they are different then we have redefination not overriding
 * Redifination is statically bound
 * Overriding is dynamically bound 
 * C++11 provides an override specifier to have the compiler ensure overriding
 * 
 * Using final specifiar
 * C++ final specifier
 * When used at the class level
 * prevents the class from being derived from
 * 
 * when used at the method level 
 * prevents virtual method from being overidden in derived class
 * 
 * use base class reference
 * We can also use base class reference with dynamic polymorphism
 * useful when we pass objects to functions that expects a base class reference
 * 
 * using base class references
 * Account a;
 * Account &ref = a;
 * ref.withdraw(1000);
 * 
 * Trust r;
 * Account &ref1 = r;
 * ref1.wwithdraw(1000); //trust::withdraw
 * 
 * using base class references
 * void d_withdraw(Account &account,double amount)
 * {
 *  account.withdraw(amount);
 * }
 * 
 * Account a;
 * do_withdraw(a,1000);
 * 
 * trust t;
 * do_withdraw(t,1000);
 * **/

