#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, int hakbun)
        : name_(name), hakbun_(hakbun) {
    }

    ~Person() {
    }
    void PrintShow() {
        cout << name_ << "의 학번은 " << hakbun_ << "입니다." << endl;
    }

private:
    string name_;
    int hakbun_;
};

class Student : public Person {
public:
    Student(string name, int hakbun, string university) : Person(name, hakbun), university_(university) {
    }
    ~Student() {
    }

    void PrintShow() {
        cout << university_ << " ";
        Person::PrintShow();
    }

private:
    string university_;
};

int main(void) {

    Student* stu = new Student("BJH", 2204, "MIRIM");
    stu->PrintShow();

    delete stu;
    return 0;
}