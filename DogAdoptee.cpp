#include"DogAdoptee.h"

  DogAdoptee::DogAdoptee(){}
  DogAdoptee::DogAdoptee(string sz,string a,char gen,string brd,bool tr,string nm,string ac)
  {
	size = sz;
	age = a;
	gender = gen;
	breed = brd;
	houseTrained = tr;
	name = name;
	activityLevel = ac;
  }
  void DogAdoptee::setName(string nm)
  {
	name = nm;
  }
  string DogAdoptee::getName()
  {
  	return name;
  }

  void DogAdoptee::setActivity(string ac)
  {
	activityLevel = ac;
  }
  string DogAdoptee::getActivity()
  {
	  return activityLevel;
  }

  void DogAdoptee::printInfo()
  {
	cout<<"Size: "<<size<<endl;
	cout<<"age: "<<age<<endl;
	if(gender == 'M')
		cout<<"Gender: Male"<<endl;
	else
		cout<<"Gender: Female"<<endl;
	cout<<"Breed: "<<breed;
	cout<<"House Trained: "<<houseTrained<<endl;
	cout<<"Name: "<<name;
	cout<<"Activity Level: "<<activityLevel<<endl;
  }

