/*The database created in exercise q8.3 does not include educational information of the
staff. It has been decided to add this information to teachers and officers (and not for typists)
which will help management in decision making with regard to training, promotions etc.
Add another data class called education that holds two pieces of educational information
namely highest qualification in general education and highest professional qualification.
This class should be inherited by the classes teacher and officer.
*/

#include<iostream>
using namespace std;

class education{
protected:
    string hq,hpq;
    education(string a,string b){
    hq=a;hpq=b;
    }
};

class staff{
protected:
    int code;
    staff(int c){code=c;}
};

class teacher:public staff,public education{
string name,subject,publication;
public:
    teacher(int k,string n,string a,string b,string hq,string hpq):staff(k),education(hq,hpq){
    name=n;subject=a;publication=b;
    }
    void show(){
    cout<<"Name : "<<name<<"\nCode : "<<code<<"\nSubject : "<<subject<<"\nPublication : "<<publication<<endl;
    cout<<"Highest qualification :"<<hq<<endl;
    cout<<"Highest professional qualification :"<<hpq<<endl;
    }
};

class officer:public staff,public education{
string name,grade;
public:
    officer(int c,string a,string b,string hq,string hpq):staff(c),education(hq,hpq)
    {name=a;grade=b;}
    void show(){
    cout<<"Name : "<<name<<"\nCode : "<<code<<"\nGrade : "<<grade<<endl;
    cout<<"Highest qualification :"<<hq<<endl;
    cout<<"Highest professional qualification :"<<hpq<<endl;
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
    teacher a(1234,"Aniket","Math","Arihant","Btech","Engineer at Microsoft");
    officer b(123,"Raj","Upper","MBA","Manager at Microsoft");
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
