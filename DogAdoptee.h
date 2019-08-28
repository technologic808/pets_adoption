#include"Dog.h"
class DogAdoptee:protected Dog{
protected:
  string name;
  string activityLevel;
public:
  DogAdoptee();
  DogAdoptee(string,string,char,string,bool,string,string);

  void setName(string);
  string getName();

  void setActivity(string);
 string getActivity();

  void printInfo();

};
