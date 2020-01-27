// Example of Array of pointer to objects
#include<iostream>
using namespace std;
class city{
    string *name;
    public:
        city(){
        name=new string;
        }
        void get_city(){
        cout<<"Enter city name : "<<endl;
        cin>>*name;

        }
        void display(){
        cout<<*name<<endl;
        }
};
int main(){
city *A[10];
int n=0,b;
do{
A[n]=new city;
A[n]->get_city();
n++;
cout<<"Press 1 to add more city otherwise press 0 for exit"<<endl;
cin>>b;
}
while(b);
    cout<<"\n               Displaying all cities"<<endl;
for(int i=0;i<n;i++){
    A[i]->display();
}

}
