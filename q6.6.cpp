#include <iostream>
#include <math.h>
using namespace std;
class prime{
int num;
public:
prime(int a){
num=a;
}
void calculate(){
int c=0;
for(int i=2;i<=sqrt(num);i++){
  if(num%i==0){
  cout<<num<<" is not a prime number"<<endl;
  c++;
  break;
  }

}
if(c==0)
cout<<num<<" is a prime number"<<endl;
}};
int main(){
        prime a(2);
        a.calculate();
}

