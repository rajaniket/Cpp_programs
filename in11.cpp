//check whether number is armstrong or not
// 1634=1^4+6^4+3^4+4^4
#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int a){
int i=0,k,b;
int c[10]={4};
k=a;
while(a!=0){
b=a%10;
a=a/10;
c[i]=b;
i++;
}
a=0;
for(int j=0;j<i;j++){
a=a+pow(c[j],i);
}
if(k==a)
cout<<k<<" is a armstrong number"<<endl;
else
cout<<k<<" is not a armstrong number"<<endl;
}
int main(){
int j;
cout<<"Enter a number"<<endl;
cin>>j;
armstrong(j);
}
