#include<iostream>
#include<string.h>
using namespace std;
int main(){
int m,n;
int k,s;
cin>>m>>n>>k>>s;
char a[m][n];
for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];

for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
char element=a[i][j];
    if(s<k){
    cout<<"No"<<endl;
    return 0;
    }
     if(element=='*'){
        s+=5;
    }
     else if(element=='.'){
        s-=2;
     }
     else
     {
         break;
     }

     if(j<n-1)
        s--;
}}

if(s>=k)
    cout<<"Yes"<<endl<<s<<endl;
else cout<<"No"<<endl<<s<<endl;
}
