#include "Pet.h"
Pet::Pet(){}
Pet::Pet(string sz,string a,char gen)
{
  size = sz;
  age = a;
  gender = gen;
}

void Pet::setSize(string s)
{
  size = s;
}

void Pet::setAge(string a)
{
  age = a;
}

void Pet::setGender(char c)
{
  gender = c;
}

void Pet::printInfo()
{
  cout<<"Size: "<<size<<endl;
  cout<<"Age: "<<age<<endl;
  if(gender == 'M')
    cout<<"Gender: Male";
  else
    cout<<"Gender: Female";
}
