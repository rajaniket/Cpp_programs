// Arithmetic operations on Pointers
#include<iostream>
using namespace std;
int main(){
    int num[]={10,20,30,40,50};
    int *ptr,i;
    ptr=num;
    for(int i=0;i<4;i++)
    cout<<num[i]<<endl;
    cout<<"ptr   : "<<*ptr<<endl;
    ++ptr;
    cout<<"++ptr : "<<*ptr<<endl;
    ptr=ptr+2;
    cout<<"ptr+2 : "<<*ptr<<endl;
    ptr-=1;
    cout<<"ptr-2 : "<<*ptr<<endl;
}

