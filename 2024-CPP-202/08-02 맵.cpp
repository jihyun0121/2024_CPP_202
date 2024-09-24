#include <iostream>
#include <map>

using namespace std;

void main(void) {
	map<string, long long> money;

	//裘 蹺陛
	money["雖熱"] = 10000000000;
	money["熱綴"] = 30000000000;
	money["團摹"] = 100;

	//奩犒濠
	map<string, long long>::iterator iter;
	for (iter = money.begin(); iter != money.end(); iter++) {
		cout << iter->first << "擎(朝)" << iter->second << endl;
	}

	//高 熱薑
	money["團摹"] = 10000000000;
	cout << money["團摹"] << endl;

	cout << money.size() << endl;

}