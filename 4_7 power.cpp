// write a function power to raise a number m to power n.
//use a default value of 2 for n to make the function to calculate squares when this argument is omitted.
#include <cmath>
#include <iostream>
#include<stdio.h>
using namespace std;

float power(double m,int n=2)
{
   if(n==0)
    return 1;
   return m*power(m,n-1);
}

int main()
{
    float a;
    a=power(3.0);

    cout<<"a="<<a;
}
