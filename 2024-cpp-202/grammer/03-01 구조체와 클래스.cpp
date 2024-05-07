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
        //this : 자기 자신을 가리키는 포인터
        //멤버를 명확하게 가리킬 수 있다.
        this -> hakbun_ = 2222;
        name_ = "mirim";
    }

    //멤버변수 초기화 : const/참조 멤버변수를 초기화 할 수 있다.
    Student(int hakbun, string name) : hakbun_(hakbun), name_(name)
    {
    }

    //클래스의 멤버를 출력
    void show(){
        cout << hakbun_ << " ";
        cout << name_ << endl;
    }   

private:
    int hakbun_;
    string name_;
};

int main(void) {
    //동적할당 : 메모리는 heap에서 할당. 실행 시 메모리 크기가 정해짐
    Student* str = new Student[3]{
        {2202, "나지수"},
        {2203, "박지영"},
        {2215, "추다율"},
    };

    for(int i = 0; i < 3; i++)
        str[i].show();

    // 배열의 동적할당 해제
    delete []str;
    return 0;
}