#include "Cat.h"

// Default Constructor
Cat::Cat(){}

// Parametric Constructor
Cat::Cat(string h,bool ot){
  	hairLength = h;
  	otherCats = ot;
}

// Function to set hair length
void Cat::setHairLength(string h){
  	hairLength = h;
}

// Function to get hair length 
string Cat::getHairLength(){
  	return hairLength;
}

// Function to set other cats parameter
void Cat::setOtherCats(bool ot){
  	otherCats = ot;
}

// Function to get other cats parameter
bool Cat::getOtherCats(){
  	return otherCats;
}

// Function to print cat information
void Cat::printInfo()
{
	Pet::printInfo();
 	cout<<"Hair Length: "<<hairLength<<endl;
  	cout<<"Other Cats: "<<otherCats<<endl;
}
