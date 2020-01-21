// Number of days between two dates
#include<iostream>
#include<math.h>
using namespace std;

int cal_date(int d1,int m1,int y1,int d2=01,int m2=01,int y2=2020){
int *month=new int[12]{31,29,31,30,31,30,31,31,30,31,30,31};   //defining no of days in each month

if(d1==d2&&m1==m2&&y1==y2)   // date is same
return 0;

else if(m1==m2&&y1==y2)     // same month so only difference in days
    return d2-d1;

else {                     // if month or year is not same
int days=month[m1-1]-d1;   // Calculating number of days remaining for complete m1 month
int h=m1+1;                // now from next month calculating days
for(int i=y1;i<=y2;i++){
    for(int j=h;j<=12;j++){
        if(i==y2&&j==m2){    // in last month (month that is described in your 2nd date) only adding the days
        days+=d2;
        break;
        }
        else{
        days+=month[j-1];   //  simply summing all the months
        }
    }
    h=1;                   // when year changes (j reset) it will start from month 1st=> January
    }
    return days;
}}

int main(){
int k=cal_date(1,1,2020,1,1,2021);   //  dd1/mm1/yy1(old) , dd2/mm2/yy2(new)   dd2 should be latest and dd1 should be old
cout<<"Days= "<<k<<endl;
}
