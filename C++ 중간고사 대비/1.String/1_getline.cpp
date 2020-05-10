#include <iostream>
using namespace std;

int main() {
	char name[50];
	cin.getline(name, 50, ';');
	cout << name;
}