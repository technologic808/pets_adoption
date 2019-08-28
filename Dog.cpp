#include "Dog.h"
Dog::Dog(){}
Dog::Dog(string sz,string a,char gen,string b,bool ht)
{
  size = sz;
  age = a;
  gender = gen;
  breed = b;
  houseTrained = ht;
}

void Dog::setBreed(string b)
{
  breed = b;
}

string Dog::getBreed()
{
  return breed;
}

void Dog::setTrained(bool t)
{
  houseTrained = t;
}

bool Dog::getTrained()
{
  return houseTrained;
}


void Dog::printInfo()
{
  cout<<"Breed: "<<breed<<endl;
  cout<<"HouseTrained: "<<houseTrained<<endl;
}
