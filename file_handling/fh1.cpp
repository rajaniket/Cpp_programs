#include <iostream>
#include <fstream>
using namespace std;
int main()
{
fstream new_file;
new_file.open("hello.csv",ios::out);
if(!new_file)
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
new_file<<"123\n456\t789\n123";
new_file.close();
}}
