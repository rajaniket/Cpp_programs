// Find the number location in 2-D array which is sorted along the row and column
// Search using rows

/* // column wise searching (method-1)
#include<iostream>
#include<cstring>
using namespace std;
void read_matrix(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
}
void print_matrix(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void search_element(int x,int a[][10],int r,int c){
    int i=r-1,j=0;
while(i>=0&&j<c)
{
     if(a[i][j]==x){
            cout<<"Element Found at (Row)i="<<i<<" (column) j="<<j<<endl;
            return ;
        }
    else if(a[i][j]>=x)
             i--;
    else j++;
}
cout<<"Element not found"<<endl;
}
int main(){
int a[10][10];
int r,c;
cin>>r>>c;
read_matrix(a,r,c);
print_matrix(a,r,c);
search_element(18,a,r,c);
}
*/

// row wise searching (method-2)
#include<iostream>
#include<cstring>
using namespace std;
void read_matrix(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
}
void print_matrix(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void search_element(int x,int a[][10],int r,int c){
    int i=0,j=c-1;
while(i<r&&j>=0)
{
     if(a[i][j]==x){
            cout<<"Element Found at (Row)i="<<i<<" (column) j="<<j<<endl;
            return ;
        }
    else if(a[i][j]>=x)
             j--;
    else i++;

}
cout<<"Element not found"<<endl;
}
int main(){
int a[10][10];
int r,c;
cin>>r>>c;
read_matrix(a,r,c);
print_matrix(a,r,c);
search_element(1,a,r,c);
}
