#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>
using namespace std;

class Pet{
	private:
		string size;
		string age;
		char gender;
	public:
		// Default constructor
  		Pet();

		// Parametric constructor
  		Pet(string,string,char);

		// Function to set size of pet
  		void setSize(string);

		// Function to set age of pet
  		void setAge(string);

		// Function to set gender of pet
  		void setGender(char);

		// Function to print pet information 
  		void printInfo();

};

#endif
