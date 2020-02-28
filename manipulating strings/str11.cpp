// String Tokenizer Function
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
char a[]={"Hi, My name is Aniket, My roll number is 31"};
char *p;
p=strtok(a," ,");
while(p!=NULL){
cout<<p<<endl;
p=strtok(NULL," ,");
}
}
