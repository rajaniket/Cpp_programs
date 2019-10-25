#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int superDigit(string n, int k)
{
    int res=0;
    for (int x = 0; x < n.length(); x++)
    {
        res += n[x] - '0';
    }
    res = k * res;
    if (res < 10)
        return res;
    else
        return superDigit(to_string(res),1);
}

int main() {
    string n;
    int k;
    cin >> n;
    cin >> k;
    cout << superDigit(n, k)<< endl;
    return 0;
}
