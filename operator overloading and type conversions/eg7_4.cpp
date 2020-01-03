//Inside string data type
//how string is made using char and class
#include<iostream>
#include<string.h>
using namespace std;
class String{
char *p;
int length;
public:
 String(){
 length=0;
 p=0; ///pointing to null
 }
String(const char *s){   // equivalent to string data type  //constant safe the original data from being damaged
length=strlen(s);
p=new char[length+1];
strcpy(p,s);// it can be p=s if s will not constant , but here one is constant chat and other is char so not possible
}
String(const String &a){  //for copy of two string
 length=a.length;
 p=new char[length+1];
 strcpy(p,a.p);
}
String operator+(const String &s){  // concatenating of strings
String temp;
temp.length=length+s.length;
temp.p=new char[temp.length+1];
strcpy(temp.p,p);
strcat(temp.p,s.p);
return temp;
}
int operator >=(const String &s){    // compare
if(length>=s.length)
    return 1;
else
    return 0;
}
void show(){
cout<<p<<endl;
}

};
int main(){
String a="aniket";
String b="raj";
String c="hello";
String x,y,z;
x=a;
y=a+b;
z=a+b+c;
x.show();
y.show();
z.show();
if(z>=x){
 cout<<"x>y"<<endl;
}
else cout<<"x<y"<<endl;
}

