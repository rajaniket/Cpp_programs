//Represent a vector use constructor (Include member function to perform modification,multiplication by scalar,addition of two vectors)
#include <iostream>
using namespace std;
class vector{
int length;
float *p;
public:
vector(int len)
{
    length=len;
    p=new float[length];
}
void create(){
cout<<"Enter elements of vector"<<endl;
for(int i=0;i<length;i++){
        cin>>p[i];
}}
void display(){
cout<<"Vector : ( ";
for(int i=0;i<length;i++){
        cout<<p[i];
        if(i!=(length-1))
        cout<<",";
}
cout<<" )"<<endl;
}
void modify(){
int k;
float b;
cout<<"Enter element position to edit"<<endl;
cin>>k;
cout<<"Type element"<<endl;
cin>>b;
p[k-1]=b;
}
void multiply(){
float a;
cout<<"Type scalar value"<<endl;
cin>>a;
for(int i=0;i<length;i++){
 p[i]=p[i]*a;
}
}
void add(vector t){
for(int i=0;i<length;i++){
 t.p[i]=p[i]+t.p[i];
}
}
};
int main(){
    int size;
    cout<<"Enter Size of element"<<endl;
    cin>>size;
vector q(size),w(size);
q.create();
q.display();
q.modify();
q.display();
q.multiply();
q.display();
cout<<"Enter second vector elements"<<endl;
w.create();
w.display();
cout<<"Addition of two vectors"<<endl;
q.add(w);
cout<<"After addition"<<endl;
w.display();

}
