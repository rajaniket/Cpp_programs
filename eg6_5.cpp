// Dynamic constructor (constructor with new)
#include<iostream>
#include<cstring>
using namespace std;
class str{
int len;
char *name;
public:
    str(){
        len=0;
    name=new char[len+1];}
str(char *s){
len=strlen(s);
name=new char[len];
strcpy(name,s);
}
void join(str &a,str &b){
len=a.len+b.len;
delete name;
name=new char[len+1];
strcpy(name,a.name);
strcat(name,b.name);
}
void display(){
cout<<"Name:"<<name<<endl;
}
};
int main(){
char *a="Aniket ";
str n1(a),n2("Raj"),n3("hello "),n4,n5;
n4.join(n1,n2);
n5.join(n3,n2);
n1.display();
n2.display();
n3.display();
n4.display();
n5.display();
}
