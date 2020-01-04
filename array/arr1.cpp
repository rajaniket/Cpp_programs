// initialization of arrays
#include <iostream>
using namespace std;
int main(){
int a[5]={0};//or
int a1[5]={};  // all elements will be 0
int b[5]={5}; // only first element will be 5 and all other will be 0

int c[5]={5,5,5,5,5}; 
int d[]={5,5,5,5,5};

int e[5]={5,5,5}; //remaining all will be zero 
   // or initialization using loop 
for(int i=0;i<5;i++){
    cout<<a[i]<<"\t";
}
cout<<endl;
for(int i=0;i<5;i++){
    cout<<a1[i]<<"\t";
}
cout<<endl;
for(int i=0;i<5;i++){
    cout<<b[i]<<"\t";
}
cout<<endl;
for(int i=0;i<5;i++){
    cout<<c[i]<<"\t";
}
cout<<endl;
for(int i=0;i<5;i++){
    cout<<d[i]<<"\t";
}
cout<<endl;
for(int i=0;i<5;i++){
    cout<<e[i]<<"\t";
}



}

