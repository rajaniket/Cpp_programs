//divide an integer by 4 without using ‘/’ operator.
#include<iostream>
using namespace std;
int main()
{
   int n = 20;
   n = n >> 2; // 0010----> 0100 (>>shift right operator)[Right shift by two bits]
   cout << n;
   return 0;
}

