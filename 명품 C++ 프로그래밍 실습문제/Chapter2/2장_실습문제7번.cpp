#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(str, 100, '\n');
		if (!strcmp(str,"yes")) {
			cout << "종료합니다...";
			break;
		}
	}
}