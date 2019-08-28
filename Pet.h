#include <iostream>
#include <string>
using namespace std;
class Pet{
protected:
  string size;
  string age;
  char gender;
public:
  Pet();
  Pet(string,string,char);

  void setSize(string);
  void setAge(string);
  void setGender(char);
  void printInfo();

};
