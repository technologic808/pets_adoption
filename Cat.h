#ifndef CAT_H
#define CAT_H

#include"Pet.h"

class Cat : public Pet{
	private:
  		string hairLength;
  		bool otherCats;
	public:
		// Default Constructor
  		Cat();

		// Parametric Constructor
  		Cat(string,bool);
		
		// Function to set hair length of cat
  		void setHairLength(string);

		// Function to get hair length of cat
  		string getHairLength();

		// Function to set other cats parameter
  		void setOtherCats(bool);

		// Function to get other cats parameter
  		bool getOtherCats();

		// Function to print cat information
  		void printInfo();

};

#endif
