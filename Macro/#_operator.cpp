// The # operator causes a replacement-text token to be converted to a string surrounded by quotes.

#include <iostream>
using namespace std;
#define likho( x ) #x
int main () {
   cout << likho(HELLO aniket RAJ) << endl;
}
