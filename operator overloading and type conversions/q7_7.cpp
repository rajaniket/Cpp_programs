//compare two fractional numbers by overloading the relational operator(==,!=,>=,<=)
#include"iostream"
#include"math.h"
using namespace std;
class cmp{
float p;
public:
cmp(float h){p=h;}
friend int operator==(cmp a,cmp b);
friend int operator!=(cmp a,cmp b);
friend int operator>=(cmp a,cmp b);
friend int operator<=(cmp a,cmp b);
};
int operator==(cmp a,cmp b){
if(a.p==b.p)return 1;
else return 0;
}
int operator!=(cmp a,cmp b){
if(a.p!=b.p)return 1;
else return 0;
}
int operator>=(cmp a,cmp b){
if(a.p>=b.p)return 1;
else return 0;
}
int operator<=(cmp a,cmp b){
if(a.p<=b.p)return 1;
else return 0;
}
int main(){
cmp x=1.414,y=1.414;
if(x==y){cout<<"x=y"<<endl;}

if(x!=y){cout<<"x!=y"<<endl;}
if(x>=y){cout<<"x>=y"<<endl;}
if(x<=y){cout<<"x<=y"<<endl;}

}
