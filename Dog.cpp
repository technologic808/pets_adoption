#include "Dog.h"

// Default Constructor
Dog::Dog(){}

// Parametric Constructor
Dog::Dog(string b,bool ht){
  breed = b;
  houseTrained = ht;
}

// Function to set breed
void Dog::setBreed(string b){
  breed = b;
}

// Function to get breed
string Dog::getBreed(){
  return breed;
}

// Funtion to set trained parameter
void Dog::setTrained(bool t){
  houseTrained = t;
}

// Function to get trained parameter
bool Dog::getTrained(){
  return houseTrained;
}

// Function to print dog information
void Dog::printInfo(){
	Pet::printInfo();
  	cout<<"Breed: "<<breed<<endl;
  	cout<<"HouseTrained: "<<houseTrained<<endl;
}
