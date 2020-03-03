// Constructing two dimensional array,use constructor
//constructing matrix
#include <iostream>
using namespace std;
class matrx{
  int m,n,**p;
  matrx(){
  m=0;n=0;}
public:
matrx(int r,int c){
m=r; n=c;
p=new int*[m]; //2d matrix
int i,j;
for(i=0;i<m;i++){
    p[i]=new int[n];
}}
void getmatrx(int k,int l,int value)
{
    p[k][l]=value;

}
int & putelement(int h,int j){ 
return p[h][j];
}
};
int main (){
    int i,j,x;
matrx a(3,3);
cout<<"Enter element:"<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>x;
        a.getmatrx(i,j,x);
    }
}
cout<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<a.putelement(i,j);  }
    cout<<endl;
}
}
