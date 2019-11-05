//Print a table of values of the function y=e^-x , for x varying from 0 t0 10 in step of 0.1 

#include<iostream>
 #include<math.h>
 using namespace std;
 int main(){
     int i,j,k;
     double result,x,y,z;
     cout<<"X  ";
     for(i=1;i<10;i++){
         x=i/10.0;
         cout<<x<<"    ";
     }
          for(i=0;i<10;i++){
             cout<<"\n"<<i<<"  ";
              for(j=1;j<10;j++){
                  x=i+(j/10.0);
                  result=exp(-x);
                 printf("%.3lf  ",result);

              }

          }

 }

