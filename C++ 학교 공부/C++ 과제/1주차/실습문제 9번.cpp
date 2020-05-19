#include <iostream>
using namespace std;

int main() {
	char name[100];
	char city[100];
	int age;
	cout << "이름은?";
	cin.getline(name, 100, '\n');
	cout << "주소는?";
	cin.getline(city, 100, '\n');
	cout << "나이는?";
	cin >> age;
	cout << name << ", " << city << ", " << age << "세";
	
}
