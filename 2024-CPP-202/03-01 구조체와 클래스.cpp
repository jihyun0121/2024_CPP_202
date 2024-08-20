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
    Student() {
        //this : �ڱ� �ڽ��� ����Ű�� ������
        //����� ��Ȯ�ϰ� ����ų �� �ִ�.
        this -> hakbun_ = 2222;
        name_ = "mirim";
    }

    //������� �ʱ�ȭ : const/���� ��������� �ʱ�ȭ �� �� �ִ�.
    Student(int hakbun, string name) : hakbun_(hakbun), name_(name)
    {
    }

    //Ŭ������ ����� ���
    void show(){
        cout << hakbun_ << " ";
        cout << name_ << endl;
    }   

private:
    int hakbun_;
    string name_;
};

int main(void) {
    //�����Ҵ� : �޸𸮴� heap���� �Ҵ�. ���� �� �޸� ũ�Ⱑ ������
    Student* str = new Student[3]{
        {2202, "������"},
        {2203, "������"},
        {2215, "�ߴ���"},
    };

    for(int i = 0; i < 3; i++)
        str[i].show();

    // �迭�� �����Ҵ� ����
    delete []str;
    return 0;
}