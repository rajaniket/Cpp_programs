#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[]={10,20,25,27,28,28,28,30,40,45,50,50};
int n=sizeof(arr)/sizeof(int);
int key;
cin>>key;
bool result=binary_search(arr,arr+n,key);
if(result){
cout<<"Present"<<endl;
auto LB=lower_bound(arr,arr+n,key);  
int index_lb=LB-arr;
cout<<"Lower Bound index is "<<index_lb<<" and the number is "<<arr[index_lb]<<endl; 
int* UB=upper_bound(arr,arr+n,key);
int index_ub=UB-arr;
if(index_ub==n)
    cout<<"UB is not Possible"<<endl;
else
cout<<"Upper Bound index is "<<index_ub<<" and the number is "<<arr[index_ub]<<endl;   
cout<<"Frequency of "<<key<<" is "<<UB-LB;
}
else cout<<"Not Present"<<endl;
}
