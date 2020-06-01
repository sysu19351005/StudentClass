#include<iostream>
#include"student.h"
using namespace std;
bool ascending(int id_a, int id_b)
{
	return id_b > id_a;
}
bool descending(int id_a, int id_b)
{
	return id_a < id_b;
}
int main()
{
	string aa[2] = { "Robotics","C++" };//a表示课程名
	double bb[2] = { 90.0,95.0 };//b表示课程对应的学生成绩
	double cc[2] = { 92.0,93.0 };
	Student a(01, "Bob", aa, bb);
	cout << "id:" << a.getid_() << endl;
	cout << "name:" << a.getname_() << endl;
	cout << "course:Robotics" << " " <<"grade:"<< a.GetGrade("Robotics") << endl;
	cout << "course:C++" << " " << "grade:"<<a.GetGrade("C++") << endl;
	a.AddCourses("math", 95.0);
	Student b;
	b.setid_(02);
	b.setname_("John");
	b.SetGrade("Robotics", 91.0);
	b.SetGrade("c++", 92.0);
	cout << "id:" << b.getid_() << endl;
	cout << "name:" << b.getname_() << endl;
	cout << "course:Robotics" << " " << "grade:"<<b.GetGrade("Robotics") << endl;
	cout << "course:C++" << " " <<"garde:"<< b.GetGrade("C++") << endl;
	a.AddCourses("math", 93.0);
	Student c(03, "Alice", aa, cc);
	cout << "id:" << c.getid_() << endl;
	cout << "name:" << c.getname_() << endl;
	cout << "course:Robotics" << " " << c.GetGrade("Robotics") << endl;
	cout << "course:C++" << " " << c.GetGrade("C++") << endl;
	c.AddCourses("math", 95);
	return 0;
}