#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[50] = "Hello";
	cout << strlen(name) << endl;
	
	if (strcmp(name, "Hello") == 0) {
		cout << "같습니다.";
	}
	else {
		cout << "다릅니다.";
	}
}