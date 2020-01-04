#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a[5]={0};//or
int a1[5]={};
int b[5]={5};

int c[5]={5,5,5,5,5}; //or
int d[]={5,5,5,5,5};

int e[5]={5,5,5};

//int f[5]={[0 ... 4]=5}; //or ignore size f[]
//int g[11]={[0 ... 3]=4,[4]=8,[5]=12,[8 ... 10]=16};

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

