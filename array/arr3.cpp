#include<iostream>
#include<cstring>
using namespace std;
int main(){
 char arr[10];
cin.getline(arr,10);
cout<<arr<<endl;
char b[]="hello";
cout<<b<<endl;
char c[100];
cin.getline(c,100,'.');  // print up to dot 
cout<<c;
}
