#include"CatAdoptee.h"

  CatAdoptee::CatAdoptee(){}
  CatAdoptee::CatAdoptee(string sz,string a,char gen,string hl,bool ot,string nm,string pr)
  {
	size = sz;
	age = a;
	gender = gen;
  hairLength = hl;
	otherCats = ot;
	name = name;
	personality = pr;
  }
  void CatAdoptee::setName(string nm)
  {
	name = nm;
  }
  string CatAdoptee::getName()
  {
  	return name;
  }

  void CatAdoptee::setPersonality(string pr)
  {
	 personality = pr;
  }
  string CatAdoptee::getPersonality()
  {
	  return personality;
  }

  void CatAdoptee::printInfo()
  {
	cout<<"Size: "<<size<<endl;
	cout<<"age: "<<age<<endl;
	if(gender == 'M')
		cout<<"Gender: Male"<<endl;
	else
		cout<<"Gender: Female"<<endl;
	cout<<"Hair Length: "<<hairLength;
	cout<<"Other Cats: "<<otherCats<<endl;
	cout<<"Name: "<<name;
	cout<<"Personality: "<<personality<<endl;
  }
