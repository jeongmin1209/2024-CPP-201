#include <string>
#include <iostream>
using namespace std;

// 클래스는 디폴트가 private
struct Student {
	int hakbun_;
	string name_;
};
void main(void) {
	struct Student juyoung;
	juyoung.hakbun_ = 2115;
	juyoung.name_ = "윤주영";

}