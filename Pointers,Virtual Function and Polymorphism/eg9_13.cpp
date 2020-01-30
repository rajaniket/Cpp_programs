// Virtual function
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
    virtual void display(){}
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


int main(){
