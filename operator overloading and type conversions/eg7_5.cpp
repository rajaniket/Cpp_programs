#include<iostream>
#include<fstream>
using namespace std;
class arr{
int a[10];
public:
arr(int *k){
for(int i=0;i<=9;i++){
 a[i]=k[i];
}}
//friend int operator[](arr f,int k);
int operator[](int k){
return a[k];
}
};

int main(){
int j[10]={0,1,2,3,4,5,6,7,8,9};
arr k(j);
for (int i=0;i<=9;i++){
  cout<<k[i]<<"\t"; }
}
