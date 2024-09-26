#include <iostream>

using namespace std;

enum FoodStyle {
	KOREAN,
	JAPANESE,
	CHINESE
};

void main(void) {

	//열거형을 사용하면 가독성도 좋아지고 중간에 값을 유연하게 추가할 수 있다.
	int style = FoodStyle::KOREAN;


	switch (style)
	{
	case 0:
		cout << "김치, 쌈, 비빔밥" << endl;
		break;
	case 1:
		cout << "초밥, 우동, 타코야끼" << endl;
		break;
	case 2:
		cout << "동파육, 마라탕, 탕후루, " << endl;
		break;
	default:
		break;
	}

}