#include <iostream>
using namespace std;
int main() {
	string str;
	string temp="";
	cout << "���ڿ� �Է�>>"; cin >> str;
	
	for (int i = 0; i<str.length(); i++) {
		temp += str[i];
		cout << temp << '\n';
	}

}