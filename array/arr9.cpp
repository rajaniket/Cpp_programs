
#include<iostream>
#include<string.h>
using namespace std;
void give_pair(int e,int *a,int l){
int i=0,j=l-1;
while(i<j){
if(a[i]+a[j]==e){
 cout<<"("<<a[i]<<","<<a[j]<<")"<<" ";
 i++;
 j--;
}
else if(a[i]+a[j]<e)
{
    i++;
}
else if(a[i]+a[j]>e){
    j--;
}
}
}
void print(int *a,int l){
for(int i=0;i<l;i++){
    cout<<a[i]<<",";
}
cout<<endl;
}
int main(){
int a[11]={0,1,2,3,4,5,6,7,8,9,10} ;
print(a,11);
give_pair(11,a,11);
}
