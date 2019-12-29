#include <iostream>
#include <fstream>
using namespace std;
int main()
{
fstream new_file;
new_file.open("hello.txt",ios::in);
if(!new_file)
cout<<"No such file";
else {
char ch;
while (!new_file.eof()) {    //if not end ( eof function checks end of file )
new_file >>ch;
cout << ch;
}
new_file.close();
}}
