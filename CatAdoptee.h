#include"Cat.h"
class CatAdoptee:protected Cat{
protected:
  string name;
  string personality;
public:
  CatAdoptee();
  CatAdoptee(string,string,char,string,bool,string,string);

  void setName(string);
  string getName();

  void setPersonality(string);
  string getPersonality();

  void printInfo();

};
