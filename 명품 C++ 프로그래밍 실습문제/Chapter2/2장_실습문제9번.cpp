#include <iostream>
using namespace std;

int main() {
	char name[100];
	char address[100];
	int age;
	cout << "�̸���?"; cin.getline(name, sizeof(name), '\n');
	cout << "�ּҴ�?"; cin.getline(address, sizeof(address), '\n');
	cout << "���̴�?"; cin >> age;
	cout << name << ", " << address << ", " << age<<"��";
}