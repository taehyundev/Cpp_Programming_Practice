#include <iostream>
using namespace std;

int main() {
	string password;
	string checkPassword;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> password;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> checkPassword;

	if (password == checkPassword) cout << "�����ϴ�.";
	else cout << "���� �ʽ��ϴ�.";
}