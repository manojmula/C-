#include<iostream>
#include<string>

template< int N>
class Array{
    int size{N};
    int value{N};

    friend std::ostream &operator<<(std::ostream &os,const Array &arr)
    {
        os<<"[";
        for(const auto &val:arr.value)
        {
            os<<val<<" ";
            os<<"]"<<std::endl;
            return os;
        }
    }
    public:
    Array()=default;
    Array(int init_val){
        for(auto &item:value)
        item = init_val;
    }

    

};

