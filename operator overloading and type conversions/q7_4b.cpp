//Define a class String. Use overload == operator to compare two strings.
#include<iostream>
#include<string.h>
using namespace std;
class String {
char *p;
public:
    String(){p=new char[100];}
    String(char *a){
         p=new char[100];
         p=a;
    }
    int operator==(String s){
     int i=strcmp(p,s.p);
     return i;
    }
};
int main(){
String a("Ral");
String b("Ral");
if(a==b){cout<<"Strings are Not same"<<endl;}
else
cout<<"Both String are same"<<endl;
}




