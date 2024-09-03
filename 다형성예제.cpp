#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory) :
		civil_(civil), force_(force_), name_(name), territory_(territory) {

	}

	virtual void show() {
		cout << "ÀÌ¸§ : " << name_ << endl;
		cout << "¶¥(¸éÀû) : " << territory_ << endl;
		cout << "±¹¹Î : " << civil_ << endl;
		cout << "±º»ç·Â : " << force_ << endl;
	}

private:
	int civil_;		// ±¹¹Î ¼ö 
	int force_;		// ±º»ç·Â
	string name_;	// ÀÌ¸§
	int territory_;	// ¶¥(¸éÀû)
};

class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper)
		: Food(civil, force, name, territory), garlic_(garlic), pepper_(pepper) {

	}

	void show() {
		Food::show();
		cout << "¸¶´Ã : " << garlic_ << endl;
		cout << "°íÃß : " << pepper_ << endl;
	}

private:
	int garlic_;
	int pepper_;
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {

	}

	void show() {
		Food::show();
		cout << "Á©¶óÆ¾ : " << gelatin_ << endl;
		cout << "¼³ÅÁ : " << sugar_ << endl;
	}

private:
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
		cout << "¿ìÀ¯ : " << milk_ << endl;
		cout << "ÀÀ°íÁ¦ : " << rennet_ << endl;
	}

private:
	int milk_;
	int rennet_;
};

void main(void)
{
	Food* player = new Kimchi(15, 95, "°«±èÄ¡", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "Â¥°èÄ¡", 100, 20, 100);

	player->show();
	friends->show();

	delete friends;
	delete player;
}