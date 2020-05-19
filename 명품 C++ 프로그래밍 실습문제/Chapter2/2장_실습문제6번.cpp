#include <iostream>
using namespace std;

int main() {
	string password;
	string checkPassword;
	cout << "새 암호를 입력하세요>>";
	cin >> password;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> checkPassword;

	if (password == checkPassword) cout << "같습니다.";
	else cout << "같지 않습니다.";
}