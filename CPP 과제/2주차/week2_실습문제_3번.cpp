#include <iostream>
using namespace std;
int main() {
	cout << "문자열 입력>>";
	string str;
	cin >> str;
	string temp;
	for (int i = 0; i < str.length(); i++) {
		temp += str[i];
		cout << temp <<endl;
	}
}

