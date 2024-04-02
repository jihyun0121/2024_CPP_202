#include <iostream>

//이름공간. std를 안해도 된다
using namespace std;

void call_by_reference(int* val)
{
    //새로운 지역변수 val을 만들고 val가 가리키고 있는 대상의 값을 바꾼다.
    *al = 10;
}
int main(void)
{
    int num = 4;
    //num의 값은 바뀌지 않는다.
    call_by_reference(&num);
    cout << num;
    return 0;
}