#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char name[100];
	char resultName[100]="";
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << '\n';
		if (strlen(name) > strlen(resultName)) strcpy_s(resultName, sizeof(resultName), name);
	}
	cout << "���� �� �̸��� "<< resultName;

}

// Mozart;Elvis Presley;Jim carry;Schubert;Dominggo;
/*
for 1��° Mozart
for 2��° Elvis Presley


*/