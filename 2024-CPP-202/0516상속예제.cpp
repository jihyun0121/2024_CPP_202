#include <iostream>
#include <string>

using namespace std;

class Animal {
//    string name;
//    int weight;
//
//public:
//    // �⺻ ������
//    Animal() { // �⺻������ �ʱ�ȭ
//        cout << "Animal ����" << endl;
//    }
//
//    // �Ű����� ������
//    Animal(const string& name, int weight) : name(name), weight(weight) { // ��� �ʱ�ȭ
//        cout << name << "�� ���Դ� " << weight << "�Դϴ�" << endl;
//        cout << "Animal ����" << endl;
//    }
//
//    ~Animal() { //�Ҹ���
//        cout << "Animal �Ҹ�" << endl;
//    }
//public:
//    //�⺻������
//    Animal() {
//        cout << name << "�⺻������" << endl;
//    }
public:
    void PrintMethod() {
        cout << "�θ� �����" << endl;
    }
};

class Cat : public Animal {
//public:
//    // �Ű����� ������
//    Cat(const string& name, int weight)
//        : Animal(name, weight) // Animal Ŭ������ �Ű����� ������ ȣ��
//    {
//        cout << "Cat ����" << endl;
//    }
//
//    ~Cat() {    //�Ҹ���
//        cout << "Cat �Ҹ�" << endl;
//    }
//public:
//    Cat(const string& name, int weight) {
//        cout << "Cat ȣ��" << endl;
//    }
public:
    void PrintMethod() {
        Animal::PrintMethod();
        cout << "�ڽ� �����" << endl;
    }
};

// `main` �Լ� ����
int main() {
    // Cat ��ü ����
    //Cat cat("�̸������", 55); // �̶� Animal�� �Ű����� �����ڰ� ȣ���

    Cat cat;
    cat.PrintMethod();

    return 0;
}
