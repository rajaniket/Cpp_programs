#include <iostream>
using namespace std;
template <class T>
T large(T n1,T n2)
{
    return n1>n2 ? n1:n2;
}

int main()
{
cout<<large(5.5,5.8);

}
