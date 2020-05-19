#include <iostream>
using namespace std;
int main() {
	string str;
	string temp="";
	cout << "문자열 입력>>"; cin >> str;
	
	for (int i = 0; i<str.length(); i++) {
		temp += str[i];
		cout << temp << '\n';
	}

}