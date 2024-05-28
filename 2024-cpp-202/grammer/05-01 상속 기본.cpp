#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, int age)
        : name_(name), age_(age) {}

    void show_person() {
        cout << name << "의 나이는 " << age << "입니다." << endl;
    }

private :
    string name_;
    int age_;
};

class Student : public Person {
public:
    Student(string name, int age, int id) : Person(name, age) {

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
    return 0;
}