#include <iostream>
using namespace std;
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
abcd temp(a*a);
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
