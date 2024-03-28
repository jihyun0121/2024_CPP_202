#include <iostream>
// 이름공간
using namespace std;

void erase(int* ptr, int length) {
	for (int i = 0; i < length; i++) {
		ptr[i] = 0;
	}
}

int main(void) {
	int arr[4] = {10, 20, 30, 40};
	int length = sizeof(arr) / sizeof(arr[0]);
	erase(arr, length);
	for (int i = 0; i < sizeof(arr); i++) {
		printf("%d ", arr[i]);
	}
}