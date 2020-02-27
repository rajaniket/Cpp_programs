//String STL
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool rev_sort(string a,string b){
return a>b;
}
bool len_sort(string a,string b){
return a.length()>b.length();
}

int main(){
string a("Aniket Raj");
cout<<a<<endl;
string c="Tezpur university";
cout<<c<<endl;
cout<<c.length()<<endl;
//string k;
//getline(cin,k);
//cout<<k;
string arr[]={"Apple","Guava","Banana","mango","pineapple"};
for(int i=0;i<5;i++){
    cout<<arr[i]<<",";
}
cout<<endl;
sort(arr,arr+5);  // sorted according to alphabetically (lexicographically)
for(int i=0;i<5;i++){
    cout<<arr[i]<<",";
