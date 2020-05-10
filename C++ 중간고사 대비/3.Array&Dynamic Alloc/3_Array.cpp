#include <iostream>
using namespace std;

int main() {
	int data[10];
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> data[i];
		sum += data[i];
	}
	cout << "sum = " << sum;
}