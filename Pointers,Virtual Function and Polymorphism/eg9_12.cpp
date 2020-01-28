#include<iostream>
using namespace std;
//Parent class or super class or base class
class Animal{
public:
  virtual void animalSound(){
      cout<<"This is a generic Function";
   }
};
//child class or sub class or derived class
class Dog : public Animal{
public:
  virtual void animalSound(){
      cout<<"Woof";
   }
};
int main(){
   Animal *obj;
   obj = new Dog;
   obj->animalSound();
   Animal::obj->animalSound();
   return 0;
}
