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
