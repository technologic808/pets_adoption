#include "Pet.h"

// Default Constructor
Pet::Pet(){}

// Parametric Constructor 
Pet::Pet(string sz,string a,char gen){
  	size = sz;
  	age = a;
  	gender = gen;
}

// Function to set size of pet
void Pet::setSize(string s){
  	size = s;
}

// Function to set age of pet
void Pet::setAge(string a){
  	age = a;
}

// Function to set gender of pet
void Pet::setGender(char c){
  	gender = c;
}

// Function to display gender of pet
void Pet::printInfo(){
  	cout << "Size: " << size << endl;
  	cout << "Age: " << age << endl;
  	if(gender == 'M')
    		cout<<"Gender: Male";
  	else
    		cout<<"Gender: Female";
}
