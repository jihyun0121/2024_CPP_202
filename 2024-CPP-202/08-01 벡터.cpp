#include <iostream>
#include <vector>

using namespace std;

void main(void) {
	vector<long long> v;

	//미리 공간을 많이 확보하자
	v.reserve(100);

	//벡터 추가
	v.push_back(4);
	v.push_back(6);
	v.push_back(4567);
	v.push_back(632);
	v.push_back(225);
	v.push_back(4616164515);

	cout << v[0] << endl;
	cout << v.at(1) << endl;

	cout << v[5] << endl;
	v[5] = 50000000000;
	cout << v[5] << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	v.pop_back();
	v.pop_back();

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

}