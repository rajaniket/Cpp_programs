#include<iostream>
using namespace std;
class Complex{
int real,img;
public:
    Complex(int r,int i)
    {
       real=r;
       img=i;
    }
    Complex()
    {
        real=0;
        img=0;
    }
void show()
{
    cout<<real<<"+i"<<img<<endl;
}
Complex operator + (Complex s)
{
    Complex temp;
    temp.img=s.img+img;
    temp.real=s.real+real;
    return temp;
}

};
int main()
{
    Complex x(1,2);
    Complex y(2,3);
    Complex z;
    z=x+y;
    z.show();

}
