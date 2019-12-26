// conversion of string to integer and float and vice-versa
// will work on c++11 and above
#include <iostream>
#include <string>
using namespace std;
int main() {

	string s = "14.33";
	string s1="105.77",k;
	int i;
	float j;
	 i=stoi(s);    // conversion of string to integer
     j=stof(s1);   // conversion of string to float
     k=to_string(j); // conversion of int/float to string
    cout <<i<<"\n"<<j<<endl<<k;;

}
