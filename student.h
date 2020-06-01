#include<string>
class Student {
	friend class StudentClass;
	static const int maxCourses_ = 2;
private:
	int id_;
	std::string name_;
	std::string courseNames_[maxCourses_];
	double grades_[maxCourses_];
public:
	Student(){}
	Student(int id, std::string name, std::string* a, double* b);
	Student(const Student& p);
	~Student(){}
	void setid_(int id);
	void setname_(std::string name);
	int getid_() const { return id_; }
	std::string getname_() const { return name_; }
	bool AddCourses(const std::string& courseName, double grade);
	void SetGrade(const std::string& courseName, double grade);
	double GetGrade(const std::string& courseName) const;
	double GetAverageGrade() const;
	void showGrades() const;
};
