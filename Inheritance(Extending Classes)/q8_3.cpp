/*An educational institution wishes to maintain a database of its employees. The database
is divided into a number of classes whose hierarchical relationships are shown in following
figure. The figure also shows the minimum information required for each class. Specify all
classes and define functions to create the database and retrieve individual information as
and when required. (balaguruswamy question number 8.3 in chapter 8)
*/

#include<iostream>
using namespace std;
class staff{
protected:
    int code;
    staff(int c){code=c;}
};

class teacher:public staff{
string name,subject,publication;
public:
    teacher(int k,string n,string a,string b):staff(k){
    name=n;subject=a;publication=b;
    }
    void show(){
    cout<<"Name : "<<name<<"\nCode : "<<code<<"\nSubject : "<<subject<<"\nPublication : "<<publication<<endl;
    }
};

class officer:public staff{
string name,grade;
public:
    officer(int c,string a,string b):staff(c)
    {name=a;grade=b;}
    void show(){
    cout<<"Name : "<<name<<"\nCode : "<<code<<"\nGrade : "<<grade<<endl;
    }
};

class typist:public staff{
protected:
string speed,name;
public:
    typist(int c,string a,string b):staff(c){
   name=a;speed=b;
}
};

class regular:public typist{
    float wage;
public:
    regular(float w,int c,string a,string b):typist(c,a,b){
    wage=w;
    }
    void show(){
     cout<<"Name : "<<name<<"\nCode : "<<code<<"\nSpeed : "<<speed<<"\nWage : "<<wage<<endl;
    }
};

class casual:public typist{
  float wage;
public:
    casual(float w,int c,string a,string b):typist(c,a,b){
    wage=w;
    }
    void show(){
     cout<<"Name : "<<name<<"\nCode : "<<code<<"\nSpeed : "<<speed<<"\nWage : "<<wage<<endl;
    }
};
int main(){
    teacher a(1234,"Aniket","Math","Arihant");
    officer b(123,"Raj","Upper");
    regular c(15000,12,"Goodak","45");
    casual  d(10000,1,"Kumar","50");
    cout<<"Teacher:"<<endl;
    a.show();
    cout<<"\n\nOfficer:"<<endl;
    b.show();
    cout<<"\n\nRegular:"<<endl;
    c.show();
    cout<<"\n\nCasual:"<<endl;
    d.show();
}
