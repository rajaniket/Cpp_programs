#include<iostream>
using namespace std;
class stringg{
int length;
char *name;
public:
stringg(){
length=0;
name=new char[length+1];
}
stringg(char *s){
length=strlen(s);
name=new char[length+1];
strcpy(name,s);
}
void display(){
cout<<name<<endl;
}
void join(stringg &str1; stringg &str2){    // &str1 is for directly access the inputed object without making the 
// creating new memory for str1  
length=str1.length+str2.length;
delete name;
name=new char[length+1];
strcpy[name,str1.name];
strcat[name,str2.name];
}};
int main(){
char *k="aniket";
stringg a(k),b("raj"),c("hello"),d,e;
d.join(a,b);
e.join(d,c);
a.display();
b.display();
c.display();
d.display();
e.display();
}


