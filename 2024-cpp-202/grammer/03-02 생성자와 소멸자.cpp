#include <iostream>
#include <string>

using namespace std;

class Student {
public:

    //TODO : 생성자에서 동적할당을 한 메모리 공간을 지울 수 없다
    Student(int hakbun, const char* name) : hakbun_(hakbun)
    {
        int length = strlen(name);
        // '/0'이 들어가기 위해 1byte 공간 하나 더 추가
        name_ = new char[length+1];

        strcpy(name_, name);

    }

    //소멸자 : 객체가 소멸될 때(메모리에서 지워질 때) 호출되는 함수
    ~Student(void) {
        delete []name_;
    }

    void show(void){
        cout << hakbun_ << " ";
        cout << name_ << endl;
    }

private:
    int hakbun_;
    char* name_;
};

int main(void) {

    Student* stu = new Student(2213, "조수빈");
    stu->show();
    delete stu;

    return 0;
}