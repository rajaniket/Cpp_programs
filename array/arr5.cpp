// Check whether two strings are permutation of each other or not
#include<iostream>
#include<cstring>
using namespace std;
int main(){
char arr[]="raajanik";
char check[]="aajrkina";
int store[26]={0};
if(strlen(arr)==strlen(check)){
for(int i=0;i<strlen(arr);i++)
{
    store[arr[i]-'a']++;
}
for(int i=0;i<strlen(arr);i++)
{
    store[check[i]-'a']--;
}
