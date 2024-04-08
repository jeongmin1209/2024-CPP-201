#include <string>
#include <iostream>
using namespace std;

class Student {
public:
	Student(int hakbun, string name) {
		hakbun = hakbun;
		name_ = name;
	}
private:
	int hakbun_;
	string name_;
};

void main(void) {
	// 매개 변수가 없는 생성자를 호출
	// Student juyoung = Student();
	Student juyoung = Student(2115, "윤주영");
}