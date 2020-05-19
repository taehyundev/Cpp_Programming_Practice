#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		cout << i << "\t";
		if (i % 10 == 0) {
			cout << endl;
		}

	}
}