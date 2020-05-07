// Check whether two strings are permutation of each other or not
#include<iostream>
#include<cstring>
using namespace std;
int main(){
char arr[]="raajanik";
char check[]="aajrkina";
int store[26]={0}; // array which will store no. of occuring of alphabets
if(strlen(arr)==strlen(check)){
for(int i=0;i<strlen(arr);i++)
{
    store[arr[i]-'a']++; // storing no of occurrence of alphabets of string arr
}
for(int i=0;i<strlen(arr);i++)
{
    store[check[i]-'a']--; // destorying storing no of occurrence of alphabets of string check
}
}
int k=0;
for(int i=0;i<26;i++){ // if all elements in store is zero then it is permutation
    if(store[i]!=0)
        k++;
}
if(k==0) cout<<check<<" Is a permutation of "<<arr<<endl;
else cout<<"Not a permutation of "<<arr<<endl;
}
else cout<<"Not a permutation of "<<arr<<endl;
}
