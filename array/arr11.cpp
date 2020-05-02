//insertion sort 
#include<string.h>
using namespace std;
void insertion_sort(int *a,int l){
for(int i=1;i<=l-1;i++){
       int  element=a[i];
      int j=i-1;
    while(j>=0 and a[j]>element){
            a[j+1]=a[j]; //moving right
        j--;
        }
        a[j+1]=element;
    }
}
void print(int *a,int l){
for(int i=0;i<l;i++){
    cout<<a[i]<<",";
}
cout<<endl;
}
int main(){
int a[14]={10,21,2,13,4,25,16,1,9,8,2,3,4,77};
insertion_sort(a,14);
print(a,14);
}
