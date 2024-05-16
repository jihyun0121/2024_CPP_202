#include <iostream>
#include <string>

using namespace std;

// 기본 클래스 Monster 정의
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

// Goblin 클래스: Monster 클래스를 상속받음
class Goblin : public Monster {
public:
    Goblin(const string& name, int health) : Monster(name, health) {}
    void specialAbility() {
        cout << name << " uses sneak attack!" << endl;
    }
};

// Dragon 클래스: Monster 클래스를 상속받음
class Dragon : public Monster {
public:
    Dragon(const string& name, int health) : Monster(name, health) {}
    void breatheFire() {
        cout << name << " breathes fire!" << endl;
    }
};

int main() {
    // Goblin 객체 생성
    Goblin goblin("Grumpy", 50);
    goblin.attack();
    goblin.specialAbility();

    // Dragon 객체 생성
    Dragon dragon("Smaug", 100);
    dragon.attack();
    dragon.breatheFire();

    return 0;
}
