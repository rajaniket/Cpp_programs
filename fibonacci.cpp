// Fibonacci series using loop
#include <iostream>
using namespace std;
int main()
{
   int x1=0,x2=1,x3,x;
   cout<<"Enter number of terms:-";
   cin>>x;
   cout<<endl;
   cout<<"Fibonacci series upto "<<x<<" term :- ";
   for(int i=0;i<x;i++){
   cout<<x1<<"\t";
   x3=x1+x2;
   x1=x2;
   x2=x3;
   }
}



