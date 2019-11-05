//Evalute function sum=1+(1/2)^2+(1/3)^3+(1/4)^4+..................... to 0.0001% accuracy.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    long double sum=0;
    cout<<"type number of terms\n"<<endl;
    cin>>a;
    cout<<"sum=";
    for(b=1;b<=a;b++){
         sum=sum+pow(b,-b);
             cout<<pow(b,-b)<<"+";
    }
    cout<<"="<<sum;
}
