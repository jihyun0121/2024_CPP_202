#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, int age)
        : name_(name), age_(age) {
        cout << "부모 생성자 호출" << endl;
    }

    ~Person() {
        cout << "부모 소멸자 호출" << endl;
    }
    void show_person() {
        cout << name_ << "의 나이는 " << age_ << "입니다." << endl;
    }

private :
    string name_;
    int age_;
};

class Student : public Person {
public:
    Student(string name, int age, int id) : Person(name, age) {
        cout << "자식 생성자 호출" << endl;
    }
    ~Student() {
        cout << "자식 소멸자 호출" << endl;
    }

    void show_person() {
        cout << id_ << " ";
        Person::show_person();
    }

private:
    int id_;
};

int main(void) {

    Student* stu = new Student("BJH", 18, 2204);
    stu->show_person();
    delete stu;
    return 0;
}