//Binary operator overloading using friend function
//Sum of two complex number using friend function
#include<iostream>
using namespace std;
const int size=3;
class vector{
    float v[size]
public:
    vector(){
    for(int i=0;i<size;i++){
        v[i]=0;}
    }
    vector(float *a){
         for(int i=0;i<size;i++){
        v[i]=a[i];}   
        }
    friend vector operator*(float a,vector);
    friend vector operator*(vector,float a);
    friend istream & operator>>(float *a);
    friend ostream & operator<<(float *a);
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
     
     istream &operator>>(istream &qin,vector &a){
     for(int i=0;i<size;i++){
        qin>>a.v[i];
        return qin;}
     }
     
     ostream &operator>>(ostream &qout,vector &a){
      cout<<"(";
      for(int i=0;i<size;i++){
        if(i!=0)
        qout<<",";
        qout<<a.v[i];}
        qout<<")"<<endl;
        return qin;}
     int main(){
     
     
     
     }


