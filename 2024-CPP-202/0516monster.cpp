#include <iostream>
#include <string>

using namespace std;

// �⺻ Ŭ���� Monster ����
class Monster {
protected:
    string name;
    int health;
public:
    Monster(const string& name, int health) : name(name), health(health) {}
    void attack() {
        cout << name << " attacks! " << endl;
    }
};

// Goblin Ŭ����: Monster Ŭ������ ��ӹ���
class Goblin : public Monster {
public:
    Goblin(const string& name, int health) : Monster(name, health) {}
    void specialAbility() {
        cout << name << " uses sneak attack!" << endl;
    }
};

// Dragon Ŭ����: Monster Ŭ������ ��ӹ���
class Dragon : public Monster {
public:
    Dragon(const string& name, int health) : Monster(name, health) {}
    void breatheFire() {
        cout << name << " breathes fire!" << endl;
    }
};

int main() {
    // Goblin ��ü ����
    Goblin goblin("Grumpy", 50);
    goblin.attack();
    goblin.specialAbility();

    // Dragon ��ü ����
    Dragon dragon("Smaug", 100);
    dragon.attack();
    dragon.breatheFire();

    return 0;
}
