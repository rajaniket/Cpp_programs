//program to represent a vector , and some functions to perform operations
#include<iostream>
using namespace std;
class vector {
int size=10;
//float *v
float *v=new float[size] {0};
public:
void getvector();
void display();
void modify();
void del();
void multiplyscalar();
void add(vector a);
};
void vector::getvector(){
cout<<"Enter the size of a vector"<<endl;
cin>>size;
//v=new float[size] {0}; if we define this at here  , due to this in add() function shows segmentation fault, we are trying to save added data into t.v[i], but
// actually v=new float[size] is defined in member function ,so it can't be store in  t.v[i] .
cout<<"Type vector elements one by one"<<endl;
for(int i=0;i<size;i++)
cin>>v[i];
}
void vector::display(){
cout<<"Vector :- ( ";
for(int i=0;i<size;i++){
if(i!=size-1)
cout<<v[i]<<" ,";
else
cout<<v[i]<<" )"<<endl;
}
}
void vector::modify(){
int l;
cout<<"Type that location which you want to edit"<<endl;
cin>>l;
l--;
cout<<"type element"<<endl;
cin>>v[l];
display();
}
void vector::del(){
int d;
cout<<"Type the location which you want to delete"<<endl;
cin>>d;
d--;
for(int i=d;i<size;i++)
v[i]=v[i+1];
size--;
display();
}
void vector::multiplyscalar(){
float m;
cout<<"Enter the scalar value for mulitiplication"<<endl;
cin>>m;
for(int i=0;i<size;i++){
v[i]=v[i]*m;
}
display();
}
void vector::add(vector a){
int j;
vector t;
if(size>a.size)
   j=size;
else {j=a.size;}
t.size=j;
//float *g=new float[j]; we can also do this
for(int i=0;i<j;i++){
t.v[i]=v[i]+a.v[i]; }
//for(int i=0;i<j;i++)
//cout<<t.v[i]<<" ";
t.display();
}
int main(){
vector a,b;
a.getvector();
a.display();
a.modify();
a.del();
b.getvector();
b.display();
cout<<"addtion of vectors : ";
a.add(b);
cout<<endl;
b.multiplyscalar();
}
