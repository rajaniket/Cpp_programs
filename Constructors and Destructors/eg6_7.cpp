// Implementation of destructor (Example on How destructor works)
#include <iostream>
using namespace std;
class dest{
private:
static int count;
public:
dest(){
count++;
cout<<"constructor for object-"<<count<<" is called ( Object "<<count<<" is created )"<<endl;
}
~dest(){
cout<<"destructor for object-"<<count<<" is called ( Object "<<count<<" is created )"<<endl;
count--;
}
};
int dest :: count=0;
int main(){
cout<<"inside the main block..."<<endl;
cout<<"\n\nCreating 1st Object."<<endl;
dest a1;

{
cout<<"inside the new block-1 ..."<<endl;
cout<<"\n\nCreating 2nd & 3rd Object."<<endl;
dest a2,a3;
cout<<"Leaving block-1"<<endl;
}
cout<<"Back to main block and leaving it"<<endl;
}
