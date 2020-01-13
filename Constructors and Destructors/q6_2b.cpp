//Define a class String that could work as a user-defined string type. Include constructors that will enable us to create an uninitialized string.
//also include a function that adds two strings to make third string;
//method 2 of q6_2.cpp by using character array
#include<iostream>
#include<cstring>
using namespace std;
class str{
char *p;
int length;
public:
    str(){
        length=0;
    p=new char[length]; }
    str(char *k){
    length=strlen(k)+1;
    p=new char[length];
    p=k;
        }
   void add(str &j1,str&j2){
   delete []p;
   length=strlen(j1.p)+strlen(j2.p)+1;
    p=new char[length];
   strcpy(p,j1.p);
   strcat(p,j2.p); // now p has length to carry j1.p+j2.p
   }
   void display(){
   cout<<"string : "<<p<<endl;
   }};
   int main(){
   str s1,s2("Aniket "),s3("Raaaaaj");
   s1.add(s2,s3);
   s2.display();
   s3.display();
   s1.display();

   }

