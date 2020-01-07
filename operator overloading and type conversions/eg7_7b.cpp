// example on one class to another class type conversion
// using casting operator function which return destination class object and should be define inside source class
#include <iostream>
using namespace std;
// Taking ABCD as a source class, and we are defining it over abc ,because in class abc is needed it and exact size and other things will required intially
// That's why we are defining abcd instead of declearing in it on top; 
class abcd{
int b;
public:
abcd(){b=1;}
abcd(int a){b=a;}
operator int(){
return b;}
};

class abc{
int a;
public:
abc(){a=1;}
abc(int k){a=k;}
operator int(){
return a;}

operator abcd(){
abcd temp(a*a); // we cant do this --> temp.b=a ,because b is private thats why i initialized it using constructure indirectly => b=a^2
return temp;
}

};
int main(){
abc F(5);
abcd K;
K=F;
//F=K;   for this you have to define       operator abc(){    |   this function inside class abcd()
                                     //    abcd temp(b*b);    |
                                    //     return temp;}      |
cout<<F<<endl;
cout<<K;
}
