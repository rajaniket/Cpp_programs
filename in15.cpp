#include <iostream>
using namespace std;

int main ()
{
    static int array[10][10];
    int i, j, m, n, a;

    cout<<"Enter the order of the matix \n";
    cin>>m;
    cin>>n;
    if (m == n)
    {
        cout<<"Enter the co-efficients of the matrix\n";
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                cin>>array[i][j];
            }
        }

