//program to represent a vector , and some functions to perform operations
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
   string add(const str &j){
   str temp;
   temp.*p=*p;
   string k;
   k=temp.->p;
   k->append(j);
   temp.p=&k;
   return temp;}
   void display(){
   cout<<"string : "<<*p<<endl;
   }};
   int main(){
   str s1,s2("Aniket "),s3("Raj");
   s1=s2.add(s3);
   s2.display();
   s3.display();
   s1.display();

   }


