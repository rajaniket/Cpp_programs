//Check a number is palindrome or not
//123454321 is a palindrome
#include<iostream>
#include<math.h>
using namespace std;
void palindrome(int n){
int c,y=0,b ;
c=n;
while(n!=0){
b=n%10;
y=(y*10)+b;
n=n/10;
}
if(c==y)
cout<<c<<" is a palindrome"<<endl;
else
cout<<c<<" is not a palindrome"<<endl;
}
int main()
{
 int a;
cout<<"type number:"<<endl;
cin>>a;
palindrome(a);
}

