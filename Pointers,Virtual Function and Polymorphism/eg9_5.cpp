// Arrays of pointers
#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
char *ptr[5]={"math","science","physics","programming","drawing"};
char a[100];
cin.get(a,100);
for(int i=0;i<5;i++){
  if(!strcmp(a,ptr[i])) {cout<<"Book is available"<<endl;break;}
   else if(i==4) {cout<<"Book is not available"<<endl;}
}
}
