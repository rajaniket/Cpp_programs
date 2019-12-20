#include <iostream>
using namespace std;
int main (){
int **p=new int*[3];
int i,j;
for(i=0;i<3;i++){
    p[i]=new int[3];
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        p[i][j]=i+j;
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<p[i][j];
    }
    cout<<endl;
}
for(i=0;i<3;i++)
    delete []p[i];
delete []p;

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<p[i][j];
    }
    cout<<endl;
}}
