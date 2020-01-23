// Linear search in an array using pointer
#include<iostream>
using namespace std;
int main(){
    int num[]={100,250,30,40,50,85,60,10,20,70,7};
    int *ptr,ip;
    ptr=num;
    cout<<"Enter the element to be search"<<endl;
    cin>>ip;
    for(int i=0;i<10;i++){
        if(ip==*ptr){cout<<ip<<" is present in the array"<<endl;break; }
        else if(i==9){cout<<ip<<" is Not Present in the array"<<endl;}
        ptr++;
    }}


