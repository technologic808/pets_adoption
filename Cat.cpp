#include "Cat.h"
Cat::Cat(){}
Cat::Cat(string sz,string a,char gen,string h,bool ot)
{
  size = sz;
  age = a;
  gender = gen;
  hairLength = h;
  otherCats = ot;
}

void Cat::setHairLength(string h)
{
  hairLength = h;
}

string Cat::getHairLength()
{
  return hairLength;
}

void Cat::setOtherCats(bool ot)
{
  otherCats = ot;
}

bool Cat::getOtherCats()
{
  return otherCats;
}

void Cat::printInfo()
{
  cout<<"Hair Length: "<<hairLength<<endl;
  cout<<"Other Cats: "<<otherCats<<endl;
}
