#include<iostream>
#include<cstring>

class City{
    protected:
        char *name;
        int len;
    public:
        City()
        {
            len = 0;
            name = new char[len+1];
        }
        void get_name(void)
        {
            char *s ;
            s = new char[30];

            std::cout<<"Enter city name:";
            std::cin>>s;
            len = strlen(s);
            name = new char[len+1];
            *name = *s;
        }
        void print_name(void)
        {
            std::cout<<"City name : "<<name<<std::endl;
        }
};

int main()
{
    City *cptr[10];

    int n = 1;
    int option;

    do{
        cptr[n] = new City;
        cptr[n]-> get_name();
        n++;
        std::cout<<"Do you want to enter one more name"<<std::endl;
        std::cout<<"Enter 1 for yes and 0 for no : ";
        std::cin>>option;
    }while(option);

    std::cout<<std::endl;
    for(int i =1;i<=n;i++)
    {
        cptr[i]->print_name();
    }
    return 0;
}