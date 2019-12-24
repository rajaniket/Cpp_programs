
#include <iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
   string *p=new string;
   *p="hello ";
   string *k=new string("Raj");
   int j;
   j=p->length();
   cout<<*p<<endl<<*k<<endl<<j;
   p->append(*k);
   cout<<endl<<*p;
}
