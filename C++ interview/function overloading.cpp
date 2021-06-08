#include<iostream>
using namespace std;
class A{
int x;
public:
//void multiply(int a,int b){
//cout<<a*b<<endl;
//}
void multiply(int a,int b,int c=10){
cout<<a*b*c<<endl;
}

};
int main()
{
 A x;
 x.multiply(4,5);
}
