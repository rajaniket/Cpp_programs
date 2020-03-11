// write a c++ program to read a matrix of size m x n from keyboard and display the same on the screen,make row parameteer of the matrix as a default argument.

#include<iostream>
using namespace std;
void read_matrix(int a[][10],int column,int row=4){
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
        cin>>a[i][j];

         for(int i=0;i<row;i++){
            cout<<endl;
        for(int j=0;j<column;j++)
        cout<<a[i][j]<<" ";
         }

}
int main()
{
     int r,c;
    cin>>r>>c;
    int arr[r][10];
    cout<<"Enter elements\n"<<endl;
    read_matrix(arr,r,c);

}
