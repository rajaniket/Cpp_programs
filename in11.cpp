#include<iostream>
  using namespace std;
int main() {
	int armstrong=0,num=0,result=0,check;
	cout<<"Enter Number to find it is an Armstrong number?";
	cin>>num;
	check=num;
	for (int i=1;num!=0;i++) {
		armstrong=num%10;
		num=num/10;
		armstrong=armstrong*armstrong*armstrong;
		result=result+armstrong;
	}
	if(result==check) {
		cout<<check<<"  is an Armstrong Number";
	} else {
		cout<<check<<"  is NOT an Armstrong Number";
	}
	return 0;
}
