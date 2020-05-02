#include<iostream>
#include<string.h>
#include"algorithm"
using namespace std;
void camelcase(string s){
int i=1;
cout<<s[0];
while(s[i]!='\0'){
if((isupper(s[i-1])&&isupper(s[i]))||(islower(s[i-1])&&isupper(s[i])))
cout<<endl<<s[i];
else
cout<<s[i];
i++;
}
}
int main(){
string a;
cin>>a;
camelcase(a);
}
