#include <iostream>
using namespace std;

// Ŭ���� ����
class Animal {

public:
    int a, b, c, d;

    // �⺻ ������
    Animal() {}

    // ������ 1�� �Ű�����
    Animal(int a) {
        cout << "a" << endl;
        this->a = a;  // ��� ������ �Ű����� �� �Ҵ�
    }

    // ������ 2�� �Ű�����
    Animal(int a, int b) : Animal(a) {
        cout << "b" << endl;
        this->b = b;
    }

    // ������ 3�� �Ű�����
    Animal(int a, int b, int c) : Animal(a, b) {
        cout << "c" << endl;
        this->c = c;
    }

    // ������ 4�� �Ű�����
    Animal(int a, int b, int c, int d) : Animal(a, b, c) {
        cout << "d" << endl;
        this->d = d;
    }
};

int main() {
    Animal e(1, 2, 3, 4);  // ��ü ����
    return 0;
}
