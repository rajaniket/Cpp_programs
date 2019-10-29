#include<iostream>
using namespace std;
class fixed_deposit{
int pa,years;
float rate,retvalue;
public:
fixed_deposit(){}
fixed_deposit(int p,int y,int r); //rate in percentage
fixed_deposit(int p,int y,float r=0.12);
void display(){
cout<<"Principal amount= "<<pa<<endl;
cout<<"Return value= "<<retvalue<<endl;
}
};
fixed_deposit(int P,int y,float r=0.12){
years=y;
pa=P;
rate=r;
retvalue=pa;
for(int i=0;i<y;i++){
retvalue=retvalue * (1+r);
}
}
fixed_deposit(int P,int y,int r){
years=y;
pa=P;
rate=r;
retvalue=pa;
for(int i=0;i<y;i++){ 
retvalue=retvalue * (1+ float (r)/100);
}
}
int main(){
fixes_deposit a,b,c;
int p,y,R;
float r;
cout<<"Enter amount, period,interest rate(in %)"<<endl;
cin>>p>>y>>R;
a=fixed_deposit(p,y,R);
cout<<"Enter amount, period,interest rate(in decimal)"<<endl;
cin>>p>>y>>r;
b=fixed_deposit(p,y,r);
cout<<"Enter amount & period"<<endl;
cin>>p>>y;
c=fixed_deposit(p,y);
cout<<"Deposit 1"<<endl;
a.display();
cout<<"Deposit 2"<<endl; 
b.display();
cout<<"Deposit 3"<<endl;
c.display();
}
