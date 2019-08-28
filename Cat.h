#include"Pet.h"
class Cat:protected Pet{
protected:
  string hairLength;
  bool otherCats;
public:
  Cat();
  Cat(string,string,char,string,bool);

  void setHairLength(string);
  string getHairLength();

  void setOtherCats(bool);
  bool getOtherCats();

  void printInfo();

};
