//divide an integer by 4 without using ‘/’ operator.

#include<iostream>
using namespace std;
int main()
{
   int n = 10;
   n = n >> 2; // 0010----> 0100
   cout << n;
   return 0;
}
