#include<iostream>
using namespace std;
class vector {
float *v;
int size;
public:
void getvector(){
cout<<"Enter the size of a vector"<<endl;
cin>>size;
v=new float[size] {0};
cout<<"Type vector elements one by one"<<endl;
for(int i=0;i<size;i++)
cin>>v[i];
}
void display(){
cout<<"Vector :- ( ";
for(int i;i<size;i++)
cout<<v[i]<<",";
cout<<" )"<<endl;
}
void modify(){
int l;
cout<<"Type the location which you want to edit"<<endl;
cin>>l;
l--;
cout<<"type element"<<endl;
cin>>v[l];
display();
}
void del(){
int d;
cout<<"Type the location which you want to delete"<<endl;
cin>>d;
d--;
for(int i=d;i<size;i++)
v[d]=v[d+1];
size--;
}
void multiplyscalar(){
float m;
cout<<"Enter the scalar value for mulitiplication"<<endl;
cin>>m;
for(int i=0;i<size;i++){
v[i]=v[i]*m;
}
display();
}
void addvector(vector a){
int j;
vector temp; 
if(size>a.size)
   j=size;
else j=a.size;
temp.size=j;
for(int i=0;i<j;i++){
temp.v[i]=v[i]+a.v[i];
temp.display();
}}
};
int main(){
vector a,b;
a.getvector();
a.display();
b.getvector();
b.display();
a.addvector(b);
}






