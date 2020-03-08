// Program to Transpose a 3x3 matrix;
#include<iostream>
using namespace std;
class matrix
{
int m[3][3];
public:
void getmatrix(){
cout<<"type matrix elements\n";
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
{
cin>>m[i][j];
}}}

void displaymatrix(){
for(int i=0;i<3;i++){
cout<<endl;
for(int j=0;j<3;j++) 
cout<<m[i][j]<<"\t";
} cout<<"\n"<<endl;
}
friend matrix transmatrix(matrix);
};
matrix transmatrix(matrix z){
matrix temp;
for(int i=0;i<3;i++)
for(int j=0;j<3;j++) 
temp.m[i][j]=z.m[j][i]; // interchanging row & col
return temp;
}
int main(){
matrix a,b;
a.getmatrix();
cout<<"you entered the matrix\n";
a.displaymatrix();
cout<<"Transposed Matrix:\n";
b=transmatrix(a);
b.displaymatrix();
}


