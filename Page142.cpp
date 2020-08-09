/**CONSTRUCTING TWO DIMENSIONAL ARRAY
 * 
 * We can construct matric varaibles class type objects
 * the example in program illistratetes 
 * construction of mxn matrix
 * 
 * 
 * **/

#include<iostream>

using namespace std;

class Matrix
{
    int **p;    //pointer to matrix
    int d1,d2;  //dimensions

    public:
        Matrix(int x,int y);
        void get_element(int i,int j, int value)
        {p[i][j]=value;}
        int &put_element(int i,int j)
        {return p[i][j];}

};
Matrix::Matrix(int x,int y)
{
    d1 = x;
    d2 = y;
    p = new int *[d1];  //creates an array pointer
    for(int i = 0;i<d1;i++)
    {
        p[i]= new int [d2]; //creates space for each row
    }
}

int main()
{
    int m,n;

    cout<<"Enter size of matrix: ";
    cin>>m>>n;
    Matrix A(m,n);                  //Matrix A constructed

    cout<<"Enter the matrix elements row by row"<<endl;
    int i,j,value;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>value;
            A.get_element(i,j,value);
        }
    }

    cout<<endl;
    cout<<A.put_element(1,2);

    return 0;
}