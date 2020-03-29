//Generate Armstrong number in given range
//153=1^3+5^3+3^3
#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int x,int y){
int l=0;
cout<<"Armstrong number in "<<x<<" to "<<y<<":"<<endl;
for(int a=x;a<=y;a++){
int i=0,k,b;
int c[10]={0};
k=a;
//cout<<k;
while(k!=0){
b=k%10;
k=k/10;
c[i]=b;
i++;
}
k=0;
for(int j=0;j<i;j++){
k=k+pow(c[j],i);}
if(k==a){
cout<<k<<" ";
l++;}
}
if(l==0)
    cout<<"0";
}
int main(){
int a,b;
cout<<"Enter a number"<<endl;
cin>>a>>b;
armstrong(a,b);
}
