// Print sub-array

//method-1

#include<iostream>
#include<vector>
using namespace std;
int main(){
int input[]={1,2,3,4};
int n=4;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
            cout<<endl;
       for(int k=j;k<=i+j;k++){
      cout<<input[k]<<" ";
}

}}
}
