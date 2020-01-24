 #include<iostream>
 using namespace std;
class item{
int code;
float price;
public:
    void get_data(int a,float b){
     code=a;price=b;
    }
    void show(){
    cout<<"code: "<<code<<endl<<"Price : "<<price<<endl;
    }
};
int main(){
item *p=new item[2];
int x;
float y;
for(int i=0;i<=1;i++){
  cout<<"Type code and price"<<endl;
  cin>>x>>y;
  p->get_data(x,y);
  p++;
}
for(int i=0;i<=1;i++){
p->show();
p++;
}
}
