//header -> function declarations
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI {
public:
	//default constructor
	BMI();
	//overload constructor
	BMI(string, int, double);
	//destructor
	~BMI();

	//Accessor Functions
	string getName() const;
		//Returns name
	
	int getHeight() const;
		//Returns Height
	
	double getWeight() const;
		//Returns Weight

	//Mutatator Functions
	void setName(string);
		//sets name of patient
		//param string name of patient
	
	void setHeight(int);
		//sets name of patient
		//param int height of patient

	void setWeight(double);
		//sets weight of patient
		//param double weight of patient
	
	double calcBMI();
		//calculates BMI of students
		//return double of BMI students

private:
	//member vairables
	string newName = "";
	int newHeight = 0;
	double newWeight = 0.;


};




#endif