/**
 * The standard template library
 * Generic Programming with class template library
 * what is a c++ class template
 * similar to function template but at the class level
 * allows plugging in any data
 * compiler generates the appropriate class from the blue print
 * 
 * 
 * Lets say we want a class to hold integere and a string 
 * 
 * class item{
 * private:
 *  std::string name;
 *  int value;
 * public:
 *  Item(std::string name,int value)
 *  :name{name,value{value}
 * {}
 * std::string get_name() const {return name;}
 * int get_value() const {return value;}
 * };
 * 
 * but we would like our items class to be able to hold any data type of data in addition to the
 * string
 * we canno overload class names
 * we dont want to use dynamic polymorphism
 * **/