//To check whether a substring is present inside a string or not
//make case insensitive search 
//for searching the occurance of substring in a string use 'str1.find(str)' it will return position of substring from 0 to N
//transform function =>applies an operation to all elements 
#include<iostream>
#include<algorithm>
using namespace std;

int string_find(string s1,string s){
transform(s.begin(), s.end(), s.begin(),::tolower);     //STL
transform(s1.begin(), s1.end(), s1.begin(),::tolower);
cout<<s1<<endl<<s<<endl;
int i=s1.find(s);
if(i>=0){
    return 1;
    }
else return 0;
}
int main(){
int j=string_find("hello raj how are you","ARE");
if(j)
cout<<"Substring Found"<<endl;
else
cout<<"Not found";
}
