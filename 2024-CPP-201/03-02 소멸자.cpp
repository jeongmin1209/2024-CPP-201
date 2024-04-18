#include<iostream>
#include<string.h>
using namespace std;

class Student {
public:
	Student(int hakbun, char* name)
		: hakbun_(hakbun), name_(name) 
	{
		this->hakbun_ = hakbun;

		name_ = new char[18];

		strcpy(name_, name);
	}
	Student(){}

	Student()
	{
		delete[] name_;
	}
	void print(void){
		cout << hakbun_ << " " << name_ << endl;
	}
private:
	int hakbun_;
	char* name_;
};

void main(void) {
	Student stu = Student(2115,(char*) "윤주영");
	stu->print();

	delete stu;
}