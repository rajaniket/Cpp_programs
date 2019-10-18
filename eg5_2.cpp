// nesting of member function, using one display function call others functions automatically
//ones compliment of given binary number


#include<iostream>
#include<string>
using namespace std;
class binary {
      string s,k;
      public:
      void read()
{
cout<<"type the binary number"<<endl;
cin>>s;
}
void chk();
void cmpl();
void display();
};
void binary :: chk()
{
int i;
for(i=0;i<s.length();i++)
{
if(s.at(i) !='0' && s.at(i) !='1')
{
cout<<"input binary number "<<s<<" is incorrect,programe will end"<<endl;
exit(0);
}
}
}
void binary :: cmpl()
{
chk();
k=s;
for(int i=0;i<s.length();i++)
{
if(s.at(i)=='0')
s.at(i)='1';
else
s.at(i)='0';
}}
void binary :: display()
{
cmpl();
cout<<"the one's compliment of given binary number is "<<k<<" is :"<<s<<"\n\n\n";
}
int main()
{
binary a;
a.read();
a.display();
return 0;
}




