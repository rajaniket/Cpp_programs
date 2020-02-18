//Write a program using inline function that obtains the largest of three numbers.
#include <cmath>
#include <iostream>
#include<stdio.h>
using namespace std;

inline float largest(float a,float b, float c)
{
        return (a>b)?(a>c)? a:c:(b>c)? b:c;
}
int main()
{
    float a;
    a=largest(12,4.6,10.6);
    cout<<a;
}
