#include"Pet.h"
class Dog:protected Pet{
protected:
  string breed;
  bool houseTrained;
public:
  Dog();
  Dog(string,string,char,string,bool);

  void setBreed(string);
  string getBreed();

  void setTrained(bool);
  bool getTrained();

  void printInfo();

};
