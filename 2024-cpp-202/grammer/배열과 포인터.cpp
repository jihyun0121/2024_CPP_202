#include <iostream>
// 이름공간
using namespace std;

int main(void) {
	int arr[4] = {1, 2, 3, 4};
	char str[4] = "abc";

	printf("%d / %d\n", &arr[0], &arr[1]);
	printf("%d / %d", *(arr+0), *(arr+1));
}