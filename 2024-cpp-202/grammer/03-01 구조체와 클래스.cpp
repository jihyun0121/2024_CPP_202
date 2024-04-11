#include <iostream>
#include <string>

using namespace std;

//struct Student {
//    int hakbun_;
//    string name_;
//};
//
//int main(void) {
//    struct Student jisu;
//    // 구조체는 defualt가 public이다.
//    jisu.hakbun_ = 2202;
//    jisu.name_ = "나지수";
//    return 0;
//}

class Student {
public:
    // 생성자 : 객체가 생성될 대 호출되는 함수
    // 생성자는 반환형이 없다
    Student() {
        hakbun_ = 2222;
        name_ = "mirim";
    }

    Student(int hakbun, string name) {
        hakbun_ = hakbun;
        name_ = name;
    }

    //클래스의 멤버를 출력
    void show(){
        cout << hakbun_ << endl;
        cout << name_ << endl;
    }

private:
    int hakbun_;
    string name_;
};
s
int main(void) {
    Student jisu = Student(2202, "나지수");
    Student mirim = Student();
    jisu.show();
    mirim.show();
    return 0;
}