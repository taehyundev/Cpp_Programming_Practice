#include <iostream>
using namespace std;
using namespace std;
int main() {
	int cnt = 0;
	char getStr[100];
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	cin.getline(getStr, 100, '\n');

	for (int i = 0; i < sizeof(getStr); i++) {
		if (getStr[i] == 'x') cnt++;
	}
	cout << "x�� ������" << cnt;
	
}