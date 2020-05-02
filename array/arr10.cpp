//Bubble_sort 
#include<iostream>
#include<string.h>
using namespace std;
void bubble_sort(int *a,int l){
for(int i=0;i<l;i++)
    for(int j=1;j<l-i;j++){
        if(a[j-1]<a[j])
        swap(a[j-1],a[j]);
    }
}
void print(int *a,int l){
for(int i=0;i<l;i++){
    cout<<a[i]<<",";
}
cout<<endl;
}
int main(){
int a[14]={10,21,2,13,4,25,16,1,9,8,2,3,4,77};
bubble_sort(a,14);
print(a,14);
}
