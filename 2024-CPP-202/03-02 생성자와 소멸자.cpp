#include <iostream>
#include <string>

using namespace std;

class Student {
public:

    //TODO : �����ڿ��� �����Ҵ��� �� �޸� ������ ���� �� ����
    Student(int hakbun, const char* name) : hakbun_(hakbun)
    {
        int length = strlen(name);
        // '/0'�� ���� ���� 1byte ���� �ϳ� �� �߰�
        name_ = new char[length+1];

        cout << "������ ȣ�� �Ϸ�" << endl;

        strcpy(name_, name);

    }

    //�Ҹ��� : ��ü�� �Ҹ�� ��(�޸𸮿��� ������ ��) ȣ��Ǵ� �Լ�
    ~Student(void) {
        delete []name_;
        cout << "�Ҹ��� ȣ�� �Ϸ�" << endl;
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

    Student* stu = new Student(2213, "������");
    cout << "I'm funny" << endl;

    delete stu;

    cout << "I'm happy" << endl;

    return 0;
}