//overloading operator using friends
//scalar multiplication of a vector,also including overloading of input & output operator >> & <<.
#include<iostream>
using namespace std;
const int size=3;
class vector{
    float v[size];
public:
    vector(){
    for(int i=0;i<size;i++){
        v[i]=0;}
    }
    vector(float *a){
         for(int i=0;i<size;i++){
        v[i]=a[i];}
        }
    friend vector operator*(float a,vector b);
    friend vector operator*(vector b,float a);
    friend istream & operator>>(istream &qin,vector &a);
    friend ostream & operator<<(ostream &qout,vector &a);
};

    vector operator*(float a,vector b){
     vector temp;
     for(int i=0;i<size;i++){
            temp.v[i]=b.v[i]*a;}
     return temp;
     }

    vector operator*(vector b, float a){
     vector temp;
     for(int i=0;i<size;i++){
            temp.v[i]=b.v[i]*a;}
     return temp;
     }

     istream & operator>>(istream &qin,vector &a){
     for(int i=0;i<size;i++){
        qin>>a.v[i];}
        return qin;
     }

     ostream & operator<<(ostream &qout,vector &a){
      cout<<"(";
      for(int i=0;i<size;i++){
        if(i!=0)
        qout<<",";
        qout<<a.v[i];}
        qout<<")"<<endl;
        return qout;}
     int main(){
     float m[size]={1.1,2,3};
     vector c,d(m);
     cout<<"enter all three elements of vector 'c' :"<<endl;
     cin>>c;
     cout<<"vector c= "<<c;
     cout<<"vector d= "<<d;
     vector a,b;
     a=c*2;
     b=3*d;
     cout<<"vector a= "<<a;
     cout<<"vector b= "<<b;
     }


