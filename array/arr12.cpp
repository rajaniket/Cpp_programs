/*
One of the important aspect of object oriented programming is readability of the code. To enhance the readability of code, developers write function and variable names in Camel Case. You are given a string, S, written in Camel Case. FindAllTheWordsContainedInIt.
Input Format
A single line contains the string.
Constraints
|S|<=1000
Output Format
Print words present in the string, in the order in which it appears in the string.
Sample Input
IAmACompetitiveProgrammer
Sample Output
I
Am
A
Competitive
Programmer
Explanation
There are 5 words in the string.
*/

#include<iostream>
#include<string.h>
#include"algorithm"
using namespace std;
void camelcase(string s){
int i=1;
cout<<s[0];
while(s[i]!='\0'){
if((isupper(s[i-1])&&isupper(s[i]))||(islower(s[i-1])&&isupper(s[i])))
cout<<endl<<s[i];
else
cout<<s[i];
i++;
}
}
int main(){
string a;
cin>>a;
camelcase(a);
}
