//multiplication of two matrix
#include<iostream>
using namespace std;
class matrix {
int x,y;
int a[10][10];
public:
void getmatrix(){
cout<<"\nEnter Row and coloumn :"<<endl;
cin>>x>>y;
cout<<"Enter matrix elements"<<endl;
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
cin>>a[i][j];
}}}

void multiply(matrix c,matrix b){
int q,w;
if(c.y==b.x){
x=c.x;
y=b.y;
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
a[i][j]=0;
for(int k=0;k<c.y;k++)
a[i][j]=a[i][j]+(c.a[i][k])*(b.a[k][j]);
}}
}
else cout<<"\nMatrix can't be multiply"<<endl;
}

void display(){
for(int i=0;i<x;i++){
cout<<endl;
for(int j=0;j<y;j++)
cout<<a[i][j]<<"\t";
}cout<<endl;
}};

int main(){
matrix a,b,c;
a.getmatrix();
cout<<"\n1st matrix you entered: \n";
a.display();
b.getmatrix();
cout<<"\n2nd matrix you entered: \n";
b.display();
c.multiply(a,b);
cout<<"\nMultiplication result: \n";
c.display();
}
