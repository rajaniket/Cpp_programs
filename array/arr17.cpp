// factorial of a large number 

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
#define MAX 500
int multiply(int n,int *a,int Count){   // this function will multiply incoming number n with number present in array 
int k,carry=0;
for(int i=0;i<Count;i++){
    k=(a[i]*n)+carry;
    a[i]=k%10;
    carry=k/10;
}

while(carry){   // if there is carry means it needs to increase a size of array to keep it  (count)
a[Count]=carry%10;
carry=carry/10;
Count++;
}
return Count;  
}

void fact(int n){
int a[MAX];
a[0]=1;
int Count=1;
for(int i=2;i<=n;i++){
Count=multiply(i,a,Count);
}
for(int i=Count-1;i>=0;i--)
cout<<a[i];
}

int main(){
int n;
cin>>n;
fact(n);
}
