//Define a class String. Use overload == operator to compare length of two strings.
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
    if(strlen(p)>strlen(s.p))
        return 0;
    else if(strlen(p)<strlen(s.p))
        return 0;
    else  if(strlen(p)==strlen(s.p))
        return 1;

    }
};
int main(){
String a("Anket");
String b("Rajlll");
if(a==b){cout<<"length of both String is same"<<endl;}
else cout<<"Length is not same"<<endl;
}




