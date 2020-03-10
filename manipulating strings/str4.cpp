// Adding two strings (concatenating two strings)
#include <iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
   string *p=new string;  //string is like a class and *p is like a pointer object
   *p="hello ";
   string *k=new string("Raj");
   int j;
   j=p->length(); // here pointer object calling its member function
   cout<<*p<<endl<<*k<<endl<<j;
   p->append(*k); // for concatenating 
   cout<<endl<<*p;
}
