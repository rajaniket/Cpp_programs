

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int fact=1,n,i,j,sign;
    long double a=1,x,sum=0;
    cout<<"type no of terms=\n";
    cin>>n;
    cout<<"type angle(x)="<<endl;
    cin>>x;
    x=3.142*(x/180);
    for(i=0;i<n;i++){
        fact=1;
        for(j=0;j<(2*i+1);j++)
          fact=fact*(j+1);
          a=pow(x,2*i+1)/(long double)fact;
          if(a<=.000001)
                     break;
          sign=pow(-1,i);
          sum=sum+(sign*a);

    }
    cout<<"sum= "<<sum;
}

