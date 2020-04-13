#include <iostream>
#include <cstring>
using namespace std;
int main() {
	cout << "문자들을 입력하라(100개 미만).\n";
	char str[100];
	int cnt = 0;
	cin.getline(str, 100, '\n');
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'x') {
			cnt++;
		}
	}
	cout << "x의 개수는 " << cnt;
}

