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
    int hakbun_;
    string name_;
};

int main(void) {
    struct Student jisu;
    // 클래스는 defualt가 private이다.
    jisu.hakbun_ = 2202;
    jisu.name_ = "나지수";
    return 0;
}