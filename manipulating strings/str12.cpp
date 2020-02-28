//Mytokenizer function (like tokenizer function which is predefined)
//How tokenizer function works?
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char *mystrtok(char arr[],char del[]){
static char *input=NULL;
    if(arr!=NULL){
      input=arr;
    }
int k=0;
char *output=new char[strlen(input)+1];
int i;
for(i=0;input[i]!='\0';i++){
        for(int k=0;k<strlen(del);k++)
        if(input[i]!=del[k])
    output[i]=input[i];
else{
    output[i]='\0';
input=input+i+1;
return output;
}
}
output[i]='\0';
input=NULL;
return output;
}

int main(){
char a[]={"Hi,My name is Aniket, My roll number is 31"};
char *p;
p=mystrtok(a,",");

}
}
