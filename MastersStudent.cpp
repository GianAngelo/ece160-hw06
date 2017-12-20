#include "MastersStudent.h"
#include <iostream>
#include <vector> 
#include "Student.h"
#include <iomanip>

MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln, int ugy, int msy, Major m): 
	Student(fn, ln, ugy, m), _ms_grad_year(msy) {}
	
float MastersStudent:: getMsGpa() {
  float total = 0; 	
		unsigned int t = 0;
		while (t < _ms_grades.size()) {
			total = _ms_grades[t] + total;
			t++;
		}
		return total / _ms_grades.size();
}

void MastersStudent::addMsGrade(float grade) {
  _ms_grades.push_back (grade);
	return;
}

void MastersStudent::printInfo() {
  Student::printInfo();
std::cout <<"MS "<< majorString(_major) <<": " << _ms_grad_year << std::endl;
std::cout << "MS GPA: " << std::setprecision(2) << getMsGpa() << std::endl;
}