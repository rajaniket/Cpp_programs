// Use of this pointer
#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    public:
        person(string k,int h){
        name=k;age=h;
        }

        void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        }
        person & greater(person &a) {
        if(a.age>this->age)    // here this->age and only  age  both will work;
            return a;
        else return *this;      // in case of return by reference this pointer is returned
        }
         person & add_age(int age){
         this->age+=age;   // name of argument is same s data member so use =>this
         return *this;
         }

};
int main(){
person A("Aniket",35);
person B("Raj",30);
person C=A.greater(B);
C.display();
C=A.add_age(5);
C.display();
}
