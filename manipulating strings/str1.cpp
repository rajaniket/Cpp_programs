#include <iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char str[100];
    string str1;
    cout << "Enter a string: ";
    getline(cin, str1);   // use this in case of string for avoiding the terminating character
    cout<<"\ntype another :";
    cin.get(str, 100);    // use this in case of character array for avoiding the terminating character
    cout << "You entered: " << str1<<endl<<str<< endl;
    int  b=str1.length();
    int a=strlen(str);
    cout<<"size of string:\n"<<b<<endl<<a;
    return 0;
}