#include<iostream>
#include<vector>

using namespace std;

int main()
{
   vector <int> num {10,20,30,40,50};
   for(size_t i{0};i<num.size();++i)
   {
       cout<<num[i]<<endl;
   }
}