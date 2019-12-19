// Constructing two dimensional array
// Constructing two dimensional array
#include<iostream>
using namespace std;
class matrix{
int m,n;
int **p; //pointer to a matrix p[][]
matrix(int r,int c){
m=r;
n=c;
p=new int[m];
for(int i=0;i<m<i++)
p[i]=new int[n];
}
void get_element(int r,int c,int value){
p[r][c]=value;
}
int & put_element(int r,int c){
return p[r][c];
}
};
int main(){
int row=2,col=2;
int value;
matrix a(row,col);
for(int i=0;i<row;i++)
for(int j=0;j<col;i){
cout<<"type value"<<endl;
cin>>value;
cout<<endl;
a.get_element(i,j,value);
}
cout<<endl;
cout<<a.put_element(2,1)<<endl;
}

}

