#include <iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char str[100];
    string str1;
    cout << "Enter a string(string type): ";
    getline(cin, str1);
    cout<<"\nEnter a string(character array type):";
    cin.get(str, 100);
    cout << "You entered: " << str1<<endl<<str<< endl<<"character array: ";
    strcpy(str,str1.c_str());  // c_str() function is used for converting string to character array
    cout<<str;
    return 0;
}
