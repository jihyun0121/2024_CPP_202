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
//    // ����ü�� defualt�� public�̴�.
//    jisu.hakbun_ = 2202;
//    jisu.name_ = "������";
//    return 0;
//}

class Student {
public:
    // ������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
    // �����ڴ� ��ȯ���� ����
    Student(int hakbun, string name) {
        hakbun_ = hakbun;
        name_ = name;
    }
private:
    int hakbun_;
    string name_;
};

int main(void) {
    Student jisu = Student(2202, "������");
    return 0;
}