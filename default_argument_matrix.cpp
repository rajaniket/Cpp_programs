// write a c++ program to read a matrix of size m x n from keyboard and display the same on the screen,make row parameteer of the matrix as a default argument.

#include<iostream>
using namespace std;
int read_matrix(int column,int row=4){
    int a[row][column];
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
        cin>>a[i][j];

         for(int i=0;i<row;i++){
            cout<<endl;
        for(int j=0;j<column;j++)
        cout<<a[i][j];
         }

}
int main()
{
    cout<<"type all matrix elements \n"<<endl;
    read_matrix(4);

}
