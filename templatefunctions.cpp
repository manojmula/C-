/***The standard template library
 * 
 * what is c++ template>
 * Blueprrint
 * function and class template
 * allow plugging in any data type
 * compiler generated the appropriate function/class from blue print
 * generic programming/meta-programming
 * 
 * max function as template function
 * we can replace type we want to generelize with a name say T
 * but now this wondt compile
 * 
 * template<typename T>
 * T max(T a,T b)
 * {
 * return (a>b)?a:b;
 * }
 * 
 * max function as a template function
 * Now the compiler can genearye the oppropriate function from the template
 * note this happens at the compile time
 * 
 * int a{10};
 * int b{20};
 * 
 * std::cout<<max<int>(a,b);
 * 
 * many times the compiler can deduce the typee and the template parameter not needed
 * depending on the type of a and b the compiler will figure it out
 * 
 * max function as a template function
 * and we can use almst any typee we need
 * char a{'A'};
 * char b{'Z'};
 * 
 * std::cout<<max(a,b)<<std::endl;
 * 
*/
#include<iostream>
#include<string>

template<typename T>
T min(T a,T b)
{
    return(a<b)?a:b;
}

template<typename T1,typename T2>
void func(T1 a,T2 b)
{
    std::cout<<a<<" "<<b<<std::endl;
}

struct Person
{
    std::string name;
    int age;
    bool operator<(const Person &rhs)const{
        return this->age<rhs.age;
    }
};

std::ostream &operator<<(std::ostream &os,const Person &p)
{
    os<<p.name;
    return os;
}

int main()
{
    Person p1{"Curly",30};
    Person p2{"Manu",22};
    Person p3 = min(p1,p2);
    std::cout<<p3.name<<" is younger"<<std::endl;
    std::cout<<min<int>(2,3)<<std::endl;
    std::cout<<min(2,3)<<std::endl;
    std::cout<<min('A','B')<<std::endl;
    std::cout<<min(12.5,9.5)<<std::endl;
    std::cout<<min(5+2*2,7+40)<<std::endl;

    func<int,int>(10,20);
    func(10,20);
    func<char,double>('A',12.4);
    func('A',12.5);
    func(1000,"Testing");
    func(2000,std::string{"Frank"});

    return 0;
}