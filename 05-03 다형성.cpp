#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal(string name, unsigned int age, int leg_num)
        : name_(name), age_(age), leg_num_(leg_num)
    {}

    void walk(void) {
        cout << "°È´Ù." << endl;
    }
    void bark(void) {
        cout << "Â¢´Ù." << endl;
    }
    void eat(void) {
        cout << "¸Ô´Ù." << endl;

    }

private:
    string name_;
    unsigned int age_;
    int leg_num_;
};


void main(void) {
    Animal* animal = new Animal("¿ä¾ÆÁ¶ºñ", 8, 2);
    animal->bark();
    animal->eat();
    animal->walk();
    delete animal;

}