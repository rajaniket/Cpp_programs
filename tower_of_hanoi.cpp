// c++ program of tower of hanoi

#include<iostream>
#include<stdio.h>
using namespace std;
void hanoi(int n,int s,int d,int m)
{

    if(n==1)
    {
        printf("move 1 disk from tower %d to tower %d \n",s,d);
        return;
    }
    hanoi(n-1,s,m,d);
           cout<<"move "<<n<<" disk from tower "<<s<<" to tower "<<d<<endl;
    hanoi(n-1,m,d,s);

}

int main()
{
    int n,s,d,m;
    cout<<"type number of disks"<<endl;
    cin>>n;
    cout<<"type source tower"<<endl;
    cin>>s;
    cout<<"type destination tower"<<endl;
    cin>>d;
    cout<<"type middle tower"<<endl;
    cin>>m;
    cout<<"moving all disks from tower "<<s<<" to tower "<<d<<"\n \n \n \n";
    hanoi(n,s,d,m);
}
