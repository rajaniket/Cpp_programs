// use of cin.ignore(),buffer clean
#include <string>
#include<iostream>
using namespace std;
int main(){
string k1,k2;
int a;
cout<<"Enter 1st string (getline)"<<endl;
getline(cin,k1);
cout<<"Enter a integer number(cin)"<<endl;
cin>>a;
cout<<"Enter 2nd string (getline), using cin.ignore() so thet this input can't be skipped"<<endl;
cin.ignore();    // used for clean the buffer 
getline(cin,k2);
cout<<"All done"<<endl;
}
