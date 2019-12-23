//character array to string conversion (no function is required)
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
    string str2=str; //defining another string and copying the data of character array(conversion of char array into string)
    // append() function in string is used to combining two strings
    str1.append(str2);// str1.append(str) this will directly work because in string functions character array is supported
    cout<<str1 ;
    
}
