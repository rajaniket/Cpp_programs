// Searching of a substring within a string
#include<iostream>
#include<string.h>
using namespace std;
int main(){
char str[]="Hello This is Aniket raj speaking";
char *p;
p=new char;
cout<<"Enter the element to be search"<<endl;
cin>>p;
cout<<"You have typed : "<<p<<endl;
int h,i;
for(i=0;i<strlen(str);i++){
    h=i;
    for(int j=0;j<strlen(p);j++)
{
    if(p[j]==str[h]){
        if(j==strlen(p)-1){
        cout<<p<<" is present in the string"<<endl;
        exit(0);
       }
      h++;
    }
    else break;


}}
  if(i==strlen(str)) {cout<<p<<" is not present in the string"<<endl;}

}
