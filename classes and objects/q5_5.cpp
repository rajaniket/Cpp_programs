// two classes dm and db which stores the value of distance, dm in meters and centimeters & db in feet and inches.
//add one object of dm with object of db and show result.


#include<iostream>
using namespace std;
class db;     // defining the class on the top, becaused it is used in class dm 
class dm{
float x;
public:
void getdata(){
cout<<"Type data in meter"<<endl;
cin>>x;
}
void show(){
cout<<"The Distance in meter "<<x<<" & in centimeter "<<x*100<<endl;
}
friend void sum(dm,db);
};
class db{
float x;
public:
void getdata(){
cout<<"Type data in foot"<<endl;
cin>>x;
}
void show(){
cout<<"The Distance in feet "<<x<<" & in inches "<<x*12<<endl;
}
friend void sum(dm,db);
};
void sum(dm a,db b){
int s=2;
dm k;
db c;
k.x=a.x+(b.x)*0.3048;
c.x=(a.x)*3.28084+b.x;
cout<<"Press 1 for see result in meter and centimeter\nPress 2 for see result in feet and inches"<<endl;
cin>>s;
if(s==1)
k.show();
else
c.show();
}

int main(){
dm a;
db b;
a.getdata();
a.show();
b.getdata();
b.show();
sum(a,b);
}
