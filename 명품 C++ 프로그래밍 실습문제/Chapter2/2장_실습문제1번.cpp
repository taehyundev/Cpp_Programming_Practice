#include <iostream>
using namespace std;
int main() {
	const int MAX = 100;
	for (int i = 1; i <= MAX; i++) {
		cout << i << "\t";
		if (i % 10 == 0) {
			cout << "\n";
		}
	}
}