#include <string>
#include <iostream>
#include <print>
using namespace std;

class Student {
public:
	Student(int hakbun, string name) {
		hakbun = hakbun;
		name_ = name;
	}
	Student() {
		hakbun_ = 2121;
		name_ = "JWP"
	}
	
	void 
private:
	int hakbun_;
	string name_;
};

void main(void) {
	Student* stu = new Student[3]{
		{2115, "윤주영"},
		{2121, "JWP"},
		{2104, "위즈덤"}
	};

	for (int i = 0; i < 3; i++) {
		stu[i].print();
		// 동적 할당된 배열 삭제
		delete[]stu;
	}
}