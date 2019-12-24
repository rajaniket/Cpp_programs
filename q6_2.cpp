//Define a class String that could work as a user-defined string type. Include constructors that will enable us to create an uninitialized string
//also include a function that adds two strings to make third string;
#include<iostream>
#include<cstring>
using namespace std;
class str{
string *p;
public:
    str(){
    p=new string; }
    str(string k){
    p=new string(k);
    }
   str add(const str &j){
   str temp;
   *(temp.p)=*p; //temp.*p will not work, for accessing pointer member use *(temp.p)
   string k;
   k=*(temp.p);
   k.append(*(j.p));
   *(temp.p)=k;
  // (*(temp.p)).append(*(j.p));  it will work directly ,instead of using 16,17,18,19 use this.
   return temp;
   }
   void display(){
   cout<<"string : "<<*p<<endl;
   }};
   int main(){
   str s1,s2("Aniket "),s3("Raaaaaj");
   s1=s2.add(s3);
   s2.display();
   s3.display();
   s1.display();

   }




