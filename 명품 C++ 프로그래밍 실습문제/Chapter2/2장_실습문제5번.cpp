#include <iostream>
using namespace std;
using namespace std;
int main() {
	int cnt = 0;
	char getStr[100];
	cout << "문자들을 입력하라(100개 미만).\n";
	cin.getline(getStr, 100, '\n');

	for (int i = 0; i < sizeof(getStr); i++) {
		if (getStr[i] == 'x') cnt++;
	}
	cout << "x의 개수는" << cnt;
	
}