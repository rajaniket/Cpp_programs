// Runtime polymorphism 
#include<iostream>
using namespace std;
class media{
protected:
    string title;
    float price;
    public:
    media(string t,float p){
    title=t;price=p;
    }
    virtual void display(){} // It should be declear inside base class
};

class book:public media{
protected:
    int pages;
public:
    book(string t,float p,int g):media(t,p){
    pages=g;
    }
    void display(){
    cout<<"Title: "<<title<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Pages: "<<pages<<endl;
    }
};
class tape:public media{
protected:
    float time;
public:
    tape(string j,float p,float g):media(j,p){
    time=g;
    }
    void display(){
    cout<<"Title: "<<title<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Time : "<<time<<endl;
    }
};

int main(){
    book b("HC Verma",125.50,355);
    tape t("Love",50,45);
    media *a[2]={&b,&t};
    cout<<"................................Book.............................."<<endl;
    a[0]->display();
    cout<<"\n...............................Tape.............................."<<endl;
    a[1]->display();
}
