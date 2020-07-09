#include <iostream>
using namespace std;
class Student
{
private:
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    void get_age(){
    cout<<age;
    }
    void set_age(int a){
    age=a;
    }
    void get_first_name(){
    cout<<first_name;
    }
    void set_first_name(string f){
    first_name=f;
    }
    void get_last_name(){
    cout<<last_name;
    }
    void set_last_name(string l){
    last_name=l;
    }
    void get_standard(){
    cout<<standard;
    }
    void set_standard(int s){
    standard=s;
    }
    void to_string(){
    cout<<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
    }
};
int main(){
Student s;
int age,stan;
string first,last;
cin>>age;
cin>>first;
cin>>last;
cin>>stan;
s.set_age(age);
s.set_first_name(first);
s.set_last_name(last);
s.set_standard(stan);
s.get_age();
cout<<" ";
s.get_last_name();
cout<<", ";  
s.get_first_name();
cout<<" ";
s.get_standard();
cout<<" ";
s.to_string();
}

