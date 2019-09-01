#ifndef DOG_H
#define DOG_H

#include"Pet.h"

class Dog : public Pet{
	protected:
  		string breed;
  		bool houseTrained;
	public:
  		// Default Constructor
		Dog();

		// Parametric Constructor
  		Dog(string,bool);

		// Function to set breed
  		void setBreed(string);

		// Function to get breed
  		string getBreed();

		// Function to set trained parameter
  		void setTrained(bool);

		// Function to get trained parameter
  		bool getTrained();

		// Function  to print dog information
  		void printInfo();

};

#endif
