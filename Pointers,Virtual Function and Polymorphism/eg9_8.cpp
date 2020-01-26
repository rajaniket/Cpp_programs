//Pointers to Object example
#include<iostream>
using namespace std;
class item{
    public:
int code;
float price;
public:
    void get_data(int a,float b){
     code=a;price=b;
    }
    void show(){
    cout<<"code  : "<<code<<endl<<"Price : "<<price<<endl;
    }
};
int main(){
    cout<<"Enter how many items"<<endl;
    int n;
    cin>>n;
item *p=new item[n];
int x;
float y;
for(int i=0;i<=n-1;i++){
  cout<<"Type code and price"<<endl;
  cin>>x>>y;
  p->get_data(x,y);
  p++;
}
p-=n;   // Reseting the p address because in upper loop it is not referenced to initial
for(int i=0;i<=n-1;i++){
p->show();
p++;
}
}
