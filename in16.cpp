//Example based on allocation and deallocation of memory
//Example of dynamic 1-d Array
#include <iostream>
using namespace std;
int main()
{
    int*p = new int[10];   // allocation of memory
    cout<<p<<endl;
    for (int i = 0; i < 10; ++i) {
            p[i]= i+1;}
    for (int i = 0; i < 10; ++i) {
            cout << p[i] << "  ";}
    cout << endl;
   delete [] p;            // freeing up memory for reuse (delete does not mean that it's content is deleted,it's means now it can be reallocate
     cout<<p<<endl;
    for (int i = 0; i < 10; ++i) {
            cout << p[i] << "  ";}
}
