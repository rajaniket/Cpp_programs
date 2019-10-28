#include<iostream>
using namespace std;
class complex(){
float r,l;
public:
complex(){r=0; i=0;}
complex(int a){r=l=a;}
complex(int a,int b){r=a; l=b}
void display(){
cout<<r<<"+ j"<<i<<endl;
}
friend complex sum(complex);
};
complex sum(complex f,complex g){
complex temp;
temp.r=f.r+ g.r;
temp.l=f.l+g.l;
return temp;
}
int main()
{
complex a(2,5.5);
complex b(6.6);
complex c;
c=sum(a,b);
cout<<"a ="<<a.display();
cout<<"b ="<<b.display();  
cout<<"c ="<<c.display();  
}
