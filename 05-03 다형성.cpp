#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal(string name, unsigned int age, int leg_num)
        : name_(name), age_(age), leg_num_(leg_num)
    {
        cout << "ÀÌ¸§ : " << name_ << endl;
        cout << "³ªÀÌ : " << age_ << endl;
        cout << "´Ù¸® °¹¼ö : " << leg_num_ << endl;
    }

    virtual void walk(void) {
        cout << "°È´Ù" << endl;
    }
    virtual void bark(void) {
        cout << "Â¢´Ù" << endl;
    }
    virtual void eat(void) {
        cout << "¸Ô´Ù" << endl;

    }

private:
    string name_;
    unsigned int age_;
    int leg_num_;
};

class Dog : public Animal {
public:
    Dog(string name, unsigned int age, int leg_num, int loyalty)
        : Animal(name, age, leg_num), loyalty_(loyalty)
    {
        cout << "Ãæ¼ºµµ : " << loyalty_ << endl;
    }

    void bark() { cout << "¿ïÇÁ¿ïÇÁ" << endl; }
    void eat() { cout << "¿Õ~¿Õ~" << endl; }
    void walk() { cout << "¬r¬r¬r¬r" << endl; }
private:
    int loyalty_;
};

void main(void) {
    Animal* animal = new Dog("¸¶·ç", 5, 2, 100);

    delete animal;
}