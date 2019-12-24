// example based on accessing pointer type data member 
#include <iostream>
#include<string.h>
#include<string>
using namespace std;
class your
{
	public:
	string *g=new string;
	int id;
	void printname();
	void printid()
	{
		cout << "your id is: " << id;
	}
};
void your::printname()
{
	cout << "your is: " << *g;
}
int main() {
	your obj1;
	*(obj1.g)= "raj"; // accessing pointer member 
	obj1.id=15;
	obj1.printname();
	cout << endl;
	obj1.printid();
}
