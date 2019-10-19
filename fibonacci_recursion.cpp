// Fibonacci series using recursion
using namespace std;
int fib(int n){
 if (n == 0 || n == 1)
    return n;
  else
    return (fib(n-1) + fib(n-2));
}
int main()
{
int n, i = 0, c;
cout<<"type number of terms : ";
cin>>n;
cout<<"\nFibonacci series\n";
for ( c = 1 ; c <= n ; c++ )
{
cout<<fib(i);
i++;
}
}
