#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char name[100];
	char resultName[100]="";
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << '\n';
		if (strlen(name) > strlen(resultName)) strcpy_s(resultName, sizeof(resultName), name);
	}
	cout << "가장 긴 이름은 "<< resultName;

}

// Mozart;Elvis Presley;Jim carry;Schubert;Dominggo;
/*
for 1번째 Mozart
for 2번째 Elvis Presley


*/