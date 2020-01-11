// initialization of dynamic char array,argument of char array 
#include<iostream>
#include<string.h>
using namespace std;
class abc{
char *p;
public:
abc(){p=new char[100];}
abc(char *a){
    p==new char[100];  //we can,t do this => p=new char[100]{a}; error => invalid conversion from char* to char, for avoiding this error use p=a;
    p=a;
}
friend void compare(abc,abc);
};
void compare(abc s,abc k){
int j=strcmp(s.p,k.p);
if(j!=0){cout<<"Strings are Not same"<<endl;}
else
cout<<"Both String are same"<<endl;
}
int main(){
abc a("raj");
abc b("raj");
compare(a,b);
}
