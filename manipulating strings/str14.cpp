/*
Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.
Input Format
Enter a number N , add N more numbers
Constraints
None
Output Format
Display the Boolean result
Sample Input
4
1
2
2
1
Sample Output
true
*/
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool palindrome(int *a,int n){
int left=0,right=n-1;
while(left<=right){
if(a[left]!=a[right]){
return false;
}
left++;
right--;
}
return true;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
if(palindrome(a,n))
cout<<"true";
else cout<<"false";
}
