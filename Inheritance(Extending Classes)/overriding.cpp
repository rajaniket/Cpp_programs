// example based on overriding function
#include<iostream>
using namespace std;
class base{
public:
    void show(){           // overridden function
    cout<<"Hello"<<endl;
    }
};
class derived:public base{
public:
 void show(){              // overriding function
 cout<<"Hello Raj"<<endl;
 }
};
int main(){
derived S;
S.show();      // now this will show latest one
S.base::show();  // this for calling overridden function(old one)
}
