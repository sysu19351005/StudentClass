#include"student.h"
#include<string>
class StudentClass 
{
	static const int maxStudents_ = 20;
private:
	static int studentCount_;
	std::string code_;
	Student* students_[maxStudents_];
public:
	StudentClass(){}
	StudentClass(std::string code, Student* students[maxStudents_]);
	StudentClass(const StudentClass& p);
	~StudentClass(){}
	std::string getcode_() { return code_; }
	bool AddStudent(const Student* student);
	void ShowStudent(int id) const;
	void ShowStudentsByIdOrder(bool (*compare)(int, int));
	static void showStudentCount();
};
