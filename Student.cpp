#include "Student.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

Student::Student(std::string fn, std::string ln, int y, Major m){
	_first_name = fn;
	_last_name = ln;
	_grad_year = y;
	_major = m;
	return;
}
//things to do: majors, grades/gpa, then adding grades
Student::~Student(){ //deconstructs student
}
std::string Student::majorString(Major m){ // differentiating majors
	switch (m) {
			case Major::EE: 
				return "EE";
				break;
			case Major::ME:
				return "ME";
				break;
			case Major::CE:
				return "CE";
				break;
			case Major::CHE:
				return "CHE";
				break;
			case Major::BSE:
				return "BSE";
				break;
			case Major::ART:
				return "ART";
				break;
			case Major::ARCH:
				return "ARCH";
				break;
				}
	return 0;
}
	
float Student::getGpa(){ //calculating gpa
		float total = 0; 	
		unsigned int toby = 0;
		while (toby < _grades.size()) {
			total = _grades[toby] + total;
			toby++;
		} 
		return total / _grades.size();
	}

void Student::addGrade(float grade){ // adding individual gpa's
	_grades.push_back (grade);
	return;
	}

const std::string& Student::getLastName(){
	return _last_name;
}
void Student::printInfo(){
	  std::cout << _last_name << ", " << _first_name << std::endl; std::cout << majorString(_major) << " " << _grad_year << std::endl; std::cout << "GPA: " << std::fixed << std::setprecision(2) << getGpa() << std::endl;
	}