#include<iostream>
#include<string>

class Array{
    private:
        int size{N};
        int values[N];

        friend std::ostream &operator<<(std::ostream &os,const Array &arr)
        {
            os<<"[";
            for(const auto &val:arr.values)
            os<<val<<" ";
            os<<"]"<<std::endl;

            return os;
        }
        public:
            Array() = default;
            Array(int init_val)
            {
                for(auto &items:values)
                item = init_val;
            }

            void fill(int val)
            {
                for(auto &item:values)
                item = val;
            }
            int get_size() const{
                return size;
            }
};
