#include"student_class.h"
#include<string>
StudentClass::StudentClass(std::string code, Student* students[maxStudents_]) 
{
	code_ = code;
	for (int i = 0;i < maxStudents_;i++)
		students_[i] = students[i];
}
StudentClass::StudentClass(const StudentClass& p)
{
	code_=p.code_;
	for (int i = 0;i < maxStudents_;i++)
		students_[i] = p.students_[i];
}
bool StudentClass::AddStudent(const Student* student)
{

}
void StudentClass::ShowStudent(int id) const
{

}
void StudentClass::ShowStudentsByIdOrder(bool (*compare)(int, int))
{
}
 static void StudentClass::showStudentCount()
{

}