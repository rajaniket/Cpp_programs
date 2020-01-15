//example of parameterized constructor
// use the parameterized constructor for initializing the class object
#include<iostream>
using namespace std;
class abc{ 
int x,y;
public:
abc(int m,int n){
x=m;
y=n;
}
abc(){}
void display(){
cout<<"X= "<<x<<" Y= "<<y<<endl;
}
};
int main(){
abc a(123,456);
abc b=abc(456,123);
cout<<"object 'a' :"<<endl;
a.display();
cout<<"object 'a' :"<<endl; 
b.display();
}
