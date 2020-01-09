// Create a class MAT of size M x N. Define all possible matrix operations for MAT type objects.
#include <iostream>
#include<cmath>
using namespace std;
class mat{
int row,column;
int **p;
public:
mat(){ row=0;column=0;  }
mat(int r,int c){
    row=r;
    column=c;
    p=new int*[column]; //creating array pointer
  for (int i=0;i<row;i++){
     p[i]=new int[column]{0};
    }
}
mat operator+(mat a){
mat temp;
if(row==a.row && column==a.column){
mat temp(row,column);
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
    temp.p[i][j]=p[i][j]+a.p[i][j];}}
    return temp;
}
else cout<<"! Matrix size must be same for addition and subtraction"<<endl;
}

mat operator-(mat a){
mat temp;
if(row==a.row && column==a.column){
mat temp(row,column);
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
    temp.p[i][j]=p[i][j]-a.p[i][j];}}
    return temp;
}
else cout<<"! Matrix size must be same for addition and subtraction"<<endl;
}

mat operator*(mat a){
if(column==a.row){
mat temp(row,a.column); //column=a.row;
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        for(int k=0;k<a.column;i++){
    temp.p[i][k]=temp.p[i][k]+p[i][j]*a.p[j][i];}}}
    return temp;
}
else cout<<"! Column of 1st Matrix and Row of 2nd Matrix must be same for multiplication"<<endl;
}
friend istream & operator >>(istream &qin,mat &k);
friend ostream & operator<<(ostream &qout,mat &k);
};
istream & operator >>(istream &qin,mat &k){
for(int i=0;i<k.row;i++){
    for(int j=0;j<k.column;j++){
    qin>>k.p[i][j];}}
    return qin;
}
ostream & operator<<(ostream &qout,mat &k){
for(int i=0;i<k.row;i++){
    for(int j=0;j<k.column;j++){
    qout<<k.p[i][j];}cout<<endl;}
    return qout;
}
int main(){
mat a(2,2),b(2,2),c;
cout<<"Enter elements of 1st matrix"<<endl;
cin>>a;
cout<<a;
cout<<"Enter elements of 2nd matrix"<<endl;
cin>>b;
cout<<b;
c=a+b;
cout<<"addition"<<endl<<c<<endl;
c=a-b;
cout<<"subtraction"<<endl<<c<<endl;
c=a*b;
cout<<"multiplication"<<endl<<c<<endl;
}
