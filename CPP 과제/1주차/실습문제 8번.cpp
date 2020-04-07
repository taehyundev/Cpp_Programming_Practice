#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int T = 5;
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n";
	cout << ">>";
	int len;
	string temp;
	for (int i = 0; i < T; i++) {
		char name[100];
		cin.getline(name, 100, ';');
		if (i == 0) {
			len = strlen(name);
			temp = name;
		}
		else {
			if (len < strlen(name)) {
				len = strlen(name);
				temp = name;
			}
		}

		cout << i+1 <<" : " << name<<endl;
	}
	cout << "가장 긴 이름은 " << temp;

}