#include<iostream>
using namespace std;
int main( )
{
    int a[3][3] = {{11,32,12},{14,25,56},{77,98,90} } ;
    int i, j, row,column, sum;

    cout<<"Printing the given array:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }

    for(row = 0; row < i; row++)
    {  
        sum = 0;
        for(column = 0; column < j; column++)
        {
            sum += a[row][column];
        }
        cout << "\nThe Sum of Items of " << row + 1<< " Row = " << sum ;
    }
}
