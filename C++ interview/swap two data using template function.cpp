#include <iostream>
using namespace std;

// generic function to swap data
template<class T>
void Swap(T &a, T &b)
{
    T temp = a;
    a=b;
    b=temp;
}

int main()
{
    int x=8, y=2;
    Swap(x,y);
    cout<<x<<" "<<y;

}
