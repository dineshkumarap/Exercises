#include<iostream>
using namespace std;

class matrix
{
    int **a,row_size,col_size;
    public:
    matrix(int r,int c)
    {
        row_size=r;
        col_size=c;
        a=new int*[row_size];
        for(int i=0;i<row_size;i++)
            a[i]=(int *)malloc(col_size*sizeof(int));
    }
    matrix operator *(matrix const &B)
    {
        matrix C(row_size,col_size);
        for(int i=0;i<row_size;i++)
        {
            for(int j=0;j<col_size;j++)
            {
                C.a[i][j]=0;
                for(int k=0;k<row_size;k++)
                    C.a[i][j]+=a[i][k]*B.a[k][j];
            }
        }
        return(C);
    }
    void initialize(char m)
    {
        cout<<"Enter the values of matrix "<<m<<" :\n";
        for(int i=0;i<row_size;i++)
        {
            for(int j=0;j<col_size;j++)
                cin>>a[i][j];
        }
    }
    void print()
    {
        for(int i=0;i<row_size;i++)
        {
            for(int j=0;j<col_size;j++)
                cout<<a[i][j]<<' ';
            cout<<'\n';
        }
    }
};

int main()
{
    int row_size,col_size;
    cout<<"Enter the size of matrices for multiplication : ";
    cin>>row_size>>col_size;
    matrix A(row_size,col_size),B(row_size,col_size);
    A.initialize('A');
    B.initialize('B');
    cout<<"Matrix multiplication : A * B \n";
    matrix C = A * B;
    C.print();
}