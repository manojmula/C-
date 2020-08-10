/*****
 * A function cannot only recive objects as arguments but also return them
 * the example in the below program shows how antha
 * 
 * this below shows how an object can be created using function an retured to another function
 * 
 * 
 * 
 * *****/

#include<iostream>

using namespace std;

class matrix
{
        public:
        int m[3][3];
    
        void read(void)
        {
            std::cout<<"Enter the elements of the 3x3 matrix"<<std::endl;
            int i,j;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    std::cout<<"m["<<i<<"]["<<j<<"]=";
                    std::cin>>m[i][j];
                }
            }
        }
        void display(void)
        {
            int i,j;
            for(i=0;i<3;i++)
            {
                std::cout<<endl;
                for(j=0;j<3;j++)
                {
                    std::cout<<m[i][j]<<"\t";
                }
            }
        }

};

matrix trans(matrix m1)
{
    matrix m2; //creating an object
    int i,j;

    for(int i =0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            m2.m[i][j] = m1.m[j][i];
        }
    }
    return(m2); //returning an object
}

int main()
{
    matrix mat1,mat2;
    mat1.read();
    std::cout<<"You enetered the following matrix"<<std::endl;
    mat1.display();

    mat2 = trans(mat1);
    std::cout<<"\nTransposed matrix:";
    mat2.display();

    return 0;
}