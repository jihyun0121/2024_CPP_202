﻿#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory) {

	}

	virtual void show() {
		cout << "이름 : " << name_ << endl;
		cout << "땅(면적) : " << territory_ << endl;
		cout << "국민 : " << civil_ << endl;
		cout << "군사력 : " << force_ << endl;
	}

	virtual void attack(Food* target) = 0;

public:
	int civil_;		// 국민 수 
	int force_;		// 군사력 : 0이되면 멸망
	string name_;	// 이름
	int territory_;	// 땅(면적)
};

class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper)
		: Food(civil, force, name, territory), garlic_(garlic), pepper_(pepper) {
		ca_ = 0;
	}

	void show() {
		Food::show();
		cout << "마늘 : " << garlic_ << endl;
		cout << "고추 : " << pepper_ << endl;
	}

	void attack(Food* target) override {
		ca_++;
		if (ca_ % 3 == 0)
			target->force_ -= this->force_ * 2;
		else
			target->force_ -= this->force_;
	}

public:
	int garlic_;
	int pepper_;
	int ca_;
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {

	}

	void show() {
		Food::show();
		cout << "젤라틴 : " << gelatin_ << endl;
		cout << "설탕 : " << sugar_ << endl;
	}

	void attack(Food* target) override {
		target->force_ += this->force_;
	}

public:
	int gelatin_;
	int sugar_;
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		: Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {

	}

	void show() {
		Food::show();
		cout << "우유 : " << milk_ << endl;
		cout << "응고제 : " << rennet_ << endl;
	}

	void attack(Food* target) override {
		target->force_ -= this->force_ / 3;
	}

public:
	int milk_;
	int rennet_;
};

void main(void)
{
	Food* player = new Kimchi(15, 95, "갓김치", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "짜계치", 100, 20, 100);

	while (true)
	{
		system("cls");
		cout << "★나★" << endl;
		player->show();

		cout << endl << endl;
		cout << "★상대방★" << endl;
		friends->show();

		cout << "---------------------------------------------" << endl;

		int select;
		cout << "1. 공격" << endl;
		cout << "2. 특수1" << endl;
		cout << "3. 특수2" << endl;
		cout << "4. 방어" << endl;
		cout << endl;


		cin >> select;
		cout << endl;

		switch (select)
		{
		case 1:
			//TODO : 공격
			cout << "공격" << endl;
			cout << endl << endl;
			player->attack(friends)
			break;

		case 2:
			//TODO : 특수1
			cout << "특수1" << endl;
			cout << endl << endl;
			break;

		case 3:
			//TODO : 특수2
			cout << "특수2" << endl;
			cout << endl << endl;
			break;

		case 4:
			//TODO : 방어
			cout << "방어" << endl;
			cout << endl << endl;
			break;

		default:
			break;
		}

		system("pause");
	}

	delete friends;
	delete player;
}