#include<iostream>
#include<algorithm>
using namespace std;
int main(){
pair<int,string> p;
p.first=100;   // 
p.second="Ram";
cout<<"p :"<<p.first<<" , "<<p.second<<endl;

// pair<int,string> g(p); // copy of p

pair<int,string> g(200,"Mohan"); 
p.swap(g);
cout<<"p :"<<p.first<<" , "<<p.second<<endl;
cout<<"g :"<<g.first<<" , "<<g.second<<endl;

// taking input from user
int a,b;
cin>>a>>b;
pair<int,int> p1=make_pair(a,b); 
cout<<p1.first<<" , "<<p1.second<<endl;

pair<pair<int,int>,string> car;  
car.second= "Audi";
car.first.first=10;
car.first.second=20;
cout<<car.first.first<<" , "<<car.first.second<<" , "<<car.second<<endl;
}
