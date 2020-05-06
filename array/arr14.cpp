// Spiral print anti_clock wise
#include<iostream>
using namespace std;
void read_matrix(int a[][20],int m,int n){
for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
}
void spiral_print(int a[][20],int m,int n){
int ER=m-1,EC=n-1,SR=0,SC=0;
while(ER>=SR&&EC>=SC){
for(int i=SR;i<=ER;i++)
    cout<<a[i][SC]<<" ";
SC++;
for(int i=SC;i<=EC;i++)
    cout<<a[ER][i]<<" ";
ER--;
if(EC>=SC){
for(int i=ER;i>=SR;i--)
    cout<<a[i][EC]<<" ";
}
EC--;
if(ER>=SR){
for(int i=EC;i>=SC;i--)
    cout<<a[SR][i]<<" ";
}
SR++;


}

}

int main(){
int m,n;
cin>>m>>n;
int a[20][20];
read_matrix(a,m,n);
spiral_print(a,m,n);
}
