//Class to basic type conversion 
#include <iostream>
using namespace std;
class abc{
int a;
public:
abc(){a=1;}
abc(int k){a=k;}

operator int(){
return a*a;
}

};
int main(){
abc T(5),G;
int k,u;
k=T;
u=int(G);
cout<<"k="<<k<<endl;
cout<<"u="<<u<<endl;
cout<<"T="<<T<<endl;
cout<<"G="<<G<<endl;
}
