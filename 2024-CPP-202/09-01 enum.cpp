#include <iostream>

using namespace std;

enum FoodStyle {
	KOREAN,
	JAPANESE,
	CHINESE
};

void main(void) {

	//�������� ����ϸ� �������� �������� �߰��� ���� �����ϰ� �߰��� �� �ִ�.
	int style = FoodStyle::KOREAN;


	switch (style)
	{
	case 0:
		cout << "��ġ, ��, �����" << endl;
		break;
	case 1:
		cout << "�ʹ�, �쵿, Ÿ�ھ߳�" << endl;
		break;
	case 2:
		cout << "������, ������, ���ķ�, " << endl;
		break;
	default:
		break;
	}

}