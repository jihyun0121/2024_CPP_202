#include <iostream>

//�̸�����. std�� ���ص� �ȴ�
using namespace std;

void call_by_reference(int* val)
{
    //���ο� �������� val�� ����� val�� ����Ű�� �ִ� ����� ���� �ٲ۴�.
    *val = 10;
}
int main(void)
{
    int num = 4;
    //num�� ���� �ٲ��� �ʴ´�.
    call_by_reference(&num);
    cout << num;
    return 0;
}