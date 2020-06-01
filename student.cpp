#include<iostream>
#include"student.h"
Student::Student(int id, std::string name, std::string* a, double* b)
{
	id_ = id;
	name_ = name;
	for (int i = 0;i < maxCourses_;i++)
	{
		courseNames_[i] = a[i];
		grades_[i] = b[i];
	}
}
Student::Student(const Student& p)
{
	id_ = p.id_;
	name_ = p.name_;
	for (int i = 0;i < maxCourses_;i++)
	{
		courseNames_[i] = p.courseNames_[i];
		grades_[i] = p.grades_[i];
	}
}
void Student::setid_(int id)
{
	id_ = id;
}
void Student::setname_(std::string name)
{
	name_ = name;
}
bool Student::AddCourses(const std::string& courseName, double grade)
{
	std::cout << "course:" << courseName <<"  "<< "grade:" << grade << std::endl;
	return -1;
}
void Student::SetGrade(const std::string& courseName, double grade)
{
	for (int i = 0;i < maxCourses_;i++)
	{
		courseNames_[i] = courseName[i];
		grades_[i] = grade;
	}
}
double Student::GetGrade(const std::string& courseName) const
{
	for (int i = 0;i < maxCourses_;i++)
	{
		if (courseName == courseNames_[i])
			return grades_[i];
		else return 0;
	}
}
double Student::GetAverageGrade() const
{
	double t = 0;
	for (int i = 0;i < maxCourses_;i++)
		t += grades_[i];
	return t / maxCourses_;
}
void Student::showGrades() const
{
	for (int i = 0;i < maxCourses_;i++)
	{
		std::cout << grades_[i];
	}
}